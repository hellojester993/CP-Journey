#include <bits/stdc++.h>

using namespace std;
struct knight {
    int row;
    int col;
};



bool attack(knight k1, knight k2, int k2Row, int k2Col){
    int rowDifference = k2Row - k1.row;
    int colDifference = k2Col - k1.col;

    rowDifference = abs(rowDifference);
    colDifference = abs(colDifference);


    if(rowDifference == 2){
        if(colDifference == 1){

            return true;
        } else {

            return false;}

    }else if(rowDifference == 1){
        if(colDifference == 2){


            return true;
        }else {

            return false;}
    }else{

        return false;
    }
    
};

void check(int n, knight k1, knight k2, int &count){

    // i and j are the position of knight 2
    int k2col = k2.col;
    for(int i = k2.row;i<=n;i++){
        
        for(int j=k2col;j<=n;j++){
            bool valid = attack(k1,k2,i,j);
            if(valid == false){
                count += 1;
            }

        }
        k2col = 1;

    }
};

void doIt(int t){
    // number of ways to arrange n x n board.
    // k1 starts at 1,1
    // k2 starts at 1,2

    int n = t;
    knight k1;
    k1.row =1;
    k1.col =1;

    knight k2;
    k2.row =1;
    k2.col =2;

    int count = 0;

    while(((k1.row <=n) == (k1.col <=n))){
        check(n,k1,k2,count);
        if(k1.col == n){
            k1.col = 1;
            k1.row +=1;
        }else{
            k1.col += 1;
        }

        if(k2.col ==n){
            k2.col =1;
            k2.row += 1;
        }else{
            k2.col += 1;
        }
    }
    
    cout << count;
    
}

int main(){
    int n;
    cin >> n;

    for(int t = 1; t<=n;t++){
        doIt(t);
        cout <<endl;
    }
}