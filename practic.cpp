#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

void name()
{ cout << "Дмитрий\n";
}


void arif()
{
    int a, b;
    cout << "Введите два числа a & b через пробел\n";
    cin >> a >> b;
    
    cout << a+b << "\n" << a-b << "\n" << a*b << "\n";
    if ( b == 0) {
        cout << "на ноль делить нельзя" << "\n";
    } else {
        cout << a*1.0 / b << "\n";
    }
}

void equation()
{
    double c, b;
    cout << "Введите коэфиценты b, c через пробел\n";
    cin >> b >> c;
    if (b == 0) {
        cout << "на ноль делить нельзя\n";
    } else if (c == 0) {
        cout << "Решение любое\n";
    } else {
        cout << -(c/b) << "\n";
    }
}

void newEquation()
{
    double a, b, c, D;
    cout << "Введите коэфиценты a, b, c через пробел\n";
    cin >> a >> b >> c;
    
    if (a == 0) {
        if (b == 0) {
            cout << "на ноль делить нельзя\n";
        } else if (c == 0) {
            cout << "Решение любое\n";
        } else {
            cout << -(c/b) << "\n";
        }
    }
    
    D = b*b - 4*a*c;
    //cout << D << "\n";
    if (D < 0) {
        cout << "нет решения\n";
    } else if (D==0) {
        if (a != 0) {
            cout << -(b/(2*a)) << "\n";
        }
    } else {
        double x1, x2;
        if (a != 0) {
            x1 = (-b + sqrt(D))/(2*a);
            x2 = (-b - sqrt(D))/(2*a);
            cout << "первый корень: " << x1 << "\n" << "второй корень: " << x2 << "\n";
        }
    }
}

void lamp()
{
    bool day, lamp, curtians;
    
    cout << "Введите 1 и 0 для дня, шторы и лампы через пробел\n";
    cin >> day >> lamp >> curtians;
    
    if ((day && curtians) || lamp) {
        cout << "Светло\n";
    } else {
        cout << "темно\n";
    }
}

void conus()
{
    double h, R, r;
    cout << "Введите h, R, r через пробел\n";
    cin >> h >> R >> r;
    double V = 1.0/3*M_PI*h*(R*R+R*r+r*r);
    double l = sqrt(h * h + (R-r)*(R-r));
    double S = M_PI*(R*R+l*(r+R)+r*r);
    cout << "V=" << V << "\nS=" << S << "\n";
}

void branching()
{
    double x, a, w = 0.0;
    cout << "Введите x, a через пробел\n";
    cin >> x >> a;
    if (abs(x) < 1 && x != 0) {
        w = a * log(abs(x));
    } else if (abs(x) >= 1) {
        if (a - x*x >= 0) {
            w = sqrt(a-x*x);
        } else {
            cout << "выходит за область определения\n";
        }

    } else {
        cout << "выходит за область определения\n";
    }
    cout << w << "\n";
}

int main()
{
    setlocale(LC_ALL, "Russian");
    //stage 1
    //name();
    //arif();
    //equation();
    //newEquation();
    //lamp();
    //stage 2
    //conus();
    //branching();
    
}
