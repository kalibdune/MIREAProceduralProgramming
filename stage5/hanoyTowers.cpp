#include <iostream>

using namespace std;

void moveTower(int n, int from, int to, int temp) {
    if (n == 1) {
        cout << from << " => " << to << " | ";
        return;
    }

    moveTower(n - 1, from, temp, to);
    cout << from << " => " << to << " | ";
    moveTower(n - 1, temp, to, from);
}
void bash(){
    int n;
    cout << "Введите количество колец: ";
    cin >> n;
    moveTower(n, 1, 3, 2);
    cout << "\nвсего перемещений: " << (1 << n) - 1 << endl;

}
int main() {
    SetConsoleOutputCP(CP_UTF8);
    bash();
    return 0;
}