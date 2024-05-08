#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

void solve(){
    ll n,m;
    cin>>n>>m;
    vector<ll> a(n), b(m);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    for(ll i=0; i<m; i++){
        cin>>b[i];
    }
    set<ll> s;

    for(ll i=0; i<m; i++){
        if(s.count(b[i])){
            continue;
        }
        s.insert(b[i]);
        ll x = pow(2,b[i]);
        for(ll k=0; k<n; k++){
            if(a[k]%x==0){
                a[k] += pow(2,b[i]-1); 
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
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