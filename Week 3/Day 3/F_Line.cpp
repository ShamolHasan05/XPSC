#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

void solve(){
    int n;
    string s;
    cin>>n>>s;
    vector<ll> subtr;
    ll c = 0;
    ll total = 0;

    for(int i=0;i<n;i++){
        ll L = i;
        ll R = n-i-1;
        if(s[i] == 'L'){
            if(R>L){
                subtr.push_back(R-L);
                total += R;
                c++;
            }
            else{
                total += L;
            }
        }
        else{
            if(L>R){
                subtr.push_back(L-R);
                total += L;
                c++;
            }
            else{
                total += R;
            }
        }
    }

    vector<ll> ans(n+1);
    for(int i=c;i<=n;i++){
        ans[i] = total;
    }
    sort(subtr.begin(), subtr.end(), greater<ll>());

    for(int i = c -1; i>=1; i--){
        total -= subtr.back();
        subtr.pop_back();
        ans[i] = total;
    }
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
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