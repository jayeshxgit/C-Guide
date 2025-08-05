#include<iostream>
using namespace std;
int main(){

    // loops

// for loop
// You know in advance how many times you need to repeat something.
int n;
cin>>n;
 for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    return 0;

// while loop
 int i = 1;
  
    while (i <= 5) {
        cout << i << " ";
      
      	i++;
    }
    return 0;
// print all even numbers
for(int i=1; i<=10; i++){
    if (i%2==0) cout<<i<<" ";  
}
// altrenate method
for (int i=1; i<=10; i=i+2){
    cout<<i<<" ";
}
int n;
cin>>n;
 for (int i=0; i<=n; i+=1) {
    cout<<i<<" ";
 }
    // another method to do it.

int n;
cin>>n;

// Loop runs 6 times (i = 0 to i = n)
// "a" is a variable which is inside the loop and prints it. 

int a=0;
    for (int i=0; i<=n; i++) { 
        cout<<a<<" ";
        a+=2;
    }
// program to find the highest factor of a number 'n'.
int n;
cin>>n;
int fon;

for (int i=1; i<=n; i++){
    if (n%i==0) {
        fon= i;
        cout<<fon;
    }
      }
// efficient method than previous one.
int n;
cin>>n;

for (int i=n/2; i>=1; i--){
    if (n%i==0) {
        cout<<i<<" ";
        break;
         
    }
}
// program to check if a number is prime or composite.
int n;
cin>>n;
bool flag= true;
for (i=2;i<=n;i++){
    if (n%i==0){
        flag=false;
        break;
    }
    // continue statement skips that value and then continue with loop.
}
if(flag==true) cout<<"prime";
else cout<<"composite";

// while loop
// You don’t know beforehand how many times you'll need to loop — you loop until a condition becomes false.

 int i=1;
 while(i<=10){
    cout<<i<<endl;
    i++;
 }
 
 // infinite loop
 int i;
 while(i=10){
    cout<<i<<endl;
    i=i+1;
 }
 // WAP to count digits of a given number.
 int x;
 cin>>x;

 int i=0;
 while(x>0){
    x=x/10; // reduces the digit of the number by one integer place.
    i++;
 }

   cout<<i;
 // written outside so that it will print the final value of the loop.

// WAP to count the sum of the digits of a given number.
int n;
cin>>n;
int i=0;
int sum=0;
while(n>0){
    int ld=n%10; // gives the last digit of a given number.
     n/=10;
     sum = sum+ ld;
}
cout<<sum;
//WAP to reverse a given number
int n;
cin>>n;
int i=0;
int sum=0;
int r=0;
while(n>0){
    int ld=n%10; // gives the last digit of a given number.
    int r=r*10;
    r+=ld;
    n/=10; // new value of n comes once the loop starts again.
     
}
}