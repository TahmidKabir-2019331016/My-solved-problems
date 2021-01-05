#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define lin "\n"
#define mx 100005

void solve(){
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll ones = 0, twos = 0;
    for (int i = 0; i < n ;++i){
        cin >> v[i];
        if(v[i] == 1){
            ones++;
        } else{
            twos++;
        }
    }

    if(ones == 0 || twos == 0){
        if(n & 1){
            cout << "NO" << lin;
            return;
        }
        cout << "YES" << lin;
        return;
    }
    
    if(ones == 2 * twos){
        cout << "YES" << lin;
        return;
    }
    cout << "NO" << lin;
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}