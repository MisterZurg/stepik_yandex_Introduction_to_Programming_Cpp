/*
Дан прямоугольный массив размером n×m. Поверните его на 90 градусов по часовой стрелке,
записав результат в новый массив размером m×n.

Формат входных данных
Вводятся два числа n и m, не превосходящие 100, затем массив размером n×m.
Формат выходных данных
Выведите получившийся массив. Числа при выводе разделяйте одним пробелом.

Sample Input:

3 4
11 12 13 14
21 22 23 24
31 32 33 34
Sample Output:

31 21 11
32 22 12
33 23 13
34 24 14
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // put your code here
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    vector<vector<int>> aT(m, vector<int>(n)); // Перевёрнутая матрица
    for (int i = 0; i < n; i++) { // Для столбца перевернутой      0 1 2 : 3
        for (int j = 0; j < m; j++) {                          //  0 1 2 3 : 4
            aT[j][i] = a[n - i - 1][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << aT[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}