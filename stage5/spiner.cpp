#include <iostream>

using namespace std;

void spiner1() {
    int a, b, c;
    cin >> a >> b >> c;
    int n = 1;
    while(a+b*n <= c) {
        ++n;
    }
    cout << n - 1;
}

void spiner2(){
    int m;
    cin >> m;

    for (int x = 1; x <= m/3; ++x) {
        for (int y = 1; y <= m/4; ++y) {
            if (3*x+4*y == m) {
                cout << x << "\n" << y << "\n";
                return;
            }
        }
    }
    cout << 0 << "\n" << 0 << "\n";
}

int main() {
    spiner2();
    return 0;
}
