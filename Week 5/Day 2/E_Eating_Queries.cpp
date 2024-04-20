#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

void solve(){
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    vector<ll> pres(n);
    pres[0] = a[0];
    for(int i = 1; i < n; i++){
        pres[i] = pres[i - 1] + a[i];
    }

    while(q--){
        int x;
        cin >> x;
        auto it = lower_bound(pres.begin(), pres.end(), x);
        if(it != pres.end()){ 
            int ans = it - pres.begin() + 1; 
            cout << ans; newline
        }
        else{
            cout <<"-1"; newline
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}
