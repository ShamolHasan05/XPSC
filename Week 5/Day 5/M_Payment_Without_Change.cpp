#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

void solve(){
    ll a,b,n,s;
    cin>>a>>b>>n>>s;
    ll ans = a*n+b;
    if(s%n <= b && ans>=s ){
        yes
    }
    else{
        no
    }

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