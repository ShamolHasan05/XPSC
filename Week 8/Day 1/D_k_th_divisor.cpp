#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

void solve(){
    ll n, k;
    cin>>n>>k;
    vector<ll> a;
    for(ll i=1; i*i<=n; i++){
        if(n%i == 0){
            a.push_back(i);
            if((n/i) != i){
                a.push_back((n/i));
            }
        }
    }
    
    sort(a.begin(), a.end());
    ll n1 = a.size();
    if(k<=n1){
        cout<<a[k-1]; newline
    }
    else{
        cout<<-1; newline
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    solve();
    

    
    return 0;
}