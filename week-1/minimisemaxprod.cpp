#include<bits/stdc++.h>
using namespace std;

    bool helper(int m, vector<int>& ans,int mid){
    int n=ans.size(),cnt=0;
    for(int i=0;i<n;i++){
        if(ans[i]<=mid) cnt++;
        else {
            //division must done by ***type cast
            cnt+=ceil((double)ans[i] / mid); 
        }
    }
      if(cnt<=m) return true;
    return false;
}

    int minimizedMaximum(int m, vector<int>& ans) {
        int x;
         int n=ans.size();
       int low=1,high=*max_element(ans.begin(),ans.end());
       if(n==m) return high;
       while(low<=high){
        int mid=(low+high)/2;
        if(helper(m,ans,mid)){
        x=mid;
       high=mid-1;
        }
        else   low=mid+1;
       }
       return low;
}
    

    
int main(){
    vector<int> v={25,11,29,6,24,4,29,18,6,13,25,30};
   
    cout<<minimizedMaximum(22,v);
}