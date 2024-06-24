#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define gcd(a,b) __gcd(a, b)
#define lcm(a,b) ((a*b)/gcd(a,b))
#define newline cout<<'\n';
using namespace std;

void solve(){
    ll k ,n;
    cin>>k>>n;
    vector<ll> a(n), c(n);

    for(ll i=0; i<n; i++){
        cin>>a[i];
    }

    for(ll i=0; i<n; i++){
        cin>>c[i];
    }
    ll l=1, r=1e12,mid;
    ll ans = r;

    while(l<=r){
        mid = (l+r)/2;
        ll sum = 0;
        for(ll i=0; i<n; i++){
            ll t = (mid-1)/c[i]+1;
            sum += t*a[i];
            if(sum>=k){
                break;
            }
        }
        if(sum>=k){
            ans = min(ans,mid);
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

    int t;
    cin>>t;
    while(t--){
        solve();
    }

    
    return 0;
}