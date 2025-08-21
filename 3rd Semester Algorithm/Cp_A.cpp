#include<iostream>
#include<cstdlib>
using namespace std;

const int MAX_STACK = 50;

int main() {
    int test_case = 1;
    int stack;
    while(1) {
        cin >> stack;
        if(stack == 0) break;
        
        int total = 0;
        int moves = 0;
        int num[MAX_STACK];
        

        for(int i = 0; i < stack; i++) {
            cin >> num[i];
            total += num[i];
        }
        
        int height = total / stack;
        
        for(int i = 0; i < stack; i++) {
            moves += abs(num[i] - height);
        }
        
        cout << "Set #" << test_case++ << endl;
        cout << "The minimum number of moves is " << moves / 2 << "." << endl;
    }
    return 0;
}