#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    socket = new QTcpSocket(this);

    connect(socket, &QTcpSocket::readyRead, this, &MainWindow::slotReadyRead);
    connect(socket, &QTcpSocket::destroyed, socket, &QTcpSocket::deleteLater);

    nextBlockSize = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slotReadyRead()
{
    QDataStream in(socket);
    in.setVersion(version);
    if(in.status() == QDataStream::Ok){
        for(;;) {
            if (nextBlockSize == 0) {
                if (socket->bytesAvailable() < 2)
                    break;
                in >> nextBlockSize;
            }
            if (socket->bytesAvailable() < nextBlockSize)
                break;

            QString str;
            QTime time;
            in >> time >> str;
            nextBlockSize = 0;
            ui->textBrowser->append(time.toString() + " " + str);
            break;
        }
    }
    else{
        ui->textBrowser->append("QDataStream error!");
    }
}

void MainWindow::sendToServer(QString str)
{
    data.clear();
    QDataStream out(&data, QIODevice::WriteOnly);
    out.setVersion(version);
    out << quint16(0) << QTime::currentTime() << str;
    out.device()->seek(0);
    out << quint16(data.size() - sizeof(quint16));
    socket->write(data);
    ui->lineEdit->clear();
}

void MainWindow::on_pushButton_clicked()
{
    auto port = ui->lineEdit_3->text().toUShort();
    auto ip = ui->lineEdit_2->text();

    socket->connectToHost(ip, port);
}


void MainWindow::on_pushButton_2_clicked()
{
    sendToServer(ui->lineEdit->text());
}


void MainWindow::on_lineEdit_returnPressed()
{
    sendToServer(ui->lineEdit->text());
}

