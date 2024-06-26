#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define gcd(a,b) __gcd(a, b)
#define lcm(a,b) ((a*b)/gcd(a,b))
#define newline cout<<'\n';
using namespace std;

void solve(){
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    vector<int> d(n+1);
    while(q--){
        int l,r;
        cin>>l>>r;
        d[l-1]++;
        d[r]--;
    }
    for(int i=1; i<n; i++){
        d[i] = d[i]+d[i-1];
    }
    sort(a.rbegin(), a.rend());
    sort(d.rbegin(), d.rend());
    ll ans = 0;
    for(int i=0; i<n; i++){
        ans += (1LL *a[i]*d[i]);
    }
    cout<<ans; newline

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
        solve();
    

    
    return 0;
}