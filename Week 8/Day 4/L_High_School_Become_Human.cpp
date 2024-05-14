#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define gcd(a,b) __gcd(a, b)
#define lcm(a,b) ((a*b)/gcd(a,b))
#define newline cout<<'\n';
using namespace std;

void solve(){
    double x,y;
    cin>>x>>y;
    double a = y*log(x);
    double b = x*log(y);
    if(a==b){
        cout<<"="; newline
    }
    else if(a>b){
        cout<<">"; newline
    }
    else{
        cout<<"<"; newline
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);


        solve();
    

    
    return 0;
}