#include<bits/stdc++.h>
using namespace std;
int min_div(vector<int>&arr,int thre){
    int n=arr.size();
   if(thre<n) return -1;
    int x=*max_element(arr.begin(),arr.end());
    int low=1,high=x;
    //int ans=x;
    while(low<=high){
        int mid=(low+high)/2;
         int sum=0;
        for(int j=0;j<arr.size();j++){
        sum+=ceil(float(arr[j])/float(mid));
        } 
        if(sum<=thre){
             high=mid-1;
        }
        else if(sum>thre) low=mid+1;
       

    }
    return low;
}
int main(){
    vector<int>piles={3,6,7,14};
    cout<<min_div(piles,7);
    

}