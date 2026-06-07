/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[a[i]]++;
    }

    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[a[i]]+=1;
    }
    for (auto x : mpp) {
        cout << x.first << " " << x.second << endl;
    }


    return 0;
}*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    map<int, int> freq;

    for(int x : nums) {
        freq[x]++;
    }

    int maxFreq = 0;
    int ans;

    for(auto x : freq) {
        if(x.second > maxFreq) {
            maxFreq = x.second;
            ans = x.first;
        }
    }

    cout << ans;

    return 0;
}