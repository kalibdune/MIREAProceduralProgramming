#include <iostream>

using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");
  
  bool day, lamp, curtians;

  cout << "Введите 1 и 0 для дня, шторы и лампы через пробел\n";
  cin >> day >> lamp >> curtians;

  if ((day && curtians) || lamp) {
    cout << "Светло\n";
  } else {
    cout << "темно\n";
  }
}