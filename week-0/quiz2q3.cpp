//circular ball throws question 

/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,x;cin>>n>>m>>x;
       
       
       unordered_set<int>s;
       s.insert(x);
        for(int i=0;i<m;i++){
            unordered_set<int>s1;
            int d;cin>>d;
            char dir;cin>>dir;
         
            for(auto it:s){

            if(dir=='0'){
                
                s1.insert((it+d-1)%n+1);

            }
            else if(dir=='1'){
               
                 s1.insert((it+n-1-d)%n+1);
            }
            else{
              s1.insert((it+d-1)%n+1);
               s1.insert((it+n-1-d)%n+1);
            }


            }
            s=s1;
            
        }
        set<int> cs(s.begin(),s.end());
        cout<<cs.size()<<endl;
        for(auto it:cs){
            cout<<it<<" ";
        }
        
        

        cout<<endl;
        }
}*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,x;cin>>n>>m>>x;
       
       
       set<int>s;
       s.insert(x);
        for(int i=0;i<m;i++){
            set<int>s1;
            int d;cin>>d;
            char dir;cin>>dir;
         
            for(auto it:s){

            if(dir=='0'){
                
                s1.insert((it+d-1)%n+1);

            }
            else if(dir=='1'){
               
                 s1.insert((it+n-1-d)%n+1);
            }
            else{
              s1.insert((it+d-1)%n+1);
               s1.insert((it+n-1-d)%n+1);
            }


            }
            s=s1;
            
        }
        
        cout<<s.size()<<endl;
        for(auto it:s){
            cout<<it<<" ";
        }
        
        

        cout<<endl;
        }
}
