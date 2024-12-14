#include<bits/stdc++.h>
using namespace std;
bool place(vector<int>&arr,int k,int x){
    int n=arr.size();
    int count=1,last=arr[0];
    for(int i=1;i<n;i++){
        if((arr[i]-last)>=x){
            count++;
            last=arr[i];
        }
        if(count==k) return true;
    }
    return false;
}
int min_hr(vector<int>&arr,int k){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int low=1,high=arr[n-1]-arr[0];
    while(low<=high){
        int mid=(low+high)/2;
        if(place(arr,k,mid)){
            low=mid+1;
        }
        else high=mid-1;
    }
    return high;
}
