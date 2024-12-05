//candy question
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        multiset<int> m;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            m.insert(x);
        }
       int count=0;
        for(int i=0;i<k;i++){
 auto it=--m.end();
 int x=*it;
count+=(*it);
m.erase(it);
m.insert(x/2);
        }
        cout<<count<<endl;
    }
}
