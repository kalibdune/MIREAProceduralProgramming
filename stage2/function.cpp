#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    double x, y, b;
    cout << "Введите x, y, b через пробел\n";
    cin >> x >> y >> b;
    if (b-y > 0 && b-x >= 0) {
        cout << "z=" << log(b-y)*sqrt(b-x) << "\n";
    } else {
        cout << "выходит за ОДЗ\n"; 
    }
}