/*
Найдите индексы первого вхождения максимального элемента.

Формат входных данных
Программа получает на вход размеры массива n и m,
затем n строк по m чисел в каждой. n и m не превышают 100.

Формат выходных данных
Выведите два числа: номер строки и номер столбца,
в которых стоит наибольший элемент в двумерном массиве.
Если таких элементов несколько, то выводится тот, у которого меньше номер строки,
а если номера строк равны то тот, у которого меньше номер столбца.

Sample Input:

3 4
0 3 2 4
2 3 5 5
5 1 2 3
Sample Output:

1 2
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // put your code here
    int n, m, maxxelem, maxi, maxj;
    bool token = true;
    cin >> n >> m; // Размерность вектора n : m
    vector<vector<int>> a(n, vector<int>(m));  // Вектор в векторе, где вы такое видели?

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (token) {
                maxxelem = a[i][j];
                maxi = i;
                maxj = j;
                token = !token;
            } else if (maxxelem < a[i][j]) {
                maxxelem = a[i][j];
                maxi = i;
                maxj = j;
            }
        }
    }
    cout << maxi << " " << maxj;
    return 0;
}