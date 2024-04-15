#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

void solve(){
    int n;
    cin>>n;
    map<int, int> mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[__lg(x)]++;
    }
    ll ans = 0;
    for(auto [x, y] : mp){
        ans += (1LL*y*(y-1))/2;
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