#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,s;
    cin>>n>>s;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll l=0,r=0, ans=0;
    ll sum =0;
    while(r < n){
        sum += a[r];
        while(sum >= s){
            ans += (n - r);
            sum -= a[l];
            l++;
        }
        r++;
    }

    cout<<ans<<'\n';

    return 0;
}
