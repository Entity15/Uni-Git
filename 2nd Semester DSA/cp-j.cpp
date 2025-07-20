#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int cas = 1; cas <= T; cas++) {
        int n, m;
        cin >> n >> m;
        vector<int> arr(n);
        int head = -1, tail = -1;
        int count = 0;

        cout << "Case " << cas << ":" << endl;

        for (int i = 0; i < m; i++) {
            string command;
            cin >> command;

            if (command == "pushLeft") {
                int x;
                cin >> x;
                if (count == n) {
                    cout << "The queue is full" << endl;
                } else {
                    if (count == 0) {
                        head = 0;
                        tail = 0;
                    } else {
                        head = (head - 1 + n) % n;
                    }
                    arr[head] = x;
                    count++;
                    cout << "Pushed in left: " << x << endl;
                }
            } else if (command == "pushRight") {
                int x;
                cin >> x;
                if (count == n) {
                    cout << "The queue is full" << endl;
                } else {
                    if (count == 0) {
                        head = 0;
                        tail = 0;
                    } else {
                        tail = (tail + 1) % n;
                    }
                    arr[tail] = x;
                    count++;
                    cout << "Pushed in right: " << x << endl;
                }
            } else if (command == "popLeft") {
                if (count == 0) {
                    cout << "The queue is empty" << endl;
                } else {
                    int x = arr[head];
                    if (count == 1) {
                        head = -1;
                        tail = -1;
                    } else {
                        head = (head + 1) % n;
                    }
                    count--;
                    cout << "Popped from left: " << x << endl;
                }
            } else if (command == "popRight") {
                if (count == 0) {
                    cout << "The queue is empty" << endl;
                } else {
                    int x = arr[tail];
                    if (count == 1) {
                        head = -1;
                        tail = -1;
                    } else {
                        tail = (tail - 1 + n) % n;
                    }
                    count--;
                    cout << "Popped from right: " << x << endl;
                }
            }
        }
    }
    return 0;
}