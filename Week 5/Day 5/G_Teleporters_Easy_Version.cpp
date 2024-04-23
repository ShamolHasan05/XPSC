#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

void solve(){
    ll n,c;
    cin>>n>>c;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
        a[i] += i+1;
    }
    ll sum = 0;
    ll ans = 0;
    sort(a.begin(),a.end());
    for(int i=0; i<n; i++){
        if(sum+a[i]>c){
            break;
        }
        sum+= a[i];
        ans++;
    }
    cout<<ans;
    newline

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