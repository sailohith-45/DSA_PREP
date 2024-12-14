#include<iostream>
#include<vector>
using namespace std;
//general approach  O(n)
/*int kth_miss(vector<int> &arr,int k){
if(k<arr[0]) return k;
else if(arr[n-1]-n<k) return arr[n-1]+k-n-1;
for(int i=0;i<arr.size();i++){
    if(arr[i]<=k) k++;
    else return k;
} }*/
int kth_miss(vector<int> &arr,int k){
    int n=arr.size();
    
if(k<arr[0]) return k;
else if(arr[n-1]-n<k) return arr[n-1]+k-n-1;
else{
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if((arr[mid]-(mid+1))<k) low=mid+1;
        else high=mid-1;
    }
    return k+high+1;
    //return low+k;   as low=high+1;
}
}
int main(){
    vector<int> v={1,3,7};
    int k;
    cout<<kth_miss(v,1);
}