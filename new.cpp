#include <iostream>
using namespace std;

int main(){
// question 1

    float radius, area;
    cout << "Enter radius: ";
    cin >> radius;
    area = 3.14159 * radius * radius;
    cout << "Area of circle = " << area << endl;
    return 0;

// question 2

    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Sum = " << a + b << endl;
    cout << "Difference = " << a - b << endl;
    cout << "Product = " << a * b << endl;
    cout << "Quotient = " << a / b << endl;
    cout << "Remainder = " << a % b << endl;
    return 0;

// question 3

 char ch;
    cout << "Enter an uppercase letter: ";
    cin >> ch;
    cout << "Lowercase: " << (char)tolower(ch) << endl;
    return 0;

// question 4

int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Decimal: " << dec << num << endl;
    cout << "Hexadecimal: " << hex << num << endl;
    cout << "Octal: " << oct << num << endl;
    return 0;

// question 5

 char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (isupper(ch)) cout << "Uppercase Letter";
    else if (islower(ch)) cout << "Lowercase Letter";
    else if (isdigit(ch)) cout << "Number";
    else cout << "Other Character";
    return 0;

// question 6

 int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    int biggest = a;
    if (b > biggest) biggest = b;
    if (c > biggest) biggest = c;
    cout << "Biggest number is: " << biggest << endl;
    return 0;

// question 7

 int day;
    cout << "Enter day number (1-7): ";
    cin >> day;
    switch(day) {
        case 1: cout << "Sunday"; break;
        case 2: cout << "Monday"; break;
        case 3: cout << "Tuesday"; break;
        case 4: cout << "Wednesday"; break;
        case 5: cout << "Thursday"; break;
        case 6: cout << "Friday"; break;
        case 7: cout << "Saturday"; break;
        default: cout << "Invalid day";
    }
    return 0;

// question 8

int i = 1;
    cout << "Even numbers: ";
    while (i <= 100) {
        if (i % 2 == 0) cout << i << " ";
        i++;
    }
    cout << "\nOdd numbers: ";
    i = 1;
    while (i <= 100) {
        if (i % 2 != 0) cout << i << " ";
        i++;
    }
    return 0;

// question 9

int num;
    cout << "Enter a number (0-9): ";
    cin >> num;
    switch(num) {
        case 0: cout << "Zero"; break;
        case 1: cout << "One"; break;
        case 2: cout << "Two"; break;
        case 3: cout << "Three"; break;
        case 4: cout << "Four"; break;
        case 5: cout << "Five"; break;
        case 6: cout << "Six"; break;
        case 7: cout << "Seven"; break;
        case 8: cout << "Eight"; break;
        case 9: cout << "Nine"; break;
        default: cout << "Invalid number";
    }
    return 0;

// question 10

 int n, smallest;
    cout << "Enter number 1: ";
    cin >> smallest; // First number as smallest
    for (int i = 2; i <= 10; i++) {
        cout << "Enter number " << i << ": ";
        cin >> n;
        if (n < smallest) smallest = n;
    }
    cout << "Smallest number is: " << smallest << endl;
    return 0;
    
}

  


