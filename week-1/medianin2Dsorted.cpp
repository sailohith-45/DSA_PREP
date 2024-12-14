#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int median(vector<vector<int>> &mat){
 int row=mat.size();
    int col=mat[0].size();
    int n=row*col;
    int low=INT_MAX,high=INT_MIN;
    for(int i=0;i<row;i++){
     low=min(mat[i][0],low);
     high=max(mat[i][col-1],high);
    }
    while(low<=high){
        int mid=(low+high)/2;
        int cnt=0;
        for(int i=0;i<row;i++){
            cnt+=(upper_bound(mat[i].begin(),mat[i].end(),mid)-mat[i].begin());
        }
        if((n/2+1)<=cnt) high=mid-1;
        else low=mid+1;
    }
    return low;
    
}
int main(){
    vector<vector<int>> v={ 
        {1, 2, 3}, 
        {3, 4, 7}, 
        {9, 10, 11} 
    };
    cout<<median(v);
}