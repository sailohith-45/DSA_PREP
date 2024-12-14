#include<bits/stdc++.h>
using namespace std;
bool place(vector<int>&arr,int k,int x){
    int count=1,pages=0;
    for(int i=0;i<arr.size();i++){
        if((pages+arr[i])<=x){
           pages+=arr[i];
           
        }
        else{
            count++;
           pages =arr[i];
        }
    }
    if(count<=k) return true;
    else return false;
}
int books(vector<int>&arr,int m){
    int n=arr.size();
    if(m>n) return -1;
    int low=*max_element(arr.begin(),arr.end());
    int high=accumulate(arr.begin(),arr.end(),0);
    if(m==n) return low;
    while(low<=high){
        int mid=(low+high)/2;
        if(place(arr,m,mid)) high=mid-1;
        else low=mid+1;
    }
    return low;
}

int main(){
    vector<int> v= {12, 34, 67, 90};
    cout<<books(v,2);
}