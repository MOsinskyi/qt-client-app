#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QTime>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void slotReadyRead();
    void sendToServer(QString str);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_lineEdit_returnPressed();

private:
    const int version = QDataStream::Qt_6_2;

    Ui::MainWindow *ui;

    QTcpSocket* socket;
    QByteArray data;

    quint16 nextBlockSize;
};
#endif // MAINWINDOW_H
