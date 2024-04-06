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
    int XOR = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        XOR ^=a[i];
    }
    for(int i=0;i<n;i++){
        a[i] ^=XOR;
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        ans ^=a[i];
    }
    if(ans==0){
        cout<<XOR; newline
    }
    else{
        cout<<-1; newline
    }


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