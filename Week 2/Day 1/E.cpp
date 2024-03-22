#include<bits/stdc++.h>
#define ll long long
#define newline cout<<'\n';
using namespace std;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a+b == c){
        cout<<"+";
        newline
    }
    else{
        cout<<"-";
        newline
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