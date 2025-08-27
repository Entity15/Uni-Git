#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n; 

        int start[10000], endt[10000];
        for(int i = 0; i < n; i++){
            cin >> start[i] >> endt[i];
        }

        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                if(endt[i] > endt[j]){
                    swap(endt[i], endt[j]);
                    swap(start[i], start[j]);
                }
            }
        }
        int count = 0;
        int last_end = -1;

        for(int i = 0; i < n; i++){
            if(start[i] >= last_end){
                count++;
                last_end = endt[i];
            }
        }
        cout << count << endl;
    }
    return 0;
}