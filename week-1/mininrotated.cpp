#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
// ***no of rotations made = min element index
int min_ele(vector<int> &arr){
    int low=0,high=arr.size()-1;
    int x=INT_MAX;
    int ind=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[low]<=arr[high]){
             if(arr[low]<x) ind=low;
             break;
        }
         if(arr[low]<=arr[mid]){
            if(arr[low]<x) {
                ind=low;
           x=min(x,arr[low]);
            }
           low=mid+1;
        }
        else {
            if(arr[mid]<x){
             ind=mid;
             x=arr[mid];
            }
          
           high=mid-1;
        }
    }
    return ind;
}
int dpmin(vector<int> &arr){
    int low=0,high=arr.size()-1;
    int x=INT_MAX;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[low]==arr[mid] && arr[mid]==arr[high]){
            low++;
            high--;
        }
         else if(arr[low]<=arr[mid]){
           x=min(x,arr[low]);
           low=mid+1;
        }
        else {
           x=min(x,arr[mid]);
           high=mid-1;
        }
    }
    return x;
}
int main(){
    vector<int> v={7,8,9,1,2,3,4,5,6};
    vector<int>x={4,4,4,0,2,3};
    cout<<min_ele(v)<<endl;
    cout<<dpmin(x);

}