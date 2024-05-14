#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define gcd(a,b) __gcd(a, b)
#define lcm(a,b) ((a*b)/gcd(a,b))
#define newline cout<<'\n';
using namespace std;

void solve(){
    ll a,b,l;
    cin>>a>>b>>l;
    set<int> s;
    for(int x=0; x<=20; x++){
        for(int y=0; y<=20; y++){
            ll ans = 1;
            for(int k=0; k<x; k++){
                ans *= a;
                if(ans>l){
                    break;
                }
            }
            for(int k=0; k<y; k++){
                if(ans>l){
                    break;
                }
                ans *= b;
                if(ans>l){
                    break;
                }
            }
            if(l %ans ==0){
                s.insert(l/ans);
            }
        }
    }

    cout<<s.size(); newline

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