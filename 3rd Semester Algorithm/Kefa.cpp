#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long d;
    cin >> n >> d;

    long long money[10000], frnd[10000];

    for(int i = 0; i < n; i++){
        cin >> money[i] >> frnd[i];
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(money[i] > money[j]){
                swap(money[i] , money[j]);
                swap(frnd[i] , frnd[j]);
            }
        }
    }

    long long sum = 0, ans = 0;
    int l = 0;
    
    for(int r = 0; r < n; r++){
        sum += frnd[r];

        while (money[r] - money[l] >= d){
            sum -= frnd[l];
            l++;
        }
        if(sum > ans) ans = sum;
    }
    cout << ans << endl;
    return 0;
}