#include<iostream>
#include<vector>
using namespace std;
int search(vector<int> &arr,int tar){
    int low=0,high=arr.size()-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==tar) return mid;
         if(arr[low]<=arr[mid]){
            if(arr[low]<=tar && tar<=arr[mid]){
                high=mid-1;
            } 
            else low=mid+1;
        }
        else {
            if(arr[mid]<=tar && tar<=arr[high]){
               low=mid+1;
            } 
            else high=mid-1;
        }
    }
    return -1;
}
//if duplicate elements
bool dp_search(vector<int> &arr,int tar){
    int low=0,high=arr.size()-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==tar) return true;
        if(arr[low]==arr[mid] && arr[mid]==arr[high]){
            low++;
            high--;
 //worst case,if all elemnts are same we'll keep on shrinking array by approx half worst TC->O(n/2)
        }
         else if(arr[low]<=arr[mid]){
            if(arr[low]<=tar && tar<=arr[mid]){
                high=mid-1;
            } 
            else low=mid+1;
        }
        else {
            if(arr[mid]<=tar && tar<=arr[high]){
               low=mid+1;
            } 
            else high=mid-1;
        }
    }
    return false;
}
int main(){
    vector<int> v={7,8,9,1,2,3,4,5,6};
    vector<int> vec={4,1,1,1,4,4,4,4,4};
    bool ind=dp_search(vec,1);
    cout<<ind;
}
