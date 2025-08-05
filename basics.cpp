#include<iostream>
using namespace std;
int main(){

    // cout<<"Hello world"<<"\n"<<"endl"<<"hello world";

    int x;
    x=5;
    int y;
    y=3;
    cout<<x+y;  
   //  int x,y; or int x=5, y=3; another useful ways

    int r;
    cin>>r; // input syntax
    cout<<3.14*r*r; // area of circle.
     
    // a%b = a if (a<b) important modulus property
    // typecasting

    int x;        // typecasting
    cin>>x;
    float y= (float)x;
    cout<<y/2;

    char ch; // this is to print askye values of characters, vice versa is also possible 
    cin>>ch;
    cout<<(int)ch;
    
    // float x= 5/2 when printed gives 2 coz operation between int is int
    // float x=5.0/2 when printed gives 2.5 coz operation between float and int is float
}
