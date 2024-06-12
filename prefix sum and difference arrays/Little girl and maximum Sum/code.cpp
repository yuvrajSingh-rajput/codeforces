#include<bits/stdc++.h>
using ll = long long;
const long double pi=3.141592653589793238462;
const long long mod = 1e9+7;
using namespace std;

void solve(void){
    ll n, q;
    cin >> n >> q;
    vector<ll> arr(200001, 0);
    for(ll i = 0; i < n; i++) cin >> arr[i];
    vector<ll> prefArr(200001, 0);
    for(ll i = 0; i < q; i++){
        ll l , r;
        cin >> l >> r;
        prefArr[l - 1] += 1;
        if(r < 200001) prefArr[r] -= 1;
    }
    sort(arr.begin(), arr.begin() + n);
    for(ll i = 1; i < prefArr.size(); i++)
        prefArr[i] += prefArr[i - 1];
    sort(prefArr.begin(), prefArr.begin() + n);
    ll sum = 0;
    for(ll i = 0; i < n; i++) 
        sum += (prefArr[i] * 1LL * arr[i]);
    cout << sum << endl;
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
