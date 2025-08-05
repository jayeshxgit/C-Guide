#include<iostream>
using namespace std;
int main(){
    int x=3;
    cout<<&x<<endl; // prints address of variable.
// pointer stores the address of another variable.
// we can access, update and makes changes to the stored variable using pointer.
int x=3;
int* p=&x; // this stores address of x in another variable p.
cout<<p<<endl;
// we can access the value of the variable whose address is in the pointer using de-reference(operator).

cout<<*p<<endl; // fetches and prints the value of variable whose memory is stored in the pointer.
cout<<&p<<endl; // prints the address of the poiner variable.

// defrence operator.
*p = 5; // changed the value of the variable using x.
cout<<*p<<endl;
 
// swapping using pointers.

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int c = 12;
    int d = 45;
    swap(&c, &d);
    cout << c << " " << d << endl;
    return 0;
}
}