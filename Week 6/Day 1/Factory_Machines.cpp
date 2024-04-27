#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

bool ok(ll m, int n, int t, vector<int>&a){
    ll total = 0;
    for(int i=0; i<n; i++){
        total += (m/a[i]);
        if(total>=t){
            return true;
        }
    }
    return false;
}

void solve(){
    int n,t;
    cin>>n>>t;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    // auto ok = [&](ll m){
    //     ll total = 0;
    //     for(int i=0; i<n; i++){
    //         total += (m/a[i]);
    //         if(total>=t){
    //             return true;
    //         }
    //     }
    //     return false;
    // };

    ll l=1, r=1e18, mid, ans;
    while(l<=r){
        mid = (r+l)/2;
        if(ok(mid,n,t,a)){
            ans = mid;
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }

    cout<< ans; newline

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
        solve();
    

    
    return 0;
}