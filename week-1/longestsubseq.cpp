#include<bits/stdc++.h>
using namespace std;
//this approach ensures length but doesnt ensure the elements of subseq
int sub_seq(vector<int>&arr){
    vector<int>temp;
   
    for(auto &ele:arr){
     auto it=lower_bound(temp.begin(),temp.end(),ele);
     if(it==temp.end()) temp.push_back(ele);
     else *it=ele;
    }
    return temp.size();
}
int main(){
vector<int>v={1,5,7,3,4};
cout<<sub_seq(v);
}
/*
For each number in nums, we perform the following steps:

If the number is greater than the last element of the last bucket (i.e., the largest element in the current subsequence),
 we append the number to the end of the list. This indicates that we have found a longer subsequence.
Otherwise, we perform a binary search on the list of buckets to find the smallest element that is greater than or equal to the current number. 
This step helps us maintain the property of increasing elements in the buckets.
Once we find the position to update, we replace that element with the current number. 
This keeps the buckets sorted and ensures that we have the potential for a longer subsequence in the future.
*/