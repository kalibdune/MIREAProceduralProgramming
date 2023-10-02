#include <iostream>

using namespace std;

void printArr(int *arr, int n) {
  for (int i = 0; i < n; ++i) {
    cout << arr[i] << " ";
  }
  cout << "\n";
}

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
  int arr[] = {4, 5, 6, 8, 10, 12, 1, 2, 7, 3};
  int size = sizeof(arr) / sizeof(arr[0]);
  heapSort(arr, size);
  printArr(arr, size);
}
