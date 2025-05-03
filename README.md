# 🏦 Bank Management System – C++

This is a console-based Bank Management System built using **Object-Oriented Programming (OOP)** in C++.
It simulates basic banking operations and user management through a set of modular header files and a structured design.

---

## 🚀 Features

### 👤 Clients
- Add New Client  
- Delete Client  
- Update Client Info  
- Deposit / Withdraw  
- Transfer Between Accounts  
- View Client List & Balances  
- Search & Filter Clients  
- View Transfer Log  
- View Transactions  

### 💱 Currencies
- List of Currencies  
- Currency Calculator  
- Currency Exchange  
- Update Currency Rate  
- Search for a Currency  

### 🔐 Users
- Add / Update / Delete System Users  
- Login / Register  
- Manage User Permissions  
- User List & Search  

---

## 🧱 Project Structure

This project is built with reusable header files, each with a clear purpose:

- `DateLibrary.h` – Custom date handling (no built-in functions used)  
- `StringLibrary.h` – String utilities and helpers  
- `InputValidate.h` – Input validation functions  
- `Utility.h` – General-purpose functions  
  - Includes: `GetRandomCharacter`, `GenerateKeys`, `EncryptText`, etc.  

---


## 🛠 Technologies Used
- Language: **C++**  
- Paradigm: **OOP**  
- Tool: **Visual Studio**  
- File Handling: `.txt` files for storage

---

## 📌 How to Run
1. Clone this repository
2. Open with Visual Studio
3. Build the solution
4. Run the executable from the terminal

Make sure the `Clients.txt` and `Users.txt` files are in the working directory.

---

## 📦 Future Plans
- Add support for SQLite or SQL Server Database  
- Migrate to GUI (possibly with C#)  
- Add login roles and session management  
- Export reports and logs

---
