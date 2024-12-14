#include<bits/stdc++.h>
using namespace std;
int length(vector<int> &arr){
    int n=arr.size();
    int start=0,end=n-1;
    while(start<n-1){
        if(arr[start]>arr[start+1]) break;
        start++;
    }
    if(start==n-1) return 0;
    while(end>0){
         if(arr[end]<arr[end-1]) break;
         end--; }
         
    int min=*min_element(arr.begin()+start,arr.begin()+end+1);
    int max=*max_element(arr.begin()+start,arr.begin()+end+1); //we can find together with o(n)
    int cnt=0;
    for(int i=0;i<start;i++){
        if(arr[i]>min) cnt++;
    }
    for(int i=end+1;i<n;i++){
        if(arr[i]<max) cnt++;
    }

    return cnt+(end-start)+1;

}
int main(){
vector<int> arr={4,2,3,7,6,5,4,10,9};
cout<<length(arr);
}