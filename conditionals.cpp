#include<iostream>
using namespace std;
int main(){

// syntax is different but concept is same. 
int n;
cin>>n;
 if (n%2==0) {
    cout<<"n is even";
 }
 else{

    cout<<"n is odd";
 }

 int x;
 cout<< "enter the: ";
 cin>>x;

 // && or || for and operator and or operator
 if (x>99 and x<1000) {
    cout<<"three digit number";

 }
 else{
    cout<<"not a three digit number";
 }
 
 // if ((n%5==0 or n%3==0) and n% 15!=0) efficient way to write code.

 // Nested Loops

int a,b,c;
cin>>a,b,c;

if (a>b){
    if (a>c)
    cout<<"a is greatest";
    else
    cout<<"c is greatest";
}

else  {
    if (b>c)
    cout<<"b is greatest";
    else
    cout<<"c is greatest";
}
// int x=10, y=20;
// if (x==y);
// cout<<x<<y;

int x=3,y,z;
y=x=10; // precedence in assignment operator is from right to left
z=x<10; // here 10 !< 10 so 0 value gets stored in z/
cout<<x<<""<<y<<""<<z;

int n;
    cin >> n;

    if (n >= 1 && n <= 9) {
        switch (n) {
            case 1: cout << "one"; break;
            case 2: cout << "two"; break;
            case 3: cout << "three"; break;
            case 4: cout << "four"; break;
            case 5: cout << "five"; break;
            case 6: cout << "six"; break;
            case 7: cout << "seven"; break;
            case 8: cout << "eight"; break;
            case 9: cout << "nine"; break;
        }
    } else {
        cout << "Greater than 9";
}
}