#include<bits/stdc++.h>
using namespace std;
int sqrt(int n){
    if(n==1) return 1;
    int low=1,high=n/2;
   int ans;
    while(low<=high){
        int mid=(low+high)/2;
        if(mid*mid<=n) {
           ans=mid;
            low=mid+1;
        }
        else if(mid*mid>n) high=mid-1;
    }
    return ans;
}
//n^i //return 0->  ,1->   ,2->
int fun(int mid,int n,int m){
    long long ans=1;
   /*for(int i=0;i<n;i++){
        ans=ans*mid;
        if(ans>m) return 2;
    }
    if(ans==m) return 1;
    return 0;*/
    while(n>0){
        if(n%2==1){
            ans=ans*mid;
            if(ans>m) return 2;
        }
        mid*=mid;
        n=n/2;
    }
    if(ans==m) return 1;
    else return 0;


}
int nth_root(int m,int n){
    int low=1,high=(m/n);
    while(low<=high){
        int mid=(low+high)/2;
        int x=fun(mid,n,m);
        if(x==1) return mid;
        else if(x==2) high=mid-1;
        else low=mid+1;
    }
    return -1;
}
int main(){
    cout<<sqrt(200)<<endl;;
    cout<<nth_root(1000000000,3)<<endl;
}