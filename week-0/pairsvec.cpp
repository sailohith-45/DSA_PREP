#include<iostream>
#include<pairs>

using namespace std;
pair<int, string>&p1 = p; //p1 is declared as a reference to the pair p. both are pointing to same
/*
pair<int, string> p1 = &p;
Explanation:
This attempts to assign the address of p (a pointer) to p1.
&p gives the memory address of p, but p1 is not a pointer—it is a pair<int, string> object.
Assigning a pointer to an object of incompatible type results in a compilation error.
Key Points:
Invalid syntax in C++.
Causes a type mismatch because pair<int, string> expects a pair<int, string> value, not a pointer.
Correct Way to Use Pointers
If you intend to use pointers, declare p1 as a pointer:
pair<int, string> p = {42, "hello"};
pair<int, string>* p1 = &p; // p1 is a pointer to p
// Access members of p1 using the '->' operator
cout << p1->first << " " << p1->second << endl;
// Modifying through pointer
p1->first = 99; // Modifies p directly
*/
pair<int,int>p_arr[3];
p_arr[0]={1,2};
p_arr[1]={3,4};
p_arr[2]={5,6};
swap(p_arr[0],p_arr[2]);
for(int i=0;i<2;i++){
    cout<<p_arr[i].first<<" "<<p_arr[i].second;
}