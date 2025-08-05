#include<iostream>
using namespace std;
int main(){
    // datatype like character array.
      string x="hello world";
      cout<<x;
      // input for a string.
      string s;
      cin>>s;
      cout<<s;

    // cin only takes starting word as an input and when space comes it breaks there.
    // to resolve this problem we use another funciton getline.

    string s;
    getline(cin,s); // prints the whole sentence as string.
    cout<<s;

    // indexing of characters in strings.
    string ss= "hello";
    cout<<ss[0]; // prints h (just like arrays)
    ss[0]='m'; // updating a string.
    
    // built in functions.
    // s.length() or s.size gives the length of a string.
    // every string has an extra charater called null character "\0"/ its ASCII value is 0. it tells us where our string is ended. 
     
    string son="hello";
    son = son + "world";
    son = "world" + son; // appends in front
    cout<<son;
}