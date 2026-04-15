#include <bits/stdc++.h>
#include <vector>
using namespace std;
using ll = long long;

int main(){

    int test;
    cin >> test;


    for(int i = 0;i<test;i++){
        ll row, col;
        cin >> row >> col;
        // using anchor points, the infinite spiral expands outwards +1 until completing the square.
        // depending on if its odd or even, the beginning point of the layer cycles between odd and even. 
        // odd col is odd squares ex, 1,9,25,...
        // even row is even squares ex, 4,16, ...
        ll layer = max(row,col);
        ll output;
        if (layer % 2 == 0){
            if(row >= col){
                output = (layer * layer) - (col - 1);
                cout << output << endl;
            }else{
                ll midpoint = (layer * layer) - (col - 1);
                output = midpoint - (col - row);
                cout << output << endl;
            }
        }else{
            if(col >= row){
                output = (layer * layer) - (row - 1);
                cout << output << endl;
            }else{
                ll midpoint = (layer * layer) - (row - 1);
                output = midpoint - (layer - col);
                cout << output << endl;
            }
        }
    }

}