#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

void solve(){
    int m;
    cin>>m;
    vector<int> a(m);
    for(int i=0; i<m; i++){
        cin>>a[i];
    }
    map<int, int> mp;
    for(int i=0; i<m; i++){ 
        for(int j=2; j*j<=a[i];j++){
            if(a[i]%j == 0){
                while(a[i]%j == 0){
                    mp[j]++;
                    a[i] /=j;
                }
            }
        }
        if(a[i]>1){
            mp[a[i]]++;
        }
    }


    bool ans = true;
    for(auto [x,y] : mp){
        if( y%m != 0){
            ans =false;
            break;
        }
    }
    if(ans){
        yes
    }
    else{
        no
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