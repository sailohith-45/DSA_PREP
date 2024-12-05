#include<bits/stdc++.h>
using namespace std;
int main(){
    //tc will be similar to their original implementations
//sorting  [first,last)
sort(arr,arr+n);  sort(arr+1,arr+4);    //[1,4)
sort(vec.begin(),vec.end());  //nlog(n)

reverse(arr,arr+n);  //same as sort


//max and min  same as sort
int el=*max_element(arr,arr+n);  //max_element is iterator,deference
int el=*min_element(arr,arr+n);

//sum   accumulate(startit,endit,initsum)
int intial_sum=0;
int summm=accumulate(arr,arr+n,intial_sum);

//count (first,end,variable)
int cnt=count(arr,arr+n,x); //O(n)

auto it=find(arr,arr+n,x); //returns it of first occurence or points to end if no 'x' is there
//index=it-arr; //O(n)

//binary search only on *****sorted arrays   O(logn) where find O(n)
//return true or false
//1 3 5 7 9
bool res=binary_search(arr,arr+n,8);

//lower bound   returns it which is not less than x
//uses binary search   and logn tc  and onlyy on sorted arrays
auto it=lower_bound(arr,arr+n,x);
int index=it-arr;
//upper bound returns it just greater than x  same as lbound


//q1 find first index where X lies  array is sorted
//arr[] {1,5,7,7,8,10,10,11,11,12} ,find x=6
if(binary_search(arr,arr+n,6)){ //logn
    int index=lower_bound(arr,arr+n,6)-arr;  //logn    total =2logn 
    cout<<index<<endl;
}
else cout<<"null";
//or
int index=lower_bound(arr,arr+n,6)-arr;
if(index<n && arr[index]==x){
    cout<<index<<endl;
}

//last occurence
int index=upper_bound(arr,arr+n,6)-arr;
index-=1;
if(index>=0 && arr[index]==6) cout<<index;

//q3 no of times x appear
int y=upper_bound(arr,arr+n,x)-lower_bound(arr,arr+n,x);

//next permutation //O(n)
//string s="abc";
// abc acb bac bca cab cba are permutations
s="bca";
bool res=next_permutation(s.begin(),s.end());  //s will be cab and res=true
//if s="cba"
bool res=next_permutation(s.begin(),s.end()); //s will be cba only but res=false

//random string bca and want to print all permutations 
string s="bca";
sort(s.begin(),s.end());//sorting first

do{
    cout<<s<<<" "
} while(next_permutation(s.begin(),s.end()));
//prev permutation
bool res=prev_permutation(arr,arr+n);
}