#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void shiftDown(int *heap, int i, int size) {
  int maxI = i;
  int value = heap[i];
  while (true) {
    i = maxI;

    int childL = i * 2 + 1;
    if ((childL < size) && (heap[childL] > value)) {
      maxI = childL;
    }

    int childR = childL + 1;

    if ((childR < size) && (heap[childR] > heap[maxI])) {
      maxI = childR;
    }
    if (maxI == i)
      break;

    heap[i] = heap[maxI];
    heap[maxI] = value;
  }
}

void heapSort(int *heap, int size) {
  // постройка пирамиды
  for (int i = size / 2 - 1; i >= 0;
       --i) // с конца т.к происеивание идёт снизу вверх
    shiftDown(heap, i, size);

  while (size > 0) {
    --size;
    int tmp = heap[size];
    heap[size] = heap[0];
    heap[0] = tmp;

    shiftDown(heap, 0, size);
  }
}

int main() {
  string line = "nivmxarosbehtqpfywkdjuclg";

  ofstream file;
  file.open("sort.txt", ios::out);
  if (file) {
    file << line;
    cout << "writing complete!\n";
  } else {
    cout << "err\n";
  }
  file.close();

  string output;
  ifstream file2;
  file2.open("sort.txt", ios::in);

  if (file2) {
    getline(file2, output);
    cout << "reading complete!\n";
  } else {
    cout << "err\n";
  }

  file2.close();
  // тупое преобразование из строки в масив
  int arr[line.size()];
  int n = output.size() - 1;
  for (int i = 0; i < n; ++i) {
    arr[i] = (int)output[i];
  }

  heapSort(arr, output.size());
  for (int i = 0; i < n; ++i) {
    cout << (char)arr[i];
  }
}