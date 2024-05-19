#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define gcd(a,b) __gcd(a, b)
#define lcm(a,b) ((a*b)/gcd(a,b))
#define newline cout<<'\n';
using namespace std;

void solve(){
    ll n, k, q;
    cin>>n>>k>>q;
    vector<ll> a(k+1), b(k+1);
    a[0] = 0; b[0] = 0;
    for(ll i=1; i<=k; i++){
        cin>>a[i];
    }
    for(ll i=1; i<=k; i++){
        cin>>b[i];
    }
    
    while(q--){
        ll x;
        cin>>x;
        if(x==0){
            cout<<0<<" "; continue;
        }
        if(x==n){
            cout<<b[k]<<" "; continue;
        }

        ll idx = upper_bound(a.begin(), a.end(), x) - a.begin();
        ll ans = b[idx-1];
        ll d = a[idx] - a[idx-1];
        ll t = b[idx] - b[idx-1];
        ll et = x - a[idx-1];
        ans += (et * t) / d;
        
        cout<<ans<<" ";
    }
    newline
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
