#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define gcd(a,b) __gcd(a, b)
#define lcm(a,b) ((a*b)/gcd(a,b))
#define newline cout<<'\n';
using namespace std;

bool prime(int n){
    if(n==1){
        return false;
    }
    for(int i=2; i*i<n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

void solve(){
    int d;
    cin>>d;
    int ans1,ans2;
    ans1 =1+d;

    while(true){
        if(prime(ans1)){
            break;
        }
        ans1++;
    }
    ans2 = ans1 + d;
    while(true){
        if(prime(ans2)){
            break;
        }
        ans2++;
    }
    cout<<ans1*ans2; newline

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