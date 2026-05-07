  #include<iostream>
using namespace std;
int main(){

// bring out what is happening at every line and try to connect with outer loop.


    int m,n;
    cin>>m,n;
// outside loop is running the inside loop m times.
    for (int i=0; i<=m;i++){ // rows=m
        for (int j=0; j<=n; j++){ // cols=n
            cout<<"*";
        }
        cout<<endl; // it will print 5 stars and will take input rows from user.
 
    }
    // little more depth to the previous question.
    for (int i=0;i<=3;i++){
        for(int j=0;j<=3; j++ ){ // first inside loop runs completely then the outside loop runs.
         cout<<i;    
    }
        cout<<endl;
}
// triangles
int n;
cin>>n;
 for (int i=1;i<=n;i++){
        for(int j=1;j<=i; j++ ){
         cout<<i;   
    }
        cout<<endl;
}
// reverse traingle
int n;
cin>>n;
 for (int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i; j++ ){ // j+i=n+1 so j=n+1-i (logic)
         cout<<j;   
    }
        cout<<endl;
}
// odd triangle.

int n;
cin>>n;
 for (int i=1;i<=n;i++){ // i is telling the number of rows
    int a=1;
        for(int j=1;j<=n+1-i; j++ ){ // j is telling how many values to be printed in a row.
         cout<<a<<" "; // this is printing what values are to be printed.
         a+=2; 
    }
        cout<<endl;
}
// method 2(best method)

int n;
cin>>n;
 for (int i=1;i<=n;i++){ 
        for(int j=1;j<=n+1-i; j++){ 
         cout<<2*j-1<<" "; 
         
    }
        cout<<endl;
}
// Floyd's triangle
int n;
cin>>n;
int a=1; // this sets the value a, then it compounds inside the loop
 for (int i=1;i<=n;i++){ 
                            // if int a=1; here then after j loop finishes it starts with same value 1 again.
        for(int j=1;j<=i; j++){ 
         cout<<a<<" "; 
         a+=1;
         
    }
        cout<<endl;
}
// 1,0 alternate pyramid.
int n;
cin>>n;
 for (int i=1;i<=n;i++){ 
    if (i%2!=0){
        for (int j=1;j<=i;j++){
            if (j%2!=0){
                cout<<1;
            }
            else{
                cout<<0;
            }
            }
        }
    else{
        for (int k=1;k<=i;k++){
            if (k%2!=0){
                cout<<0;
            }
            else{
                cout<<1;
            }
        }
    }
    cout<<endl;
}
// method 2 is much better.

// assume the grid as x,y coordinate with i =x-axis and j= y-axis.
int n;
cin>>n;
 for (int i=1;i<=n;i++){
        for(int j=1;j<=i; j++ ){ 
         if ((i+j)%2==0) {
            cout<<1;
         }
         else {
            cout<<0;
         }
    }
        cout<<endl;
}
// advance patterns. 
// always assume empty spaces to be # and now write the code for better clarity.
// plus sign. 
int n;
cin>>n;
int mid =n/2+1;
 for (int i=1;i<=n;i++){
        for(int j=1;j<=n; j++ ){ 
            if (i==mid or j==mid){
                cout<<"*";
            }
        else{
            cout<<" ";
        }
    }
        cout<<endl;
}
// mirror image of normal triangle pattern.
// we joined the triangle and reverse triangle loops inside rows loop.
int n;
cin>>n;
 for (int i=1;i<=n;i++){
        for(int j=1;j<=n-i; j++ ){  // these both loops add up to create this pattern.
         cout<<" ";   
    }
        for(int j=1;j<=i; j++ ){ 
         cout<<"*";   
    }
        cout<<endl;
}
// parallelogram print
int n;
cin>>n;
 for (int i=1;i<=n;i++){
        for(int j=1;j<=n-i; j++ ){ 
         cout<<" ";   
    }
        for(int j=1;j<=n; j++ ){ 
         cout<<"*";   
    }
        cout<<endl;
}
// hollow rectangle.
#include <iostream>
using namespace std;


    int rows, cols;
    cin >> rows >> cols; // Input number of rows and columns
 for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            // Print star at borders (first row, last row, first col, last col)
            if (i == 1 || i == rows || j == 1 || j == cols) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;

     int n;
    cout << "Enter number of rows for half of Diamond: ";
    cin >> n;

    // Upper pyramid
    for (int i = 1; i <= n; i++) {
        for (int space = 1; space <= n - i; space++) {
            cout << " ";
        }
        for (int star = 1; star <= 2 * i - 1; star++) { // manipulate the iteration coz you are printing the character so no manipulation with that like (2*i-1)*"*" this.
            cout << "*";
        }
    }
    cout<< endl; // this endl will take the cursor to next line and thus other triangle starts
    // Lower inverted pyramid
    for (int i = n - 1; i >= 1; i--) {
        for (int space = 1; space <= n - i; space++) {
            cout << " ";
        }
        for (int star = 1; star <= 2 * i - 1; star++) {
            cout << "*";
        }
        cout << endl;
    }

    class Solution {
public:
    void pattern12(int n) {
        // here we are adding three shapes like this.
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                cout<<j;
            }
            for(int k=1; k<2*(n-i)+1; k++){
                cout<<" ";
            }
            for(int m=i; m>=1; m--){ // this basically converts the loop backwards so a reverse backward digit traingle is formed.
                                     // pay attention to this closely.
                cout<<m;
            }
            cout<<endl;
        }
    }
};

// toughest question so far and built a strong intusion for grids.
// understand the code base carefully and do the dry run for it also try to visualize it.
// good visualization required for this.

#include <iostream>
using namespace std;


    int n = 5;
    int size = 2 * n - 1;

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            int min_dist = min(min(i - 1, j - 1), min(size - i, size - j));
            cout << n - min_dist << " ";
        }
        cout << endl;
    }

    return 0;
}

  
