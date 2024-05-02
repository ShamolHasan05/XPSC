#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

void solve(){
    string t;
    string p;
    cin>>t;
    cin>>p;
    int n = t.size(), m = p.size(); 
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    auto ok = [&](int mid){
        vector<bool> bad(n+1);
        for(int i=0; i<mid; i++){
            bad[a[i]] = true;
        }
        int j = 0;
        bool found = false;
        for(int i=0; i<n; i++){
            if(t[i] == p[j] && !bad[i+1]){
                j++;
            }
            if(j==m){
                found = true;
                break;
            }
        }
        return found;
    };

    int l=0, r = n, mid, ans=0;
    while(l<=r){
        mid = l + (r-l)/2;
        if(ok(mid)){
            ans = mid;
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    cout<<ans;
    newline;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
        solve();
    
    return 0;
}
