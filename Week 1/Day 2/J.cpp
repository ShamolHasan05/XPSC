#include<bits/stdc++.h>
using namespace std;
int dp[10001];

bool ans(int a, int b, int c, int d){
    if(d==c){
        return true;
    }
    if(d>c){
        return false;
    }
    if(dp[d] != -1){
        return dp[d];
    }

    bool op1 = ans(a,b,c, d+a);
    bool op2 = ans(a,b,c, d+b);
    return dp[d] = op1 || op2;

}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    memset(dp,-1,sizeof(dp));

    if(ans(a, b, c, 0)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    
    return 0;
}