
#include <iostream>
#include <map>
#include <vector>
#include<unordered_map>
using namespace std;
//map-> key,value 
//m[x]={s}   -> replaces given value   
//mp.insert({x, {s}}) inserts a new entry only if the key x does not already exist.

//m.isert({x,{s}})  ->doesnt replaces only first one is considered repeating

/*mp[x]++ increments the value associated with the key x by 1.
If the key x does not exist, mp[x] is default-initialized to 0, and then incremented to 1.
mp[x].insert()  ->ignored if value refers set*/
int main() {
    
    /*vector<int> data = {1, 2, 2, 3, 3, 3, 4, 5, 5, 1, 6, 6, 6, 6};

    
    map<int, int> mp;

    
    for (auto num : data) {
        mp[num]++; 
    }

   
    cout << "Frequency of elements:" << endl;
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        cout << "Element: " << it->first << ", Frequency: " << it->second << endl;
    }

   unordered_map<int,int>up;
   for(auto it:data){
    up[it]++;
   }
   for(auto it=up.begin();it!=up.end();it++){
    cout<<it->first<<" ->"<<it->second<<endl;

   }*/

   //given n elements ,print max ooccured elements , 1 3 3 4 6 6 7
   int n;cin>>n;
   unordered_map<int,int> mpp;
   vector<int> v;
   int maxi=0;
   for(int i=0;i<n;i++){
    int x;cin>>x;
    mpp[x]++;
    if(mpp[x]>mpp[maxi]) maxi=x;
   }
   cout<<maxi<<endl;


   int max_freq=0;
   for(auto pair:mpp){
    if(pair.second>max_freq) max_freq=pair.second;

   }

   for(auto pair:mpp){
    if(pair.second==max_freq) cout<<pair.first<<" ";
   }
}
