//leetcode 3821
#include<bits/stdc++.h>
using namespace std;

    bool helper(vector<int>& s,long long len, int d){
        int n=s.size();
        long long x=s[0];
        for(int i=1;i<n;i++){
            x+=len;
            //if(x<=s[i] && x<= ((long long)s[i]+d)) continue;
            if(x> (long long)s[i]+d) return false;
            else if(x<s[i]) x=s[i];
           
        }
        return true;
    }

    int maxPossibleScore(vector<int>& s, int d) {
        int n=s.size();
        sort(s.begin(),s.end());
        int low=0;
        long long high=s[n-1]+d,ans=d;
        while(low<=high){
            long long mid=low+(high-low)/2;
            if(helper(s,mid,d)){
                ans =mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        return ans;
    }
