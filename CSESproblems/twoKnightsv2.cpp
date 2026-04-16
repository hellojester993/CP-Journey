#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){

    ll n;
    cin >> n;
    for (ll i = 1;i<=n;i++){
        //using combinatorics 
        // number of ways you can arrange 2 knights on board n x n 
        ll numCells = i*i;
        // divide 2 from double counting k1 k2 == k2 k1
        ll ways = (numCells * (numCells -1)) /2;

        ll waystoAttack = 4*(i-1)*(i-2);

        cout << ways - waystoAttack << endl;

    }

}