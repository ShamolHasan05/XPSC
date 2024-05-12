#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define gcd(a,b) __gcd(a, b)
#define lcm(a,b) ((a*b)/gcd(a,b))
#define newline cout<<'\n';
using namespace std;

void solve(){
    ll n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;
    ll c = n/lcm(a,b);
    ll ans = 0;
    ans += ((n/a)-c)*p;
    ans += ((n/b)-c)*q;
    ll mx = max(p,q);
    ans += (c*mx);
    cout<<ans; newline

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
        solve();
    

    
    return 0;
}