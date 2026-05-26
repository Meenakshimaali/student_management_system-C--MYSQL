# 🎓 Student Management System

A professional console-based **Student Management System** developed using **C++** and **MySQL Database Connectivity**. This project is designed to manage student records efficiently using a simple menu-driven interface. It demonstrates the implementation of CRUD operations (Create, Read, Delete) with real-time database interaction.

---

## 📌 Project Description

The Student Management System allows users to store and manage student information digitally. Users can add new student records, view all existing student details, and delete records from the database. The project uses MySQL for secure data storage and C++ for application development.

This project is helpful for understanding:
- Database Connectivity in C++
- MySQL Query Execution
- CRUD Operations
- Menu-Driven Programming
- Real-Time Data Handling

It is a beginner-friendly academic project suitable for mini projects, practical implementation, and GitHub portfolio building.

---

## ✨ Features

✅ Add Student Records  
✅ View Student Details  
✅ Delete Student Records  
✅ MySQL Database Integration  
✅ Console-Based User Interface  
✅ Fast and Efficient Data Management  
✅ Beginner-Friendly Project  

---

## 🛠️ Technologies Used

| Technology | Purpose |
|------------|---------|
| C++ | Programming Language |
| MySQL | Database Management |
| MySQL Connector/C | Database Connectivity |
| Code::Blocks | Development IDE |

---

## 📂 Project Structure

```text
Student-Management-System/
│
├── main.cpp
├── README.md
├── .gitignore
├── Student_Management_System.cbp
└── database.sql
```

---

## 🗄️ Database Setup

### Create Database

```sql
CREATE DATABASE jaishreee;
USE jaishreee;
```

### Create Students Table

```sql
CREATE TABLE students(
    id INT PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(100),
    age INT,
    course VARCHAR(100)
);
```

---

## ▶️ How to Run

1. Install MySQL Server and Code::Blocks  
2. Configure MySQL Connector/C  
3. Create the database and table  
4. Open the project in Code::Blocks  
5. Compile and Run the program  

---

## 💻 Sample Output

```text
Connected Successfully

----Student Management System -----
------------------------------------
1.Add Student
2.View Student
3.Delete Student
4.Exit
```

---

## 📚 Concepts Used

- Functions
- Loops
- Switch Case
- SQL Queries
- Database Connectivity
- CRUD Operations

---

## 🚀 Future Improvements

- Update Student Records
- Search Functionality
- Login Authentication
- GUI Interface
- Attendance Management

---

## 👩‍💻 Author

### Meenakshi Mali  
BCA Student

---


This project is developed for educational and learning purposes.
