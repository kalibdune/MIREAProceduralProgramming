#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
  ofstream file;
  file.open("phone.txt");

  if (file.is_open()) {
    file << "Лолов +7(999) 999 99-99\nВладков +7(998) 998 98-98\nСырников "
            "+7(997) 997 97-97\nЛолов +7(996) 996 96-96";
    file.close();
  }

  string surname;
  cout << "enter surname\n";
  cin >> surname;

  ifstream file2;
  file2.open("phone.txt");

  string arr[10];
  int i = 0;

  if (file2.is_open()) {
    string buffer;

    while (!file2.eof()) {
      getline(file2, buffer);
      arr[i] = buffer;

      if (buffer.find(surname) != -1) {
        cout << buffer << "\n";
      }

      ++i;
    }

    file2.close();
  }

  file.open("sorted.txt");

  if (file.is_open()) {
    sort(arr, arr + i + 1);
    for (string let : arr) {
      file << let << "\n";
    }
    file.close();
    cout << "done\n";
  }
}