#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,s;
    cin>>n>>s;
    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll l=0,r=0,sum=0,ans=-1;

    while(r<n){
        sum += a[r];
        while(sum - a[l] >= s){
            sum -= a[l];
            l++;
        }
        if(sum >= s){
            if(ans == -1 || r-l+1 < ans){
                ans = r-l+1;
            }
        }
        r++;
    }

    cout<<ans<<'\n';

    
    return 0;
}
