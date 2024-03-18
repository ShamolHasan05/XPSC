
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);


int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}


vector<long long> printFirstNegativeInteger(long long int arr[],
long long int n, long long int k) {
    vector<long long> v;
    queue<long long> q; 
    
    long long l = 0, r = 0;
    while (r < n) {
        if (arr[r] < 0){
            q.push(r);
        }
        if (r - l + 1 < k) {
            r++;
        }
        else if (r - l + 1 == k) { 
            if (q.empty()){
                v.push_back(0);
            }
            
            else {
                while (!q.empty() && q.front() < l){
                    q.pop();
                }
                if (q.empty()){
                    v.push_back(0);
                }
                else{
                    v.push_back(arr[q.front()]);
                }
            }

            l++;
            r++;
        }
    }
    return v;
}