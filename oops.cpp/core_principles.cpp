#include<iostream>
using namespace std;
int main(){
   
// Encapsulation.

 /* Encapsulation is a fundamental concept in object-oriented programming (OOP) 
 where the internal details (data and logic) of an object are hidden from the outside world */

// Access Modifiers.

/*Access modifiers in object-oriented programming are keywords that define the visibility and accessibility of classes, methods, variables, and other members of a program*/

// public Access Modifier.
#include <bits/stdc++.h>
using namespace std;

class Employee {
public:
    string name; // Public attribute

    void displayName() { // Public method
        cout << "Employee Name: " << name << endl;
    }
};

int main() {
    Employee emp;
    emp.name = "Alice"; // Accessible globally
    emp.displayName();  // Accessible globally
    return 0;
}

// Private Access Modifier.
#include <bits/stdc++.h>
using namespace std;

class BankAccount {
private:
    double balance; // Private attribute

public:
    // Getter to provide controlled access
    double getBalance() {
        return balance;
    }

    // Public method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }
};

int main() {
    // Creating an object
    BankAccount acnt;

    // cout << acnt.balance << endl; //  Error: 'balance' is private within this context
    cout << acnt.getBalance() << endl;

    return 0;
}

// Protected Access Modifier.
#include <bits/stdc++.h>
using namespace std;

class Vehicle {
protected:
    string type; // Protected attribute

    void displayType() { // Protected method
        cout << "Vehicle Type: " << type << endl;
    }
};

class Car : public Vehicle {
public:
    Car() {
        this->type = "Car"; // Accessible in the subclass
    }
};





// Inheritance

/*Inheritance is a fundamental concept in object-oriented programming (OOP) that allows a class (subclass) to inherit
 the attributes (fields) and behaviors (methods) of another class (superclass).*/

// SINGLE INHERITANCE.
#include <bits/stdc++.h>
using namespace std;

// Parent class or super class
class School {
private:
    string name; // Private attribute for school name

public:
    // Constructor initializes the school name
    School() {
        name = "DPS"; // Default school name
    }

    // Method to print the school name
    void printSchoolName() {
        cout << "School name: " << name << endl;
    }
};

// Subclass or child class
class Student : public School {
private:
    string name; // Private attribute for student name

public:
    // Constructor initializes the student name
    Student(string name) {
        this->name = name;
    }

    // Method to print the student name
    void printStudentName() {
        cout << "Student name: " << name << endl;
    }
};

// Main function to execute the program
int main() {
    // Create a new student object with the name "Raj"
    Student student("Raj");

    // Print the student's name
    student.printStudentName();

    // Print the school's name
    student.printSchoolName();

    return 0;
}

// Multilevel Inheritance.

#include <bits/stdc++.h>
using namespace std;

// Parent class representing general animals
class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

// Intermediate class representing mammals
class Mammal : public Animal {
public:
    void walk() {
        cout << "This mammal walks." << endl;
    }
};

// Subclass representing dogs
class Dog : public Mammal {
public:
    void bark() {
        cout << "This dog barks." << endl;
    }
};

// Main function to demonstrate multilevel inheritance
int main() {
    Dog dog;
    dog.eat();   // Output: This animal eats food.
    dog.walk();  // Output: This mammal walks.
    dog.bark();  // Output: This dog barks.
    return 0;
}

//  Hierarchical Inheritance

#include <bits/stdc++.h>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "This dog barks." << endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        cout << "This cat meows." << endl;
    }
};

int main() {
    Dog dog;
    Cat cat;

    dog.eat();   // Output: This animal eats food.
    dog.bark();  // Output: This dog barks.

    cat.eat();   // Output: This animal eats food.
    cat.meow();  // Output: This cat meows.

    return 0;
}

// Assignment question.

#include <iostream>
#include <string>
using namespace std;

class employee {
private:
    string name;
    int id;

public:
    // Default constructor // always create default constructors.
    employee() {
        name = "";
        id = 0;
    }

    // Parameterized constructor
    employee(string name, int id) {
        this->name = name;
        this->id = id;
    }

    void displaydetails() {
        cout << "Name of employee: " << name << endl;
        cout << "Their ID: " << id << endl;
    }
};

class manager : public employee {
private:
    int teamsize;

public:
    manager() : employee() {
        teamsize = 0;
    }

    manager(int teamsize, int id, string name) : employee(name, id) {
        this->teamsize = teamsize;
    }

    void disp() {
        employee::displaydetails();
        cout << "Team size: " << teamsize << endl;
    }
};

class engineer : public employee {
private:
    string specialization;

public:
    engineer() : employee(){
        specialization = "";
    }

    engineer(string specialization, int id, string name) : employee(name, id) {
        this->specialization = specialization;
    }

    void display() {
        employee::displaydetails();
        cout << "Specialization: " << specialization << endl;
    }
};

int main() { // understand this part very well.
    // Create a manager object
    manager mgr(5, 101, "Jax");
    mgr.disp();

    // Create an engineer object
    engineer eng("AI/ML", 102, "Arya");
    eng.display();

    return 0;
}







}
