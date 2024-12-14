#include<iostream>
#include<vector>
using namespace std;
/* overflow when search space uoto INT_MAX 
int mid=low+(high-low)/2;   ->avoids overflow
*/
//in distinct sorted 
//fixed pt  -> a[i]=i
int fixed_pt(const vector<int>&arr){
    int low=0,high=arr.size()-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==mid) return mid;
        else if(arr[mid]<mid){
            low=mid+1;
        }
        else low=mid+1;
    }
    return -1;
}
int main(){
vector<int> vec ={-1,1,5};
cout<<fixed_pt(vec);
}