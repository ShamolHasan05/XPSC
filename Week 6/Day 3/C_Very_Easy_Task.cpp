#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

void solve(){
    int n,x,y;
    cin>>n>>x>>y;

    auto ok = [&](ll t){
        if(t < min(x,y)){
            return false;
        }
        ll cnt = 1;
        t -= min(x,y);
        cnt += t/x + t/y;
        
        return cnt >= n;
    };

    ll l=0, r = max(x,y)*n, mid, ans;
    while(l<=r){
        mid = l + (r-l)/2;
        if(ok(mid)){
            ans = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    cout<<ans; newline

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
        solve();
    

    
    return 0;
}