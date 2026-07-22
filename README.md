# Constructor Chaining in C++ Inheritance

A simple and clear C++ example that demonstrates the concept of **Inheritance** and **Constructor Execution Order** in Object-Oriented Programming (OOP).

### 📌 Concept

In C++ inheritance, when an object of a derived class is created, constructors are called in a specific order:
1.  The **Base Class** constructor is executed first.
2.  The **Derived Class** constructor is executed second.

This project demonstrates exactly that.

### 💻 Code Structure

*   `first`: Base class with `age`, `name` and its own constructor.
*   `secound`: Derived class that inherits publicly from `first` with its own `id` and constructor.
*   `main()`: Creates an object `ob1` of the derived class to trigger the constructor chain.

### ▶️ Expected Output

When you run the program, the output will be:
