#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a = n%2;
    string s = "";
    for(int i=0; i<n/2; i++){
        if(i%2 == 1){
            s += "bb";
        }
        else{
            s += "aa";
        }
    }
    int b = (n/2)%2;
    if(n%2==1){
        if(b==1){
            s+="b";
        }
        else{
            s+="a";
        }
        
    }

    cout<<s; newline

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);


        solve();
    

    
    return 0;
}