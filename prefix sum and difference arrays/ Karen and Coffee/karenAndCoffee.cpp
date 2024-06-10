#include<bits/stdc++.h>
using ll = long long;
const long double pi=3.141592653589793238462;
const long long mod = 1e9+7;
using namespace std;

void solve() {
    ll n, k, q;
    cin >> n >> k >> q;

    // Define the maximum size for the arrays
    const ll MAX_SIZE = 200001;

    // Initialize the difference array with zeros
    vector<ll> arr(MAX_SIZE, 0);

    // Read the ranges and update the difference array
    for (ll i = 0; i < n; ++i) {
        ll l, r;
        cin >> l >> r;
        // Increment the start of the range
        arr[l] += 1;
        // Decrement the position right after the end of the range
        if (r + 1 < MAX_SIZE) arr[r + 1] -= 1;
    }

    // Initialize the temp array to store the count of valid segments
    vector<ll> temp(MAX_SIZE, 0);

    // Compute the prefix sum for the arr array and update temp array
    for (ll i = 1; i < MAX_SIZE; ++i) {
        // Update arr[i] to be the prefix sum up to i
        arr[i] += arr[i - 1];
        // Mark positions where the count is at least k
        if (arr[i] >= k) temp[i] = 1;
    }

    // Compute the prefix sum for the temp array to enable range queries
    for (ll i = 1; i < MAX_SIZE; ++i) {
        // Update temp[i] to be the prefix sum up to i
        temp[i] += temp[i - 1];
    }

    // Process each query
    for (ll i = 0; i < q; ++i) {
        ll l, r;
        cin >> l >> r;
        // Output the number of valid segments in the range [l, r]
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
