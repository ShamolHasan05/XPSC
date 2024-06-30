#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define gcd(a,b) __gcd(a, b)
#define lcm(a,b) ((a*b)/gcd(a,b))
#define newline cout<<'\n';
using namespace std;

void solve(){
    ll x,y,k;
	cin>>x>>y>>k;
	while(k!=0){
		if(x<y&&x+k>=y){
			ll temp=y-x;
			k-=temp;
			x=1;
			x+=k%(y-1);
			break;
		}
		ll temp=x%y;
		if(k<y-temp){
			x+=k;
			break;
		}
		k-=(y-temp);
		x+=(y-temp);
		while(x%y==0){
			x/=y;
		}
	}
	cout<<x; newline

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