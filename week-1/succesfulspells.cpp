#include<bits/stdc++.h>
using namespace std;
//leetcode 2300
class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& p, long long suc) {
        sort(p.begin(),p.end());
        vector<int> ans(spells.size());
        for(int i=0;i<spells.size();i++){
            int low=0,high=p.size()-1;
            while(low<=high){
                int mid=(low+high)/2;
                if((long long)spells[i]*p[mid]>=suc){
                 ans[i]=(p.size()-mid);
                 high=mid-1;
                }
                else low=mid+1;
            }
        }
        return ans;
    }
};