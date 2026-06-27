# C++ Mini Projects

Welcome to the **C++ Mini Projects** repository! This is a collection of beginner-to-intermediate console-based applications built using modern C++. These projects are designed to demonstrate core object-oriented programming (OOP) concepts, data handling, and clean control flow structures.

## Featured Projects

This repository contains three distinct mini-applications:

### 1. Banking System
A simulated console banking application that mimics real-world banking operations.
* **Key Features:** 
  * Account creation with unique account numbers.
  * Secure deposit and withdrawal functionalities (with balance checks).
  * Balance inquiry and account detail display.
* **Concepts Used:** Classes and Objects
### 2. Calculator

A robust command-line calculator capable of handling basic arithmetic and standard algebraic operations.
* **Key Features:**
  * Basic operations: Addition, Subtraction, Multiplication, Division.
  * Continuous execution loop until the user decides to exit.
  * Division-by-zero error handling.
* **Concepts Used:** Functions, `switch-case` control blocks, Input validation.

### 3. Digital Clock

A console-based, **24-hour format digital clock** written in C++ that allows users to set a custom starting time. The application continuously updates and displays the time in real-time (`HH:MM:SS`) using an infinite loop, built-in time delays, and automated screen clearing for a realistic ticking effect. 

* **Key Features**
* Custom Start Time: Prompts the user to input the initial hours, minutes, and seconds.
* Input Validation: Ensures the entered time conforms to realistic 24-hour constraints.
* Dynamic UI:* Implements custom console coloring and clear-screen commands to simulate a live digital display.
* **Concepts Used:** Functions, control blocks, Input validation, I/O Manipulation, System and Time Management(Sleep(); system(cls); system("color");)
    
### 3. Restaurant Menu
An interactive digital menu calculator system.
* **Key Features:**
   * Basic operations: Addition, Subtraction, Multiplication, Division.
 
### 4. Registration Login Form
It provides a secure and user-friendly interface for managing user accounts, handling authentication, and recovering lost credentials seamlessly.

* **Key Features:**
* User Registration: Allows new users to create an account by securely storing their credentials.
* User Login: Authenticates existing users by verifying their username and password against stored records.
* Password Recovery (Forgot Password): Enables users to recover or reset their password using a search mechanism.
* Graceful Exit: Provides a clean termination option from the main menu.
* **Concepts Used:**
File Handling (fstream, ifstream), function, Control Flow & Structures

## Getting Started

### Prerequisites
To compile and run these projects, you need a C++ compiler installed on your system:
* **Windows:** MinGW, MSVC, or CLion
* **macOS:** Xcode Command Line Tools (`g++` / `clang`)
* **Linux:** `GCC` (GNU Compiler Collection)

### Installation & Setup

1. **Clone the repository:**
```bash
   git clone https://github.com/dk132006/cpp-mini-projects.git
   cd cpp-mini-projects
```

2. **Navigate to a specific project folder:**

```bash
   cd "Banking System"

```

3. **Compile the project:**
Using `g++`, run:

```bash
   g++ main.cpp -o main

```

4. **Run the executable:**

* On Windows: `main.exe`
* On Linux/macOS: `./main`

---

## 💻 Technical Concepts Demonstrated

* **Object-Oriented Programming (OOP):** Encapsulation, inheritance, and abstraction.
* **Data Persistence:** Using file streams to save application states.
* **Robust Input Validation:** Preventing infinite loops or crashes from invalid user inputs (e.g., entering text into a numerical menu field).


## 📄 License

This project is licensed under the MIT License 

