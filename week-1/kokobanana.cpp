#include<bits/stdc++.h>
using namespace std;
int min_hr(vector<int>&arr,int h){
    int n=arr.size();
   
    int x=*max_element(arr.begin(),arr.end());
    /*for(int i=1;i<=x;i++){
        int sum=0;
        for(int j=0;j<arr.size();j++){
        sum+=ceil(float(arr[j])/float(i));
        }
        if(sum<=h) return i;
    }*/

    int low=1,high=x;
    //int ans=x;
    while(low<=high){
        int mid=(low+high)/2;
         int sum=0;
        for(int j=0;j<arr.size();j++){
        sum+=ceil(float(arr[j])/float(mid));
        } 
        if(sum<=h){
             high=mid-1;
        }
        else if(sum>h) low=mid+1;
       

    }
    return low;
}
int main(){
    vector<int>piles={3,6,7,14};
    cout<<min_hr(piles,8);
    

}