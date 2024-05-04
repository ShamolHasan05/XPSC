#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

void solve(){
    string s;
    cin>>s;
    int n = s.length();
    int one = 0, zr = 0;
    for(int i=0; i<n; i++){
        if(s[i] == '1'){
            one++;
        }
        else{
            zr++;
        }
    }
    for(int i=0; i<n; i++){
        if(s[i] == '1'){
            if(zr==0){
                break;
            }
            else{
                zr--;
            }
        }
        else{
            if(one == 0){
                break;
            }
            else{
                one--;
            }
        }
    }
    cout<<one+zr; newline

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