#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define gcd(a,b) __gcd(a, b)
#define lcm(a,b) ((a*b)/gcd(a,b))
#define newline cout<<'\n';
using namespace std;

void solve(){
    int n, q;
    cin>>n>>q;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    map<int, int> mp;

    for(int i=0; i<n; i++){
        for(int k=0; k<31; k++){
            if(a[i]&1){
                mp[k]++;
            }
            a[i] = (a[i]>>1);
        }
    }
    ll ans = 0;

    for(int i=30; i>=0;i--){
        int x = n-mp[i];
        if(q>=x){
            ans += pow(2,i);
            q -= x;
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