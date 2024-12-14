#include<iostream>
#include<vector>
using namespace std;
//2d indvidual row and col are sorted
//tc O(row+col-1)   o(n+m-1)
pair<int,int> search(vector<vector<int>> &mat,int target){
 int row=mat.size();
    int col=mat[0].size();
    int n=row*col;
    int i=0,j=col-1;
    while(i<row && j>0){
        if(mat[i][j]==target) return {i,j};
        else if(mat[i][j]>target) j--;
        else i++;
    }
    return {-1,-1};
}
int main(){
    vector<vector<int>> v;
}