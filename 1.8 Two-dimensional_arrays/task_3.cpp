/*
Дано число n, не превышающее 100.
Создайте массив размером n×n и заполните его по следующему правилу.
На главной диагонали должны быть записаны числа 0.
На двух диагоналях, прилегающих к главной, числа 1.
На следующих двух диагоналях числа 2, и т.д.
Выведите полученный массив на экран, разделяя элементы массива пробелами.

Sample Input:

5
Sample Output:

0 1 2 3 4
1 0 1 2 3
2 1 0 1 2
3 2 1 0 1
4 3 2 1 0
 */

#include <iostream>
#include <vector>
#include <cmath> // std::abs()

using namespace std;

int main() {
    // put your code here
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = abs(j - i);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}