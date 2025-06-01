#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;
    int g[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> g[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << g[i][j] << "    ";
            if(j == 4) cout << endl;
        }
    }

    return 0;
}
