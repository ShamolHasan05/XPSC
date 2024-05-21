#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define gcd(a,b) __gcd(a, b)
#define lcm(a,b) ((a*b)/gcd(a,b))
#define newline cout<<'\n';
using namespace std;

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {   
        int x;
        cin >> x;
        a[i] = {x, i + 1};
    }
    sort(a.begin(), a.end());

    for(int i=0; i<n; i++){
        int l = i+1, r = n-1;
        while(l<r){
            ll k2 = a[l].first + a[r].first + a[i].first;
            if(k == k2){
                cout<<a[r].second<<" "<<a[l].second<<" "<<a[i].second; newline
                return;
            }
            else if(k2>k){
                r--;
            }
            else{
                l++;
            }
        }
    }

    cout<<"IMPOSSIBLE"; newline

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);


        solve();


    
    return 0;
}