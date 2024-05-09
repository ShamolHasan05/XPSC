#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    bool ans = false;
    int fst = -1, lst = -1;

    for(int i=0; i<n; i++){
        if(ans){
            if(a[i]>= lst && a[i]<=fst){
                lst = a[i];
                cout<<1;
            }
            else{
                cout<<0;
            }

        }
        else{
            if(fst == -1){ 
                fst = a[i];
                lst = a[i];
                cout<<1; 
            }
            else if(a[i] >= lst){
                lst = a[i];
                cout<<1; 
            }
            else if(fst >= a[i]){
                lst = a[i];
                ans = true;
                cout<<1; 
            }
            else{
                cout<<0;
            }
            
        }
    }
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