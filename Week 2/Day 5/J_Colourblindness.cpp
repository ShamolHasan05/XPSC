#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;
 
void solve(){
    int n;
    string s1,s2;
    cin>>n>>s1>>s2;
    int ans1=0, ans2=0;
    for(int i=0;i<s1.length();i++){
        if(s1[i] == 'B'){
            s1[i] = 'G';
        }
        if(s2[i] == 'B'){
            s2[i] = 'G';
        }
        
    }
 
    if(s1 == s2){
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