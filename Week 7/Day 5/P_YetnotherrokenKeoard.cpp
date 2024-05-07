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
    int big =0, sm = 0;

    for(int i=n-1; i>=0; i--){
        if(s[i] == 'B'){
            big++;
        }
        else  if(s[i] == 'b'){
            sm++;
        }
        else if(s[i] >='a' &&  s[i] <= 'z' && sm>0 ){
            s[i] = 'b';
            sm--;
        }
        else if(s[i]>='A' && s[i]<='Z' && big > 0){
            s[i] = 'B';
            big--;
        }
    }
    for(int i=0; i<n; i++){
        if(s[i] != 'B' && s[i] != 'b'){
            cout<<s[i];
        }
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