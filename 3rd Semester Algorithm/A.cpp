#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int test_case = 1;
    while(1){
        int stack;
        cin >> stack;
        if(stack == 0) break;
        int x, total, height, moves, num[stack];
        for(int i = 0; i < stack; i++){
            cin >> x;
            num[i] = x;
            total += x;
        }
        height = total / stack;
        for(int i = 0; i < stack; i++){
            if(num[i] > height || num[i] < height){
                moves += abs(num[i] - height);
            }
        }
        cout << "Set #" << test_case++ << endl << "The minimum number of moves is " << moves / 2 << "." << endl << endl;
        total = 0;
    }
    return 0;
}