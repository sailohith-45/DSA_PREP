#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    double arr[n];
        
        double left = 0, right = 1, mid;
        vector<int> res;
        while (left <= right) {
            mid = left + (right - left) / 2;
            int j=1,tot=0,num,den;
            double max_fra=-1;
            for(int i=0;i<n;i++){
                while(j<n && arr[i]>mid*arr[j]){
                 j++;
                }
                tot+=n-j;
                //max_fra=max(max_fra,arr[i]/arr[j]);
                if(j<n && max_fra< arr[i]/arr[j]){
                 max_fra=arr[i]/arr[j];
                 num=i;
                 den=j;
                }
            }
            if(tot==k) {
                res={num,den};
                break;
            }
            else if(tot>k) right=mid;
            else left=mid;
        }

}