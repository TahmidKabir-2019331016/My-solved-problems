#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;

#define ll long long 
#define lin "\n"
#define mx 100005
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define eps 0.0000000000001
#define inf 10000000
#define pd pair<__int64, __int64>
#define pb push_back
void solve(){
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v(n);
    for (int i = 0; i < n; ++i){
        cin >> v[i].first >> v[i].second;
    }
    vector<pair<ll, ll>> m;
    for (int i = 0; i < n; ++i){
        for (int j = i + 1; j < n; ++j){
            ll x = v[i].first + v[j].first;
            ll y = v[j].second + v[i].second;
            m.pb({x, y});
        }
    }
    ll ans = 0;
    sort(m.begin(), m.end());
    ll cnt = 0;
    for (int i = 1; i < m.size(); ++i){
        if(m[i].first == m[i - 1].first && m[i].second == m[i - 1].second){
            cnt++;
        } else{
            ans += (cnt * (cnt + 1)) / 2;
            cnt = 0;
        }
    }
    cout << ans << lin;
}

int main(){
    fast;
    int t = 1;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cin >> t;
    int c = 1;
    while(t--){
        cout << "Case " << c++ << ": ";
        solve();
    }
}