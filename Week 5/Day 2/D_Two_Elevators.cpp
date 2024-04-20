#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;

    int ans1 = abs(a-1);
    int ans2 = abs(b-c) + (c-1);
    
    if(ans1 == ans2){
        cout<<3; newline
    }
    else if(ans1>ans2){
        cout<<2; newline
    }
    else{
        cout<<1; newline
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