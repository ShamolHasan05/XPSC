#include<bits/stdc++.h>
#define ll long long
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,s;
    cin>>n>>s;
    int ans = 0;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(s-i-j >= 0 && s-i-j<=n){
                ans +=1;
            }
        }
    }

    cout<<ans<<endl;
    

    
    return 0;
}