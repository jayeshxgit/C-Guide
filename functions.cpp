#include<iostream>
using namespace std;
// void function does not require a return type but other functions do need it.
void usa(){
    cout << "you are in usa\n";
    cout << "you speak american english\n";
}

void india(){ 
    cout << "you are in india\n";
    usa(); // calling function inside another function
}

void sum(int a, int b){
    cout << a + b << "\n"; 
}

int sums(int c, int d){
    return c + d;
}

int fact(int x){
    int f=1;
    for (int i=1; i<=x; i++){
        f*= i;
    }
    return f;
}


int ncr(int i,int j){ // pascal triangle part .
cout<<fact(i)/(fact(j)*fact(i-j));

}

int main(){
    india(); 
    sum(2, 5);  

int n;
cin>>n;
int r;
cin>>r;

int a= fact(n);
int b= fact(r);
int c= fact(n-r);

cout<<a/(b*c);

// pascal triangle.
  int m;
  cin>>m;
  for (int i=0; i<=n; i++){
    for (int j=0; j<=n; j++){
        cout<<ncr(i,j)<<" ";
    }
    cout<<endl;
  }
// scope of variable.
// i can only be print in this function but cannot be  
int i;
for(i=1; i<=5; i++){
    cout<<i<<endl;
}
// 6 will print outside the loop because 
cout<<i<<endl;
// here the the output will be 123456 (don't mind the endl here)

// SWAPPING THE NUMBERS.

int x=10;
int y=12;
x =x+y;
y=x-y;
x=x-y;
cout<<x<<" "<<y<<endl; 
// method 2 this swaps the number by taking an extra variable.
// int t=x;
// x=y;
// y=t;

// pass by value and pass by reference.
// this will not swap it because int x,y in void are different from main function. so swapping does happen in void function but when you cout it, the x and y are of main function are not void function.

// pass by reference- to eliminate this put int &x, int &y(now this int x and y are same of main function and when you print it swapping takes place.)
void swap(int x,int y ){
    int temps=x;
    x=y;
    y=temp;
}
int main(){
    int x=12;
    int y=45;
    cout<<x<<" "<<y; 
}
}


// library funcition.
//cbrt()- cube root.
// sqrt()- square root.
// min()- minimum of two numbers.
// max()- maximum of two numbers.
// pow(a,b)- a^b power. 




