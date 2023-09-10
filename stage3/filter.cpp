#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string line = "PKmxXtOIQTOTqNw4l37oonQRoxBvd3IJ3tFSWzhkYYY8k950237A9wcq9t9vyH"
                "xaopa42wpreTpbL9O2NAoKxXM4xrZTVrrWedSJ";

  ofstream file;
  file.open("filter.txt", ios::out);
  if (file) {
    file << line;
    cout << "writing complete!\n";
  } else {
    cout << "err\n";
  }
  file.close();

  string output;
  ifstream file2;
  file2.open("filter.txt", ios::in);

  if (file2) {
    getline(file2, output);
    cout << "reading complete!\n";
  } else {
    cout << "err\n";
  }

  file2.close();

  for (char let : output) {
    if (isdigit(let)) {
      cout << let;
    }
  }
  cout << "\n";
}