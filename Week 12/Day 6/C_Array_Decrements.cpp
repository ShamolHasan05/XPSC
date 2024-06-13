#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    int mind=INT_MAX, maxd=INT_MIN, zd = 0, zero = 0;
    bool ans = true;

    for(int i=0; i<n; i++){
        if(b[i] > a[i]){
            ans = false;
            break;
        }
        if(b[i] == 0){
            zd = max(a[i],zd);
            zero++;
        }
        else{
            mind = min(mind,a[i]-b[i]);
            maxd = max(maxd,a[i] - b[i]);
        }
    }

    if(ans == false){
        // cout<<"NO1"; newline
        no
    }
    else if(n == zero){
        yes
    }
    else{
        if(mind == maxd && maxd>=zd){
            yes
        }
        else{
            // cout<<"NO"<<" "<<maxd<<" "<<mind<<" "<<zd; newline
            no
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