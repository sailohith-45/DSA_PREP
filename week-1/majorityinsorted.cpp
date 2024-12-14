#include<bits/stdc++.h>
using namespace std;
int majority(const vector<int>&arr){
int n=arr.size()-1;
if(n==0) return arr[0];
int mid=n/2;
int f=arr.size()/2+1;
if((upper_bound(arr.begin(),arr.end(),arr[mid])-lower_bound(arr.begin(),arr.end(),arr[mid]))>=f){
    return arr[mid];
}
else return -1;
}
int main(){
    vector<int>arr={1,2,2,2,2,4};
    cout<<majority(arr);
}