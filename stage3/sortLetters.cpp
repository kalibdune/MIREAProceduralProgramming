#include <algorithm> 
#include <fstream> 
#include <iostream> 
#include <string> 
#include <vector> 
 
using namespace std; 
 
void heapSort(int arr[], int n) 
{ 
    // Convert array to vector 
    vector<int> v(arr, arr + n); 
 
    // Convert vector to Max Heap 
    make_heap(v.begin(), v.end()); 
 
    // Sort Max Heap 
    sort_heap(v.begin(), v.end()); 
 
    // Copy sorted vector back to array 
    copy(v.begin(), v.end(), arr); 
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
  //тупое преобразование из строки в масив 
  int arr[line.size()]; 
  int n = output.size() - 1; 
  for (int i = 0; i < n; ++i){ 
    arr[i] = (int)output[i]; 
  } 
 
  heapSort(arr, output.size()); 
  for (int i = 0; i < n; ++i) { 
    cout << (char)arr[i]; 
  } 
}