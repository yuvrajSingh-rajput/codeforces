#include<bits/stdc++.h>
using ll = long long;
const long double pi=3.141592653589793238462;
const long long mod = 1e9+7;
using namespace std;

void solve() {
    ll n, k, q;
    cin >> n >> k >> q;

    const ll MAX_SIZE = 200001;
    vector<ll> arr(MAX_SIZE, 0);

    for (ll i = 0; i < n; ++i) {
        ll l, r;
        cin >> l >> r;
        arr[l] += 1;
        if (r + 1 < MAX_SIZE) arr[r + 1] -= 1;
    }

    vector<ll> temp(MAX_SIZE, 0);
    for (ll i = 1; i < MAX_SIZE; ++i) {
        arr[i] += arr[i - 1];
        if (arr[i] >= k) temp[i] = 1;
    }

    for (ll i = 1; i < MAX_SIZE; ++i) {
        temp[i] += temp[i - 1];
    }

    for (ll i = 0; i < q; ++i) {
        ll l, r;
        cin >> l >> r;
        cout << temp[r] - temp[l - 1] << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    #ifndef YUVRAJ_SINGH_RAJPUT_DEBUG
    cin.tie(nullptr);
    #endif

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
        solve();
    return 0;
}