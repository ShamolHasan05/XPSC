#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;

    ll l =1, r = INT_MAX, mid, ans;
    while(l<=r){
        mid = l + (r-l)/2;
        int a = mid - mid/n;
        if(a >= k){
            ans = mid;
            r = mid -1;
        }
        else{
            l = mid+1;
        }
    }
    cout<<ans; newline

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        solve();
    }

    
    return 0;
}