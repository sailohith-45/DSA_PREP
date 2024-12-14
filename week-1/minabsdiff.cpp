#include<bits/stdc++.h>
using namespace std;
//general O(n*n)
/*int minAbsoluteDifference(vector<int>& nums, int x) {
        int n=nums.size();
        int i=0,j=0;
        int k=INT_MAX;
        while(i+x<n){
            j=i+x;
            if(j>=n) break;
            while(j<n){
                k=min(k,abs(nums[i]-nums[j]));
                if(k==0) return 0;
                j++;
            }
            i++;
        }
        return k;
    }*/
    int minAbsoluteDifference(vector<int>& nums, int x) {
        set<int>s;
        int n=nums.size();
        int mini=INT_MAX;
        //taking array-> [1,2,5,3,4,2] x=2
 //backtracking from ind=3 and adding arr[3+x] i.e arr[5]=2 into set
 // then ind=2 and adding arr[2+x] i.e arr[4] as already arr[5] added
        for(int i=n-x-1;i>=0;i--){
            s.insert(nums[i+x]);
            auto it=s.lower_bound(nums[i]);
            if(it!=s.end()){
                mini=min(mini,abs(nums[i]-*it));
            }
            if(it!=s.begin()){
                --it;
                mini=min(mini,abs(nums[i]-*it));
            }
            if(mini==0) return 0;

        }
        return mini;
    }
 int main(){
    
 }
