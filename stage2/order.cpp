#include <clocale>
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите произвольное натуральное число\n";
    cin >> n;

    for (int i = 0; i < 10; ++i) {
        n += 1;
        cout << n << "\n";
    }
}