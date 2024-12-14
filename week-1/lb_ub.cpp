#include<iostream>
#include<vector>
using namespace std;
/* overflow when search space uoto INT_MAX 
int mid=low+(high-low)/2;   ->avoids overflow
*/
//floor ->  large no in arr<=x
int floor(const vector<int>&arr,int target){
    int low=0,high=arr.size()-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]<=target) {
            ans=mid;
            low=mid+1;
            }
        
        else high=mid-1;
    }
    return ans;
}
//ceil  ->  smallest np>=x   ->lower_bound  ***return -1 if doesnt exits

int iter_lb(const vector<int>&arr,int target){
    int low=0,high=arr.size()-1;
    int ans=arr.size();
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=target) {
            ans=mid;
            high=mid-1;
            }
        
        else low=mid+1;
    }
    return ans;
}
int rec_lb(const vector<int>&arr,int low,int high,int target,int &ans){
    if(low>high) return -1;
     //int ans=arr.size();
    int mid=(low+high)/2;
    if(arr[mid]>=target) {  //for ub just change equal sign
        ans=mid;
        return rec_lb(arr,low,mid-1,target,ans); 
        }
        else return rec_lb(arr,mid+1,high,target,ans);
      return ans;

}

int iter_ub(const vector<int>&arr,int target){
    int low=0,high=arr.size()-1;
    int ans=arr.size();
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>target) {
            ans=mid;
            high=mid-1;
            }
        
        else low=mid+11;
    }
    return ans;
}
pair<int,int> fir_last(const vector<int>&arr,int target){  //2*logn tc
    int lb=iter_lb(arr,target);
    if(lb==arr.size() || arr[lb]!=target) return {-1,-1};
    return {lb,iter_ub(arr,target)-1};
}

//first and last without depending on ub and lb
int first_occ(const vector<int>&arr,int target){
    int low=0,high=arr.size()-1;
    int ans=-1;
    while(low<=high){
         int mid=(low+high)/2;
        if(arr[mid]==target){
            ans=mid;
            high=mid-1;
        }
        else if(arr[mid]>target) {
            high=mid-1;
            }
            else low=mid+1;
    }
    return ans;
}
int last_occ(const vector<int>&arr,int target){
    int low=0,high=arr.size()-1;
    int ans=-1;
    while(low<=high){
         int mid=(low+high)/2;
        if(arr[mid]==target){
            ans=mid;
           low=mid+1;
        }
        else if(arr[mid]>target) {
            high=mid-1;
            }
            else low=mid+1;
    }
    return ans;
}
//***** 
pair<int,int> fir_last(const vector<int>&arr,int target){
    if(first_occ(arr,target)==-1) return {-1,-1};  //avoid last occ if no element exists
    return {first_occ(arr,target),last_occ(arr,target)};
}
//count   -> ub-lb+1 if element exists or 0
int count(const vector<int>&arr,int target){
    if(first_occ(arr,target)==-1) return 0;
    return (last_occ(arr,target)-first_occ(arr,target))+1;
}
int main(){
    vector<int> vec ={1,3,7,9,10};
    int target;
    auto it=lower_bound(vec.begin(),vec.end(),target);
    int ans=vec.size();
    int index=rec_lb(vec,0,ans-1,target,ans);



}