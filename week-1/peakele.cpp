#include<bits/stdc++.h>
using namespace std;

int peak_in(vector<int> &arr,int low,int high){
    if(low>high) return 0;
    int mid=(low+high)/2;
    if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]) return mid;
        else if(arr[mid-1]>arr[mid]) return (peak_in(arr,low,mid-1));
        else if(arr[mid]<arr[mid+1]) return (peak_in(arr,mid+1,high));
        else{
            if(peak_in(arr,low,mid-1)) return peak_in(arr,low,mid-1);
            else return peak_in(arr,mid+1,high);
        }

}
int main(){
    vector<int> arr={1,1,2,3,3,2,7,8,8,6};
    int n=arr.size();
   
    if(n==1)  cout<<0;
    if(arr[0]>arr[1]) cout<<0;
    if(arr[n-2]<arr[n-1]) cout<<n-1;
    else {
        int in=peak_in(arr,1,n-2);
        if(in!=0) cout<<in;
        else  cout<<"no peaks";
    }

}
/*int peak_ind(vector<int> arr){
    int n=arr.size();
    if(n==1) return 0;
    if(arr[0]>arr[1]) return 0;
    if(arr[n-2]<arr[n-1]) return n-1;
    int low=1,high=n-2;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]) return mid;
        else if(arr[mid-1]>arr[mid]) high=mid-1;
        else low=mid+1;
    }
    return -1;
}*/