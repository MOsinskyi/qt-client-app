![Static Badge](https://img.shields.io/badge/_-6.2-gray?logo=qt) 
# Qt TCP Client Application

This project is a Qt-based TCP client application that demonstrates how to create a GUI application using Qt and how to interact with a [TCP server](https://github.com/MOsinskyi/client-server-qt). The application includes features such as sending and receiving messages from the server.

## ⭐ Features

* Connect to a [TCP server](https://github.com/MOsinskyi/client-server-qt).

* Send messages to the server.

* Receive messages from the server.

* Simple and intuitive GUI.

## 🚧 Requirements

* Qt 6.x.

* C++17 compatible compiler.

## 📦 Installation

### GitHub Repository

1. Clone the repository:

   ```bash
   git clone https://github.com/MOsinskyi/qt-client-app.git
   cd qt-client-app
   ```

2. Open the project in Qt Creator:

   * Launch Qt Creator.

   * Open the project by selecting the `.pro` file.

3. Build the project:

   * Select the appropriate kit for your environment.

   * Click on the `Build` button or use the keyboard shortcut `Ctrl+B`.

   _Alternatively, you can build the project using the command line:_

   ```bash
   mkdir build
   cd build
   qmake ..
   make
   ```

4. Run the project:

   * Click on the `Run` button or use the keyboard shortcut `Ctrl+R`.

   *or*

   ```bash
   ./build/qt-client-app
   ```

## 🤗 Usage

1. Launch the application.
2. Enter the server address and port.
3. Click on the "Connect" button to establish a connection with the server.
4. Use the input field to type messages and send them to the server by pressing "Enter" or clicking the "Send" button.
5. Received messages from the server will be displayed in the application window.

## 🤝 Contributing

Contributions are welcome! Please open an issue or submit a pull request with your improvements.

## ©️ License

This project is licensed under the MIT License. See the [LICENSE](LICENSE.txt) file for details.
