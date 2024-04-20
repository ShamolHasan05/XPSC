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
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int q;
    cin>>q;
    while(q--){
        int k;
        cin>>k;
        
        auto ans = upper_bound(a.begin(), a.end(),k) - a.begin();

        cout<<ans;
        newline
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    
    
    return 0;
}