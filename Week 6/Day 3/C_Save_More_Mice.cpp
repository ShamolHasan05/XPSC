#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> a(k);
    for(int i=0; i<k; i++){
        cin>>a[i];
    }
    
    sort(a.begin(), a.end());
    int ans = 0, sum = 0;
    for(int i=k-1; i>=0; i--){
        sum += (n - a[i]);
        if(sum < n){
            ans++;
        }
        else{
            break;
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