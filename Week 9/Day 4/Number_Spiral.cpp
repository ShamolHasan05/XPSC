#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define gcd(a,b) __gcd(a, b)
#define lcm(a,b) ((a*b)/gcd(a,b))
#define newline cout<<'\n';
using namespace std;

void solve(){
    ll r,c;
    cin>>r>>c;
    ll ans = 0;

    if(r>c){
        if(r%2 == 0){
            ans = powl(r,2) + 1 - c;
        }
        else{
            ans = powl(r-1,2) + c; 
        }
    }
    else{
        if(c%2 == 0){
            ans = powl(c-1,2) + r;
        }
        else{
            ans = powl(c,2) + 1 - r;
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