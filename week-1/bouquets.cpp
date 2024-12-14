/*#include<bits/stdc++.h>
using namespace std;
int days(vector<int>&arr,int m,int k){
    if(arr.size()<m*k) return -1;
int low=1,high=*max_element(arr.begin(),arr.end());
int ans;
while(low<=high){
        int mid=(low+high)/2;
        //cout<<"mid"<<mid<<endl;
        bool flag=true;
        int boq=0,flo=0;
        for(int j=0;j<arr.size();j++){
        if(mid>=arr[j] && !flag){
            flo=0;
            flo++;
            if(flo==k){
             boq++;
             flag=false;
            }
            flag=true;

        }
        else if(mid>=arr[j] && flag){
             flo++;
            if(flo==k){
              boq++;flag=false;
            }
        }
        else flag=false;

        if(boq==m){
            high=mid-1;
            ans=mid;
           // cout<<"ans"<<ans<<endl;
            break;
        }
        }

        if(boq<m) low=mid+1;
    }
    return ans;
}

int main(){
    vector<int> vec={7,7,7,7,13,11,12,7};
    cout<<days(vec,1,3);
}*/

#include <bits/stdc++.h>
using namespace std;

int days(vector<int>& arr, int m, int k) {
    long long val=(long long)m*k;
    if (arr.size() < val) return -1;

    int low = *min_element(arr.begin(),arr.end()), high = *max_element(arr.begin(), arr.end());
    //int ans;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int boq = 0, flo = 0;

        for (int j = 0; j < arr.size(); j++) {
            if (arr[j] <= mid) {
                flo++;
                if (flo == k) {
                    boq++;
                    flo = 0; // Reset for the next bouquet
                    if (boq == m) break; // Early termination
                }
            } else {
                flo = 0; // Reset on non-blooming flower
            }
        }

        if (boq >= m) {
          //  ans = mid;
            high = mid - 1; // Search for smaller days
        } else {
            low = mid + 1; // Search for larger days
        }
    }

    return low;
}

int main() {
    vector<int> vec = {7, 7, 7, 7, 13, 11, 12, 7};
    cout << days(vec, 1, 3) << endl; 
    return 0;
}
