#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

bool palindrome(vector<int> &a){
    int l = 0;
    int r = a.size()-1;
    while(l<r){
        if(a[l] != a[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}

bool solve2(vector<int> &a){
    int x,y;
    int l = 0, r = a.size()-1;
    
    while(l<r){
        if(a[l] != a[r]){
            x = a[l];
            y = a[r];
            break;
        }
        l++;
        r--;
    }

    vector<int> v1;
    vector<int> v2;

    for(int i=0;i<a.size();i++){
        if(a[i] != x){
            v1.push_back(a[i]);
        }
    }
    for(int i=0;i<a.size();i++){
        if(a[i] != y){
            v2.push_back(a[i]);
        }
    }
    bool ans1 = palindrome(v1);
    bool ans2 = palindrome(v2);
    return ans1 || ans2;

}

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    if(palindrome(a)){
        yes
    }
    else{
        if(solve2(a)){
            yes
        }
        else{
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