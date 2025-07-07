#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int n,x;
    cin>>n>>x;
    for(int i=0;i<n;i++) {
        int k;
        cin >> k;
        v.push_back(k);
    }
    int lo=0;
    int hi=v.size()-1;
    int ans=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;

        if(v[mid]==x) {
            ans=mid;
            hi=mid-1; // to find the first occurrence
        }
        else if(v[mid]>x) {
            hi=mid-1;
        }
        else lo=mid+1;

    }
    cout<< ans;
    return 0;
}