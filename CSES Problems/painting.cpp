// #include <bits/stdc++.h>
#include <cstdio>
#include <iostream>

using namespace std;


// brute force
int main(){
    freopen("paint.in", "r",stdin);
    freopen("paint.out", "w",stdout);
    int a, b, c, d;
    int length =0;
    cin >> a >> b >> c >> d;
    // count the length of john's painting
    for(int i = a; i<b;i++){
        length +=1;
    }

    // count the length of bessie's painting and add to total length of painted fence
    // using t to track bessie's painting
    for(int t = c; t<d;t++){
        length +=1;
        // if t (bessie's painting) overlaps (is within Johns), we must undo the addition, subtract -1.
        if(t>=a && t<b){
            length -=1;
        }
    }
    cout << length;
}