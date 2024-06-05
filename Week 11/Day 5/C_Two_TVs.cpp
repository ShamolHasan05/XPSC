#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define gcd(a,b) __gcd(a, b)
#define lcm(a,b) ((a*b)/gcd(a,b))
#define newline cout<<'\n';
using namespace std;

void solve(){
    int n;
    cin>>n;
    map<int, int> d;
    for(int i=1; i<=n; i++){
        int l,r;
        cin>>l>>r;
        d[l]++;
        d[r+1]--;
    }

    int sum =0;
    bool ok = true;
    for(auto [id , val] : d){
        sum += val;
        if(sum > 2){
            ok = false;
            break;
        }
    }
    if(ok){
        yes
    }
    else{
        no
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
        solve();
    

    
    return 0;
}
