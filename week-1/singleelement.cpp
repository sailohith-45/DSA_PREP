#include<bits/stdc++.h>
using namespace std;
//here size always is odd as only element has single occ and remaining has 2 occ
int search(vector<int> &arr){
    int n=arr.size();
    
    if(n==1) return 0;
    if(arr[0]!=arr[1]) return 1;
    if(arr[n-1]!=arr[n-2]) return n-1;
    int low=1,high=n-2;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid-1]!=arr[mid] && arr[mid]!=arr[mid+1]) return mid;
        else if(arr[mid+1]==arr[mid]){
            low=mid+1;
        }
        else high=mid-1;

    }
    return -1;
}
int main(){
    vector<int> v={1,1,2,3,3,4,4,6,6};
    cout<<search(v);
}
