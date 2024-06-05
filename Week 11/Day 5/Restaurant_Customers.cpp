#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define gcd(a,b) __gcd(a, b)
#define lcm(a,b) ((a*b)/gcd(a,b))
#define newline cout<<'\n';
using namespace std;

void solve(){
    int n;
    cin>>n;
    map<int, int> d;
    while(n--){
        int l,r;
        cin>>l>>r;
        d[l]++;
        d[r+1]--;
    }
    ll ans = 0, sum = 0;

    for(auto [x,y] : d){
        sum += y;
        ans = max(sum,ans);
    }
    cout<<ans; newline

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);


        solve();
    

    
    return 0;
}