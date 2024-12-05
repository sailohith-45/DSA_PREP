#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,string> p1,pair<int,string> p2){
    if(p1.first>p2.first) return true;
    else if(p1.first==p2.first){
        if(p1.second<p2.second) return true;
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    /*while(t--){
        int n;cin>>n;
        map<int,multiset<string>> mp;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            string s;cin>>s;
          // mp.insert({x,{s}});
          mp[x].insert(s);
        }
        auto it=(--mp.end());
        do{
            //want to print (names marks) in order such that marks descending if same marks lexico
            for(auto &z:it->second){
                cout<<it->first<<" "<<z<<endl;
            }
            it--;

        }while(it!=(--mp.begin()));
    }
}*/

 /*while(t--){
        int n;cin>>n;
        map<int,multiset<string>> mp;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            string s;cin>>s;
          // mp.insert({x,{s}});
          mp[-1*x].insert(s);
        }
       for(auto &it:mp){
      //  auto &stud=it.second;
        for(auto &name:it.second){
            cout<<name<<" "<<-1*it.first<<endl;
        }

       }
    }
}*/

while(t--){
        int n;cin>>n;
        vector<pair<int,string>> v;
        for(int i=0;i<n;i++){
             int x;cin>>x;
            string s;cin>>s;
            v.push_back({x,s});
        }
        sort(v.begin(),v.end(),comp);
        for(auto &it:v){
            cout<<it.second<<" "<<it.first<<endl;
        }

}
}
