// Leetcode : 2226. Maximum Candies Allocated to K Children
// Binary search medium
#include <bits/stdc++.h>
using namespace std;

    bool check(int mid, vector<int>& candies, long long k){
              long long cnt=0;

              for(int i=0;i<candies.size();i++) cnt+=candies[i]/mid;
              if(cnt>=k) return true;

              return false;

    }
    int maximumCandies(vector<int>& candies, long long k) {
        int mini=INT_MIN;
        for(int i=0;i<candies.size();i++) mini=max(mini,candies[i]);
        int lo=1;
        int hi=mini;
        int ans=0;

        while(lo<=hi){
            int mid=lo+(hi-lo)/2;

            if(check(mid,candies,k)){
                ans=max(ans,mid);
                lo=mid+1;
            }
            else hi=mid-1;
        }

        return hi;
    }
int main() {
    vector<int> candies = {5,8,6};
    long long k = 3;
    cout << maximumCandies(candies, k) << endl; // Output: 5
    return 0;
}
// This code finds the maximum number of candies that can be allocated to k children such that each