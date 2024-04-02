#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

void solve(){
    string s1,s2;
    cin>>s1>>s2;
    int n1 = s1.size()-1;
    int n2 = s2.size()-1;

    if(s1[n1] < s2[n2]){
        cout<<">"; newline
    }
    else if(s1[n1] > s2[n2]){
        cout<<"<"; newline
    }

    else{
        if(s1 == s2){
            cout<<"="; newline
        }
        else if(s1[n1] == 'S'){
            if(s1 > s2){
                cout<<"<"; newline
            }
            else{
                cout<<">"; newline
            }
        }
        else if(s1 > s2){
            cout<<">"; newline
        }
        else{
            cout<<"<"; newline
        }
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