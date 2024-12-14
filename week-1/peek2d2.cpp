#include<bits/stdc++.h>
using namespace std;
//given 2d 2 adjc cells are not same
//get max ele O(n*m)

//bs approach
int helper(vector<vector<int>> &mat,int mid){
int row=mat.size();
    int col=mat[0].size();
    int max= mat[0][mid],ind=0;
    for(int i=1;i<row;i++){
           if(mat[i][mid]>=max){
            max=mat[i][mid];
            ind=i;
           }
        }
        return ind;
}
pair<int,int> peak(vector<vector<int>> &mat){
int row=mat.size();
    int col=mat[0].size();
    int n=row*col;
    int low=0,high=col-1;
    while(low<=high){
        int mid=(low+high)/2;
        int i=helper(mat,mid);
        int left=mid-1>=0? mat[i][mid-1]:-1;
             int right=mid+1<row? mat[i][mid+1]:-1;

             if(mat[i][mid]>left && mat[i][mid]>right){
                return {i,mid};
             }
             else if(mat[i][mid]<left ){
                high=mid-1;
             }
             else low=mid+1;
    }
    return {-1,-1};

}
int main(){
    vector<vector<int>> v;
}