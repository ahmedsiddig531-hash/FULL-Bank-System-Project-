 # 🏦 Bank System Management

A console-based **Bank Management System** developed in C++ using Object-Oriented Programming (OOP). The project simulates essential banking operations, including client management, deposits, withdrawals, money transfers, user authentication, permission-based access control, and currency exchange management.

## 📌 About the Project

The Bank System demonstrates how C++ concepts can be applied to a practical application. It uses classes, file handling, inheritance, encapsulation, and reusable utility functions to organize banking operations.

The application stores client, user, and currency information in text files, allowing data to persist between program sessions.

## ✨ Features

### 👥 Client Management
- Add new bank clients.
- Find clients by account number.
- Update client information.
- Delete client records.
- Display the list of clients.
- View total account balances.

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
- Record login activity for auditing purposes.

### 💱 Currency Exchange Management
- **List Currencies:** Display the available currencies and their details.
- **Find Currency:** Search for a currency by its currency code or country name.
- **Update Exchange Rates:** Find a currency, display its current details, confirm the update, validate the new rate, and save the updated rate.
- **Currency Calculator:** Convert amounts between currencies, including USD-to-foreign-currency, foreign-currency-to-USD, and foreign-currency-to-foreign-currency conversions.
- **Persistent Storage:** Store currency information and exchange rates in `Currencies.txt`.

The currency calculator uses the exchange rates stored in the application. Conversion accuracy depends on the correctness of those rates.

### 📝 Logging and File Handling
- Store client information in `Clients.txt`.
- Store user information in `Users.txt`.
- Store currency information and exchange rates in `Currencies.txt`.
- Record login activity in `RegisterLogin.txt`.
- Record money transfers in `TransferLog.txt`.
- Use text files for persistent storage between program sessions.

## 🛠️ Technologies Used

- **Programming Language:** C++
- **IDE:** Microsoft Visual Studio
- **Platform:** Windows
- **Concepts:** Object-Oriented Programming, inheritance, encapsulation, file handling, vectors, functions, and input validation
- **Data Storage:** Text files
- **Build System:** Visual Studio C++ project

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
├── clsCurrency.h
├── clsCurrencyList.h
├── clsFindCurrencyScreen.h
├── clsUpdateRate.h
├── clsCurrencyCalculator.h
├── clsCurrencyExchangeScreen.h
│
├── Clients.txt
├── Users.txt
├── Currencies.txt
├── RegisterLogin.txt
└── TransferLog.txt
```

*Note: This structure includes the currency exchange files discussed during development. Verify the filenames against your actual repository, as your project may contain additional files.*

## 🚀 Getting Started

### Prerequisites

- Windows operating system
- Microsoft Visual Studio with the C++ development workload
- A compatible C++ compiler

### Installation and Setup

1. Clone the repository:

   ```bash
   git clone https://github.com/ahmedsiddig531-hash/FULL-Bank-System-Project-.git
   ```

2. Open the downloaded project folder.

3. Open `BankSystem.slnx` in a compatible version of Visual Studio, or open the project file if necessary.

4. Select the appropriate configuration, such as **Debug** and **x64**.

5. Build the solution using **Build → Build Solution**.

6. Run the application using **Debug → Start Without Debugging** or press `Ctrl + F5`.

7. Navigate through the main menu to access client management, banking transactions, user management, and currency exchange operations.

**Important:** Ensure that the required text files are available in the application's working directory and contain valid data in the expected format.

## 🧠 Concepts Demonstrated

This project provides practical experience with:

- **Object-Oriented Programming:** Organizing banking functionality into classes.
- **Encapsulation:** Managing data and operations through class interfaces.
- **Inheritance:** Reusing common functionality across related classes.
- **File Handling:** Reading and writing persistent records.
- **Input Validation:** Checking user input before performing operations.
- **Vectors and Data Processing:** Working with collections of records.
- **Access Control:** Managing permissions for different application features.
- **Modular Design:** Separating screens, business logic, and utility functions.
- **Currency Conversion:** Applying exchange-rate formulas to convert between currencies.
- **Data Persistence:** Saving changes to currency rates and other records in text files.

## 🔮 Future Improvements

- Replace plain-text storage with a relational database such as MySQL or SQLite.
- Improve password storage using a modern password-hashing algorithm.
- Strengthen validation for all financial transactions.
- Add automated unit tests and integration tests.
- Improve error handling and transaction consistency.
- Integrate a reliable exchange-rate API for updated market rates.
- Support separate buy and sell rates and transaction fees.
- Add currency conversion history and reports.
- Improve the interface with a graphical user interface.

## ⚠️ Security Disclaimer

This project is intended for educational purposes and is not production-ready banking software.

Text-file storage and simple reversible encryption are not sufficient to protect real financial or authentication data. A production system would require secure authentication, appropriate cryptography, database transactions, audit controls, and additional security measures.

The currency exchange feature uses stored rates unless an external rate provider is explicitly integrated. These rates should not be assumed to represent current market prices.

## 👨‍💻 Author

**Ahmed Siddig**

GitHub: [@ahmedsiddig531-hash](https://github.com/ahmedsiddig531-hash)

## 📄 License

No license has been specified yet. Add a `LICENSE` file if you intend to publish the project for reuse by others.
