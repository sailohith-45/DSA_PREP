#include<iostream>
#include<vector>
using namespace std;
//sorted matrix given
int iter_s(const vector<int>&arr,int target){
    int low=0,high=arr.size()-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]<target){
            high=mid-1;
        }
        else low=mid+1;
    }
    return -1;
}
bool search( vector<vector<int>> &mat,int target){
    int row=mat.size();
    int col=mat[0].size();
    int n=row*col;
   /* for(int i=0;i<row;i++){
        if(mat[i][0]<=target && target<=mat[i][col]){
            if(iter_s(mat[i],target)!=-1) return true;
        }
    }
    return false;
    //tc -> rows+log(col)
    */
//bs method -> log(row*col)
   int low=0,high=n-1;
   while(low<=high){
    int mid=(low+high)/2;
    if(mat[mid/row][mid%col]==target) return true;
    else if(mat[mid/row][mid%col]<target) low=mid+1;
    else high=mid-1;
   }
   return false;


}

int main(){
    vector<vector<int>> v;
}