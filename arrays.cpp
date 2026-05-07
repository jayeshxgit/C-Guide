#include<iostream>
using namespace std;
int main(){
    // how to define an array.
    int arr[5];
    for (int i=0; i<=4; i++){
        cin>>arr[i]; // this takes the input of array using loops.
    }
    // update the aray.
    arr[0]= 12; // it means value at 0 index changes to 12.
    for (int i=0; i<=4; i++){
        cout<<arr[i]; // this prints the array using loops.
    }
    // declaration and initialization simultaneously.
    int arra[5] = {1,2,3,4,5}; // array created.
    int arra[] = {1,3,4,5,5}; // same thing but do only when declaration and initialization simultaneously.

    // int size = 10, b[size]; declared before so it is correct.(an array and size variable is created.)
    // int b[size], size=10; wrong coz not declared before and will throw an error.

    // passing array to funcitons. 
    void change(int arr[]){
        arr[0]=9;
    }
    int main(){
        int arr[] ={1,2,3};
       for(int i=0; i<=2; i++){
        cout<<arr[i]<<" ";
       }
       //(important ) here if we change the value of arr using function it will change coz here it happens due to pass by reference unlike pass by value.
       change(arr);
       for(int i=0; i<=2; i++){
        cout<<arr[i]<<" "; 
       }
    }
     // sizeof() operator tells us how many space a value hold. eg int, float=4 and char,bool=1;
       int arr[]={1,2,3,4,5};
       int n=sizeof(arr)/4; // because it will multiply all values by 4 coz each value store 4 bytes.

       // find max value in the array.
       int arr[]={1,2,3,4,5};
       int mx=arr[0];
       for (int i=0; i<=n; i++){
        if (arr[i]>mx) mx = arr[i]; // updates and compares the value of the mx as the loop runs.
        // mx = max(arr[i],mx) method 2 using inbuilt function.

        // INT_MIN is the smallest value in coding so we can initialize mx with it and then compare the values.
       }
       cout<<mx;
       // count the number of elements in array greater than given number x.
       int arr[] = {1,2,3,4,5,6};
       int x=3;
       // logic
       // int count = 0;
       // if (arr[i]>x) count++; 

       // find the second largest element in the given array.
        int arr[] = {10,3,4,5,6,13};
        // run the loop first to find max element mx then.
        int smx= INT16_MIN;
        for (int i=0; i<=n; i++){
            if (arr[i]!=mx) smx= max(smx,arr[i]) ;// this is the logic, dry run and understand it very well.
        }
        cout<<smx;
    // Advance questions.
    // reverse the array
        int arr[] = {10,3,4,5,6,13};
        int n = sizeof(arr)/4;
        int b[n];
         for (int i=0; i<=n; i++){
            int j= n-1-i; // last element of array goes in first place of second array.
            b[i] = arr[j];
         }
         for (int i=0; i<=n; i++){
            cout<<b[i]<<" ";
         }
    // reverse the array without using any extra array.
          int arr[] = {10,3,4,5,6,13};
          int n = sizeof(arr)/4;
          int i=0;
          int j=n-1;
          while(i<j){ // swapping the first and last elements. (a good approach)
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--; 
          }
    
        // 2-D ARRAYS.
        // how to define it.

       // int arr[m][n]; m= no of rows and n= no of columns(think of it like a grid.)
          // declare an array.
          int array[2][3];
          array[0][0] = 6;
          array[0][1] = 1;
          array[0][2] = 2;
          array[1][0] = 3;
          array[1][1] = 4;
          array[1][2] = 5;
          for (int i=0; i<2; i++){ // rows 
            for (int j=0; j<3; j++){ // columns
                cout<<arr[i][j]<<" "; // this is a cell in a grid.
            }
            cout<<endl;
          }
          // transpose of a matrix or grid.
            for (int j=0; j<3; j++){ // fix the columns and fill the rows
                 for (int i=0; i<2; i++){ // here rows gets printed and columns are fixed.
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
          }

          // other ways to define an array. (BETTER WAY)
          int ar[3][3]= {{1,2,3},{4,5,6},{7,8,9}}; // 3x3 matrix.
          int ar[][3]= {{1,2,3},{4,5,6},{7,8,9}}; // also right but mentioning column is mandatory.
    }   
