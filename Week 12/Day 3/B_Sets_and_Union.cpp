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
    set<int> a[n];
    set<int> S;
    for(int i=0; i<n; i++){
        int k; cin>>k;
        for(int j=0; j<k; j++){
            int x; cin>>x;
            a[i].insert(x);
            S.insert(x);
        }
    }
    int ans=0;
    for(auto i:S){
        set<int> u;
        for(int j=0; j<n; j++){
            if(a[j].find(i)==a[j].end()){
                for(auto x:a[j]) u.insert(x);
            }
        }
        ans = max(ans,(int)u.size());
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