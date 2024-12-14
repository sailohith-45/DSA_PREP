
#include<bits/stdc++.h>
using namespace std;
class Solution {
    
    bool isSpecialP(string s, int k){
        vector<int> v(26);
        int max=1;
        
        int i=0,j=0;
        while(j<s.size()){
            if(s[i]==s[j]){
                if(j+1-i>k){
                    i++;
                    continue;
                }
                if(j+1-i==k){
                    char c=s[i];
                    v[c-'a']++;
                    if(v[c-'a']>max)
                        max=v[c-'a'];
                }
                j++;
            }
            else{
                i=j;
            }
        }
        return max>=3;
    }
    
public:
    int maximumLength(string s) {
        int i=1,j=s.size(),ans=-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(isSpecialP(s,mid)){
                ans=mid;
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        return ans;
    }
};