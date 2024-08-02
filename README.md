![](/home/maksym/Pictures/Screenshots/Screenshot from 2024-08-02 19-32-10.png)

![Static Badge](https://img.shields.io/badge/_-6.2-gray?logo=qt) ![GitHub License](https://img.shields.io/github/license/MOsinskyi/qt-client-app?color=blue) ![GitHub repo size](https://img.shields.io/github/repo-size/MOsinskyi/qt-client-app) ![GitHub Release](https://img.shields.io/github/v/release/MOsinskyi/qt-client-app?color=purple) 

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

---

### Linux Ubuntu

1. Go to release page.

2. Download ubuntu package: `client-app-linux-ubuntu.deb`.

3. Install package, using command:

   ```bash
   sudo dpkg -i client-app-linux-ubuntu.deb
   ```

4. Done ✅.

---

### Other Linux distro

#### Installer

1. Download `client-server-linux-installer.run` from release page.

2. Run installer:

   ```bash
   chmod +x client-server-linux-installer.run
   ./client-server-linux-installer.run
   ```

3. Follow the installer steps.

4. Done ✅.

#### Portable

1. Download `client-app-linux-portable.zip` from release page.

2. Extract files from archive.

3. Run:

   ```bash
   cd ~/client-app-linux-portable/Client
   chmod +x client-app.sh bin/client-app
   ./client-app.sh
   ```

4. Done ✅.

---

### Windows

#### Installer

1. Download `client-server-linux-installer.exe` from release page.
2. Run installer **as Administrator**.
3. Follow installer steps.
4. Done ✅.

#### Portable

1. Download `client-app-windows-portable.zip` from release page.
2. Extract files from archive.
3. Run `client-app.bat`.
4. Done ✅.

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
