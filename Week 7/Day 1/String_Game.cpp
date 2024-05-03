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
    int ans = 0;

    while(!s.empty()){
        bool found = false;
        for(int i=0; i<s.length()-1; i++){
            if(s[i] != s[i+1]){
                s.erase(i, 2);
                ans++;
                found = true;
                break;
            }
        }
        if(!found)
            break;
    }

    if(ans % 2 == 1){
        cout << "Zlatan" << endl;
    }
    else{
        cout << "Ramos" << endl;
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