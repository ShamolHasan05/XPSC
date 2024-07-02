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
    vector<int> a;
    map<int,int>mp;

    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        int dig = x%10;
        if(mp[dig] <3){
            a.push_back(dig);
        }
        mp[dig]++;
    }
    string ans = "NO";
    int s = a.size();
    for(int i = 0; i < s; i++){
        for(int j = i+1; j < s; j++){
            for(int k = j+1; k < s;k++){
                if((a[i]+a[j]+a[k])%10 == 3){
                ans = "YES";
                break;
                }
            }
        }
    }

    cout<<ans;
    newline

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