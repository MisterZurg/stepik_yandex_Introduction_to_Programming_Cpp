/*
Дан двумерный массив размером n×m (n и m не превосходят 1000).
Симметричный ему относительно главной диагонали массив называется транспонированным к данному.
Он имеет размеры m×n: строки исходного массива становятся столбцами транспонированного,
столбцы исходного массива становятся строками транспонированного.

Для данного массива постройте транспонированный массив и выведите его на экран.
Sample Input:

3 4
11 12 13 14
21 22 23 24
31 32 33 34
Sample Output:

11 21 31
12 22 32
13 23 33
14 24 34
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
    vector<vector<int>> aT(m, vector<int>(n)); // Транспанированная матрица
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            aT[i][j] = a[j][i];
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