#include<iostream>
#include<vector>
using namespace std;

int iter_lb(const vector<int>&arr,int target){
    int low=0,high=arr.size()-1;
    int ans=arr.size();
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=target) {
            ans=mid;
            high=mid-1;
            }
        
        else low=mid+1;
    }
    return ans;
}
int row(vector<vector<int>>&mat){
    int rows=mat.size();
    int col=mat[0].size();
    int ind=-1,count=0;
    for(int i=0;i<rows;i++){
    if(col-iter_lb(mat[i],1)>count){  // col-lower_bound(mat[i].begin(),mat[i].end(),1)
        ind=i;
        count=col-iter_lb(mat[i],1);
    }
    }
    return ind;
}
int main(){
    vector<vector<int>> mat={{0, 0, 0},
{0 ,0, 1},
{0 ,0 ,0}
    };
    cout<<row(mat);
}