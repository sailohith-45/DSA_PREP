#include<bits/stdc++.h>
using namespace std;

//p->profit,w->worker
    int maxProfitAssignment(vector<int>& dif, vector<int>& p, vector<int>& w) {
      int n=dif.size();
        vector<pair<int,int>> v;
      for(int i=0;i<n;i++){
        v.push_back({dif[i],p[i]});
      }
      sort(v.begin(),v.end());
      sort(w.begin(),w.end());

      auto it=(--w.end());
      if(*it<v[0].first) return 0;

      int maxi=v[0].second;
      for(int i=1;i<n;i++){
        maxi=max(maxi,v[i].second);
        v[i].second=maxi;
      }
      int max_pro=0;
      for(int i=0;i<w.size();i++){
        if(w[i]<v[0].first) continue;
        else{
            int low=0,high=n-1,p=0;
            while(low<=high){
                int mid=(low+high)/2;
                if(v[mid].first<=w[i]){
                    p=max(p,v[mid].second);
                    low=mid+1;
                }
                else high=mid-1;
            }

            max_pro+=p;
        }
      }
      return max_pro;
    }
