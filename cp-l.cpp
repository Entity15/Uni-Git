#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> L;
    unordered_map<int, int> f;

    int n;
    while (cin >> n){
        f[n]++;
        if(f[n] == 1){
            L.push_back(n);
        }
    }

    for(int i = 0; i < L.size(); ++i){
        cout << L[i] << " " << f[L[i]] << endl;
    }

    return 0;
}