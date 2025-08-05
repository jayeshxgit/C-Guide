#include<iostream>
using namespace std;
// print number from n->1
    void print(int n){

        // when n hits 0 then return function stops to void function to move further. 
        if (n==0) return; // base case
        cout<<n<<endl;  // work
        print(n-1);     // call
    }
      void prints(int n){
        if (n==11) return; 
        cout<<n<<endl;
        prints(n+1);
    }
    void printss(int x, int n){ 
    
     // extra parameter to solve this question.   
     // we added another parameter x to solve this question.
        if (x>n) return;      
        cout<<n<<endl;
        printss(x+1,n);
    } 

    // understand and dry run this code for better clarity.
    // this prints the function like print function but good logic of recursion.
    void sprint(int n){ 
        if (n==0) return;
          sprint(n-1); 
        cout<<n<<endl;  
        
    }
    // print sum from 1 to n (Return type).
    // recursion Algo- to solve a recursion question always try to find a generalised function for a call back. eg in below question sum(n-1) is a generalised function for sum. 


    // sum(n) = n + sum(n-1) generalised function creating for recursion. 
     
    int power(int a,int b){ // again here create the function.
        if (b==0) return 1;
        return a* power(a,b-1);
    }
    // fibonacci series.
     int fibo(int n){
        if (n==1|| n==2) return 1;
        return fibo(n-1) + fibo(n-2);
     }
    
    int main(){
        int n;
        cin>>n;
        print(10);
        prints(1);
        printss(1,5);
        sprint(7);
     

        int a;
        cin>>a;
        int b;
        cin>>b;
        cout<<power(a,b);
    }

