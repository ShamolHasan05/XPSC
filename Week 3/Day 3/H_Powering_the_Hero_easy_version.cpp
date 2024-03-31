#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll ans = 0;
    priority_queue<ll> pq;

    for(int i=0;i<n;i++){
        if(a[i] == 0){
            if(!pq.empty()){
                ans += pq.top();
                pq.pop();
            }
        }
        else{
            pq.push(a[i]);
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