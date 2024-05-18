#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define gcd(a,b) __gcd(a, b)
#define lcm(a,b) ((a*b)/gcd(a,b))
#define newline cout<<'\n';
using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    ll ans = 0;
    for(int i = 1; i < n; i++){
        if(a[i-1] > a[i]){
            ans += a[i-1] - a[i];
            a[i] = a[i-1]; 
        }
    }
    cout << ans; newline
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
