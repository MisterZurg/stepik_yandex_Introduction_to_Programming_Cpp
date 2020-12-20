/*
Дан двумерный массив и два числа: i и j. Поменяйте в массиве столбцы с номерами i и j
Формат входных данных
Программа получает на вход размеры массива n и m, не превосходящие 100,
затем элементы массива, затем числа i и j.
Формат выходных данных
Выведите результат.

Sample Input:

3 4
11 12 13 14
21 22 23 24
31 32 33 34
0 1
Sample Output:

12 11 13 14
22 21 23 24
32 31 33 34
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
            int elem;
            cin >> elem;
            a[i][j] = elem;
        }
    }
    int ch_n_1, ch_n_2;
    cin >> ch_n_1 >> ch_n_2; // Numbers of columns 2 swap
    for (int i = 0; i < n; i++) {
        int tmp;
        tmp = a[i][ch_n_1];
        a[i][ch_n_1] = a[i][ch_n_2];
        a[i][ch_n_2] = tmp;
    }
    // Output:
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}