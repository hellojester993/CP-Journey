#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll moves = 0;

    for(ll i = 0; i < n; i++){
        ll x;
        cin >> x;
        arr[i] = x;
    }


    for(ll i = 1; i < arr.size(); i++){
        if(arr[i] < arr[i-1]){
            moves += arr[i-1] - arr[i];
            arr[i] = arr[i-1]; // forgot to update the array.
        }
    }

    cout << moves;
}