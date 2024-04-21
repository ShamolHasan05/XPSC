#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    vector<int> pres(n);
    pres[0] = a[0];
    for(int i=1; i<n; i++){
        pres[i] = pres[i-1]+a[i];
    }
    int q;
    cin>>q;
    while(q--){
        int k;
        cin>>k;

        auto ans = lower_bound(pres.begin(), pres.end(),k) - pres.begin();
        cout<<ans+1; newline

    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    solve();
    

    
    return 0;
}