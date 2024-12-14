#include<bits/stdc++.h>
using namespace std;
int bs(vector<int>&arr,int high){
int low=0;
while(low<=high){
    int mid=low+(high-low)/2;
    if(arr[mid]==1) high=mid-1;
    else low=mid+1;
}
return low;
}
int helper(vector<int>&arr){
    if(arr[0]==1) return 0;
    int i=1;
    while(i<arr.size() && arr[i]!=1){
     i*=2;
    }
return bs(arr,i);
}
int main(){
    vector<int>arr;
   cout<< helper(arr);
}