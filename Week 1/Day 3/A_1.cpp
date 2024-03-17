#include<bits/stdc++.h>
#define ll long long
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    int a[n],b[m];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }

    vector<int> v;

    for(int i=0;i<n;i++){
        v.push_back(a[i]);
    }
    for(int i=0;i<m;i++){
        v.push_back(b[i]);
    }

    sort(v.begin(),v.end());

    for(int val:v){
        cout<<val<<" ";
    }
    cout<<'\n';

    
    return 0;
}