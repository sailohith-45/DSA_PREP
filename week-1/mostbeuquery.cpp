#include<bits/stdc++.h>
using namespace std;


    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        int maxi=-1;
      
       int x=items.size();
        sort(items.begin(),items.end());
        for(int i=0;i<items.size();i++){
        maxi=max(maxi,items[i][1]);
        items[i][1]=maxi;
       
        }
        int min_p=items[0][0];
        int max_p=items[x-1][0];
        int n=queries.size();
        vector<int> answer;
        
        for(int j=0;j<n;j++){
            int tar=queries[j];
        if(tar<min_p) answer.push_back(0);
        else if(tar>=max_p) answer.push_back(items[x-1][1]);
        else{
            int low=0,high=x-1;
            int k;
            while(low<=high){
                int mid=(low+high)/2;
                if(tar>=items[mid][0]){
                k=mid; //**duplicates might exist so better to declare new variable to store
                 low=mid+1; }
                else high=mid-1;
            }
            answer.push_back(items[k][1]);
        }
        }
        return answer;
    }
