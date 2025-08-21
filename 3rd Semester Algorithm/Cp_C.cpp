#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, cs = 1;
    cin >> n;
    for(int i = 0; i < n; i++){
        int upndown = 4, openclose = 3, enternexit = 5;
        int ypos, lpos, distance = 0, time = 0;
        cin >> ypos >> lpos;
        distance = abs(ypos - lpos) + ypos;

        time = distance * upndown + openclose * 3 + enternexit * 2;
        cout << "Case " << cs++ << ": " << time << endl;
    }
    return 0;
}