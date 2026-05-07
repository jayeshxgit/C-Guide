#include <bits/stdc++.h>
using namespace std;
// How to define classes and objects. 
class Employee {
private:
    int salary; // to store the salary of employee

public:
    string employeeName; // to store the name of employee

    // Method to set the employee name
    void setName(string s) {
        employeeName = s;
    }

    // Method to set the salary
    void setSalary(int val) {
        salary = val; // this is an integer value so we created another function getsalary to return it.
    }

    // Method to get the salary
    int getSalary() {
        return salary;
    }
};

/*cout << obj1.setName("Raj");
❌ Will NOT work.  it does not return any value. cause void doesn't have return value*/

int main() {
    // Creating an object of Employee class
    Employee obj1;

    // Setting different attributes of object 1 using available methods
    obj1.setName("Raj"); // Set name to "Raj"
    obj1.setSalary(10000); // Set salary to 10,000

    // Creating another object of Employee class
    Employee obj2;

    // Setting different attributes of object 2 in a similar way
    obj2.setName("Rahul"); // Set name to "Rahul"
    obj2.setSalary(15000); // Set salary to 15,000

    // Accessing the attributes of different objects
    cout << "Salary of " << obj1.employeeName << " is " << obj1.getSalary() << endl;
    cout << "Salary of " << obj2.employeeName << " is " << obj2.getSalary() << endl;

    return 0;

// Attributes and Methods.
    // Creating a bank class.
    #include <iostream>
#include <string>
#include <iomanip>
using namespace std;

/*This is a constructor — a special method that has the same name as the class and no return type.

It’s automatically called when an object is created.

It initializes the object with the provided values (accNum and bal).

This makes object creation cleaner and reduces the need for multiple set methods*/

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    // Parameterized constructor (this has same name as the class )
    // constructors are invoked using new keyword and they don't have a return type.
    BankAccount(string accNum, double bal) {
        accountNumber = accNum;
        balance = bal;
    }
    
    // Method to deposit amount
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }
    
    // Method to withdraw amount
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds!" << endl;
        } else if (amount > 0) {
            balance -= amount;
        }
    }
    
    // Method to display account details
    void displayDetails() {
        cout << "Account Number : " << accountNumber << endl;
        cout << "Balance : " << fixed << setprecision(2) << balance << endl;
    }
};


    // Example usage based on the given input
    string accountNumber = "9662375274869";
    double initialBalance = 8655;
    double addBalance = 5854;
    double withdrawBalance = 9437;
    
    // Create BankAccount object using parameterized constructor
    BankAccount account(accountNumber, initialBalance);
    
    // Deposit money
    account.deposit(addBalance);
    
    // Withdraw money
    account.withdraw(withdrawBalance);
    
    // Display account details
    account.displayDetails();
    
    return 0;

    // NEW CLASS TO CALCULATE AREA OF RECTANGLE.
    #include <iostream>
using namespace std;

class Rectangle { // good way of writing code.
private:
    double length;
    double width;
    double area;

    // Private method to calculate area from member variables
    double calculateArea() {
        return length * width;
    }

public:
    // Default constructor
    Rectangle() {
        length = 1;
        width = 1;
        area = calculateArea();
    }

    // Parameterized constructor
    Rectangle(double length, double width) {
        this->length = length;
        this->width = width;
        area = calculateArea();
    }

    // Setter for length and width.
    void setLength(double l, double w) {
        length = l;
         width = w;
        area = calculateArea(); // update area automatically
    }

    // Getter for area
    double getArea() {
        return area;
    }

    // Display function
    void displayDetails() const {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << area << endl;
    }
};

    Rectangle r1(3.0, 4.0);
    r1.displayDetails();

    r1.setLength(5.0);  // automatically updates area
    r1.setWidth(6.0);   // automatically updates area
    cout << "\nAfter updating length and width:\n";
    r1.displayDetails();

    return 0;

// another example of class.

#include <bits/stdc++.h>
using namespace std;

class BankAccount {
private:
    string accountHolderName; // Private attributes
    double balance;

public:
    // Constructor
    BankAccount(string accountHolderName, double balance) {
        this->accountHolderName = accountHolderName;
        this->balance = balance;
    }

    // Public getter for accountHolderName
    string getAccountHolderName() {
        return accountHolderName;
    }

    // Public setter for accountHolderName
    void setAccountHolderName(string name) {
    accountHolderName = name;
}


    // Public getter for balance
    double getBalance() {
        return balance;
    }

    // Public setter for balance (only allows positive deposits)
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }

    // Public method to withdraw money
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds." << endl;
        } else {
            balance -= amount;
        }
    }
};

class Main {
public:
    static void main() {
        // Creating an object of BankAccount
        BankAccount account("John Doe", 5000);

        // Using getter to access private data
        cout << "Account Holder: " << account.getAccountHolderName() << endl;
        cout << "Balance: " << account.getBalance() << endl;

        // Modifying balance using setter method
        account.deposit(1500);
        cout << "Updated Balance: " << account.getBalance() << endl;

        // Trying to withdraw an amount
        account.withdraw(2000);
        cout << "Balance after Withdrawal: " << account.getBalance() << endl;
    }
};


    Main::main();
    return 0;




}


