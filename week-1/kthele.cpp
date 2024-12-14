#include <bits/stdc++.h>
using namespace std;

int kth(vector<int>& a, vector<int>& b,int k) {

    int n1=a.size(),n2=b.size();
    
    if(n1>n2) return kth(b,a,k);
    
    int low=max(k-n2,0),high=min(n1,k);
    //int ele=(n1+n2+1)/2;
    while(low<=high){
        int l1=INT_MIN,l2=INT_MIN;
        int mid1=(low+high)/2;
        int mid2=k-mid1;
        int r1=a[mid1],r2=b[mid2];
        if(mid1>0) l1=a[mid1-1];
        if(mid2>0) l2=b[mid2-1];
        if(l1>r2) high=mid1-1;
        else if(l2>r1) low=mid1+1;
        else{
           return max(l1,l2);
            
        }

    } 
    }

    int main(){
        vector<int> a,b;
        a={1,4,5,7,10,12};
        b={2,3,10,15};
        cout<<kth(a,b,8);
    }