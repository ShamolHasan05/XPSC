#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define gcd(a,b) __gcd(a, b)
#define lcm(a,b) ((a*b)/gcd(a,b))
#define newline cout<<'\n';
using namespace std;

void solve(){
    string a,b;
    cin>>a>>b;

    int n1 = a.size(),n2 = b.size();
    int ans = n1 + n2;

    for(int st=0;st<n2;st++){
        int pt=st;
        for(int i=0;i<n1;i++){
            if(a[i]==b[pt] && pt<n2) pt++;
        }
        ans=min(ans,n1+n2-pt+st);
       }
    
    cout<<ans; newline

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