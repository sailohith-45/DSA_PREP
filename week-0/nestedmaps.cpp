#include<bits/stdc++.h>
using namespace std;
int main(){
    map<pair<string,string>,vector<int>> mp;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        string f,l;
        int ct;
        cin>>f>>l>>ct;
        for(int j=0;j<ct;j++){
            int x;cin>>x;
            mp[{f,l}].push_back(x);
        }
    }
    for(auto &pr:mp){
        auto fir=pr.first;
        auto sec=pr.second;
        cout<<fir.first<<" "<<fir.second<<" "<<sec.size()<<endl;;
        for(auto &it:sec){
            cout<<it<<" ";
        }
    }
}