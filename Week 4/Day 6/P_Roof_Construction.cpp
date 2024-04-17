#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    int a = log2(n-1);
    for(int i=n-1; i>=(1<<a); i--){
        cout<<i<<" ";
    }
    for(int i=0; i<(1<<a); i++){
        cout<<i<<" ";
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