#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

void solve(){
    int n;
    cin>>n;
    int ans = 0;
    if(n%2 == 0){
        cout<<n/2; newline
        for(int i=0; i<n/2; i++){
            cout<<2<<" ";
        }
        newline
    }
    else{
        cout<<n/2; newline
        for(int i=0; i<n/2-1; i++){
            cout<<2<<" ";
        }
        cout<<3; newline
    }
    

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
        solve();
    

    
    return 0;
}