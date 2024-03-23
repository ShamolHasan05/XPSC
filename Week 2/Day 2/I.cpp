#include<bits/stdc++.h>
#define ll long long
#define newline cout<<'\n';
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int cnt = 0;

    for(int i=0;i<n-1;i++){
        if(a[i] == a[i+1]){
            cnt++;
        }
    }
    int uni = n - cnt;
    int notUni = n - uni;

    if(notUni %2 == 0){
        cout<<uni;
        newline
    }
    else{
        cout<<uni-1;
        newline
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