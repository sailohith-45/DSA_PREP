#include<bits/stdc++.h>
using namespace std;
int min_cap(vector<int>&arr,int days){
    int n=arr.size();
  
    int x=*max_element(arr.begin(),arr.end());
    int low=x,high=accumulate(arr.begin(),arr.end(),0);
    //int ans=x;
    while(low<=high){
        int mid=(low+high)/2;
         int sum=0;
         int count=0;
        for(int j=0;j<arr.size();j++){
        sum+=arr[j];
        if(sum==mid){
            count++;
            sum=0;
        }
        else if(sum>mid){
          
            count++;
            sum=arr[j];
        }
         if(j==arr.size()-1) count++;  //*****edge case
        } 
        if(count>days){
             low=mid+1;
        }
        else {
           // ans=mid;
            high=mid-1;
        }

    }
    return low;
}
int main(){
    vector<int>piles={1,2,3,4,5,6,7,8,9,10};
    cout<<min_cap(piles,5);
    

}