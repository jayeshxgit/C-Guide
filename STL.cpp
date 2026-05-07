#include<bits/stdc++.h>
using namespace std; // this is the library that is letting us access the tools in it.
                     // if not mentioned then write std:: and then use the function.
int main(){
// PAIRS.
    pair<int,int> x ={2,3}; // this lets us store exactly two values in a single variable.
    // x=make_pair(2,3) also does the same thing.
    cout<<x.first<<" "<<x.second;
    // another example.
    pair<pair<int,int>,int> m={{3,4},2};
    cout<<m.first.second; // this prints 4 

    // we can store different data types inside the pair.
// VECTORS. 

vector<int> nums;
for(int i = 0; i < n; i++){
    int x; cin >> x;
    nums.push_back(x);
}

vector<int> vec;
vec.push_back(1);
vec.push_back(2);
vec.push_back(0); // vec.emplace_back(0); other way to write it.

for(int i=0; i<vec.size(); i++){ // they store the data in 0 based indexing.
    cout<<vec[i]<<" ";
}
cout<<endl;

// Iterator.
auto beginitr = vec.begin();
auto enditr = vec.end(); // it points to the memory location after the last element.

// vector<int>::iterator is little lengthy thus we use 'auto' instead of this.
// it automatically tells the type of iterator which in this case is int.

for(auto i=beginitr; i<enditr; i++){ // since vec.end points to location after the last element we are going till <enditr and not<= enditr (if enditr = enditr-1 then go with <=)
    cout<<*i<<" ";
}

// another method. best method to print vector
for( auto i : vec){ // here we are asking i to go through the container vec.
    cout<< i <<endl;
}
cout<<endl;

// reverse iterator.
auto reversebegin = vec.rbegin();
auto reverseend = vec.rend();
for(auto i= reversebegin; i < reverseend; i++){
    cout<<*i<<" ";
}
// another method to define a vector.
vector<int> vect={1,2,3,4};
for(auto i: vect){
    cout<<i<<endl;
} 
  // vect.front = gives the front element.
  // vect.back = gives the last element.
  // vect.erase(vect.begin() + 1, vect.end()-1): it will print only 7 0. and others were eliminated
  // vect.clear() it will clear all the elements.
  // vect.[] use it to access the elements just like in an array.
  // swap(vec1,vec2) it will swap two vectors.
  // vect.insert(vec.begin()+2, 4) it will insert this number before the required element thats so 1 2 4 3 4.

  // how to implement these formulas.
  vector<int> vecto ={1,2,3,4,5};
  vecto.insert(vec.begin()+2, 4); // first the method was applied then simply printed the vector.
  for (auto i: vecto){
    cout<<i<<" ";
  }
  
 // LISTS. 
 // all the methods are applied in this.
 list<int> ls= {1,2};
 ls.push_front(0); // ADDITIONAL THING HERE-: here we can add the elements in the front unlike vectors
 for(auto i: ls){
    cout<<i<<" ";
 }

 // STACK.
 // it works on Last in first out.
 // you add elements in this and when you take out the element then the last one comes out first.

 stack<int> st;
 st.push(1); // it will push the element in the stack
 st.push(3); // it will push it on top of 1
 cout<< st.top()<< " "; // prints 3 
 st.pop(); // removes 3 
 cout<<st.top()<<" "; // prints 1 

 // to print all the elements, we use while loop.
 while(st.empty() == false){ // asking stack if you are empty, if not then go through the loop.
    // prints the loop until st.empty == true.
    cout<< st.top() << " ";
    st.pop();
 }

 // QUEUE.
 // similar to stack only here First In First Out.
 queue<int> q;
 q.push(2);
 q.push(3);
 while(q.empty()== false){
    cout<<q.front()<<" ";
    q.pop();
 }
 // Priority QUEUE(HEAP)
 priority_queue<int> pq; // stores the highest element at the top.
 // priority_queue<int, vector<int>, greater<int>> pq; stores the lowest element at the top.
 pq.push(1);
 pq.push(2);
 pq.push(3);

 while (pq.empty()== false){
    cout<<pq.top()<<"   ";
    pq.pop();
 }
// SET
// stores only unique elements and in ascending order.

vector<int> v = {4, 2, 4, 1, 2, 3};
set<int> s(v.begin(), v.end());
for (auto x : s) cout << x << " ";    // Output: 1 2 3 4

set<int> s;
s.insert(1);
s.insert(2);
s.insert(4);
s.insert(3);
for(auto i: s){
    cout<<i<<" ";
}
auto i = s.find(2); // if find() never finds 2 then it will give the element after the end.
if (i != s.end()) {
    cout<<*i;
}
cout<<s.count(3);  // also to check if an element is there use count(), if it is there then 1 otherwise 0.
// to erase a certain element.

auto i1 = s.begin();  // points to 1
i1++;                 // now points to 2

auto i2 = s.end();    // points to AFTER last element
i2--;                 // now points to 5
i2--;                 // now points to 4

s.erase(i1, i2);      // erase range [i1, i2)

for (auto i : s) {
    cout << i << " ";
}

// lower_bound
auto i = s.lower_bound(3);
// returns the value that points to an element that is >= number inside the method.
if (i == s.end()){
    cout<<"not found";
}
else{
    cout<<*i;
}
// upper bound- returns the value that points to an element that is > number inside the method.

// MULTISET.
//  set which can hold similar values unlike sets in ascending order.
multiset<int> ms;
ms.insert(1);
ms.insert(2);
ms.insert(3);
ms.insert(3);
for(auto i: ms){
    cout<<i<<" ";
}
// erase will delete all the elemens.
// find will find the element and if there are similar ones it will find the first occuring one.
// all the function are same from set.
auto i = ms.erase(ms.find(3)); // try to think what will be deleted here. answer= 1,2,0,3
for(auto i: ms){
    cout<<i<<" ";
}

// UNORDERED_SET.
// stores unique elements in unordered fashion.
// methods are same except ub and lb don't apply here

// MAPS. like dictionaries in python.
map<int, string> mp;
mp[1] = "ab";
mp[2] = "cd";
mp[3] = "ef";
mp[4] = "gh";
mp.insert({5, "ij"});
for(auto i: mp){ // here i act as the copy of the data element so no * but in traditional for loop method we use *.
    cout<<i.first<<"=>"<<i.second<<endl;
}
auto i = mp.find(2); // this will find an iterator of this position for fast access thus it returns a pointer like object.
cout<<(*i).first<<" "<<(*i).second<<endl;
 // ub and lb are also valid here.

// UNORDERED MAP.
// same concept like unordered set.

// BUILT-IN Functions









}


