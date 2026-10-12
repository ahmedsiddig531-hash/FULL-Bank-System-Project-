# 🏦 Bank System Management

A console-based **Bank Management System** developed in C++ using Object-Oriented Programming (OOP). The project simulates essential banking operations, including client management, deposits, withdrawals, money transfers, user authentication, and permission-based access control.

## 📌 About the Project

The Bank System is designed to demonstrate how C++ concepts can be applied to a practical application. It uses classes, file handling, inheritance, encapsulation, and reusable utility functions to organize banking operations.

The application stores client and user information in text files, allowing data to be saved and loaded between program sessions.

## ✨ Features

### 👥 Client Management
- Add new bank clients.
- Find clients by account number.
- Update client information.
- Delete client records.
- Display the list of clients.
- View total balances.

### 💰 Banking Transactions
- Deposit money into an account.
- Withdraw money from an account.
- Transfer money between accounts.
- View transaction-related information.
- Record transfer details in a log file.

### 🔐 User Management and Security
- User login and authentication.
- Add, update, find, and delete users.
- Manage user permissions.
- Restrict access to selected operations based on permissions.
- Encrypt and decrypt selected data using utility functions.

### 📝 Logging and File Handling
- Store client information in `Clients.txt`.
- Store user information in `Users.txt`.
- Record login activity in `RegisterLogin.txt`.
- Record money transfers in `TransferLog.txt`.
- Use text files for persistent storage.

## 🛠️ Technologies Used

- **Programming Language:** C++
- **IDE:** Microsoft Visual Studio
- **Concepts:** Object-Oriented Programming, inheritance, encapsulation, file handling, vectors, and functions
- **Data Storage:** Text files
- **Build Configuration:** Visual Studio C++ project

## 📂 Project Structure

```text
FULL-Bank-System-Project/
│
├── BankSystem.cpp
├── BankSystem.vcxproj
├── BankSystem.vcxproj.filters
├── BankSystem.slnx
│
├── Global.h
│
├── clsPerson.h
├── clsBankClient.h
├── clsUser.h
├── clsDate.h
├── clsString.h
├── clsUtil.h
├── clsInputValidate.h
├── clsScreen.h
│
├── clsMainMenuScreen.h
├── clsLoginScreen.h
├── clsClientListScreen.h
├── clsAddNewClientScreen.h
├── clsFindClientScreen.h
├── clsUpdateClientScreen.h
├── clsDeleteClientScreen.h
├── clsDepositScreen.h
├── clsWithdrawScreen.h
├── clsTransferScreen.h
├── clsTransferLog.h
├── clsTransactionsScreen.h
├── clsTotalBalanceScreen.h
│
├── clsUserListScreen.h
├── clsAddNewUserScreen.h
├── clsFindUserScreen.h
├── clsUpdateUserScreen.h
├── clsDeleteUserScreen.h
├── clsManageUsersScreen.h
├── clsLoginRegisterScreen.h
│
├── Clients.txt
├── Users.txt
├── RegisterLogin.txt
└── TransferLog.txt
```

*Note: This structure summarizes the files visible in the repository screenshots. Your actual repository may contain additional files.*

## 🚀 Getting Started

### Prerequisites

- Windows operating system
- Microsoft Visual Studio with the C++ development workload
- A C++ compiler compatible with the project configuration

### Installation and Setup

1. Clone the repository:

   ```bash
   git clone https://github.com/ahmedsiddig531-hash/FULL-Bank-System-Project-.git
   ```

2. Open the downloaded project folder.

3. Open `BankSystem.slnx` in a compatible version of Visual Studio, or open the project file if necessary.

4. Select the appropriate configuration, such as **Debug** and **x64**.

5. Build the solution using **Build → Build Solution**.

6. Run the application using **Debug → Start Without Debugging** or `Ctrl + F5`.

## 🧠 Concepts Demonstrated

This project provides practical experience with:

- **OOP:** Organizing banking functionality into classes.
- **Encapsulation:** Managing data and operations through class interfaces.
- **Inheritance:** Reusing common functionality across related classes.
- **File Handling:** Reading and writing persistent records.
- **Input Validation:** Checking user input before performing operations.
- **Vectors and Data Processing:** Working with collections of records.
- **Access Control:** Managing permissions for different application features.
- **Modular Design:** Separating screens, business logic, and utility functions.

## 🔮 Future Improvements

- Replace plain-text storage with a relational database such as MySQL or SQLite.
- Improve password storage using a modern password-hashing algorithm.
- Strengthen validation for all financial transactions.
- Add automated unit tests and integration tests.
- Improve error handling and transaction consistency.
- Add a graphical user interface.
- Introduce reports and account statements.

## ⚠️ Security Disclaimer

This project is intended for educational purposes. It is not production-ready banking software. Text-file storage and simple reversible encryption are not sufficient for protecting real financial or authentication data. A production system would require secure authentication, appropriate cryptography, database transactions, audit controls, and additional security measures.

## 👨‍💻 Author

**Ahmed Siddig**

GitHub: [@ahmedsiddig531-hash](https://github.com/ahmedsiddig531-hash)

## 📄 License

No license has been specified yet. Add a `LICENSE` file if you intend to publish the project for reuse by others.
