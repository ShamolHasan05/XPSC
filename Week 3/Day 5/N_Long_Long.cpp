#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll sum=0,cnt=0,l=0,r=0;

    while(r<n){
        if(a[r] < 0){
            while(r<n && a[r] < 1 ){ 
                sum += abs(a[r]);
                r++;
            }
            cnt++;
        }
        else{
            sum += abs(a[r]);
            r++;
        }
        
    }
    cout<<sum<<" "<<cnt; newline

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
