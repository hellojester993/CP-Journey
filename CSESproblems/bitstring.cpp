#include <iostream>


using namespace std;


int main(){
    long long n;
    cin >> n; 
    // mod around the number 1,000,000,007
    // therefore, we want our datatype to handle that range.
    long long mod = 1e9 + 7;
    long long base = 1;

    // number of ways is 2 x itself n times. loop for n times
    for (int i = 1; i<=n; i++){

        // watchout for overflow. how big will my variable get?
        // n <= (10^6). 2^(10^6) is crazily large which explains why the question mentions to 
        // have the answer in modulo 1e9 + 7.
        // Since we mod our numbers. It will never exceed 1e9 + 6. 
        // int max range is 2* 10^9. Therefore, we should use long long which holds up to 9.2 10^18. 
        base = (base % mod) * 2;
        // note: overflow occurs during operation. So it can overflow before you get the chance to modulo.
        // therefore, important to modulo before performing the operation. ex. ((a % mod) * (b % mod)) % mod.
        base = base % mod;
    }
    cout << base;
}