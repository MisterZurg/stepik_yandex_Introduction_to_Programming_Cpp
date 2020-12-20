/*
По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m по спирали,
выходящей из левого верхнего угла и закрученной по часовой стрелке, как показано в примере.

Формат входных данных
Вводятся два числа n и m, не превышающие 100.

Формат выходных данных
Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.

Sample Input:

4 5
Sample Output:

   1   2   3   4   5
  14  15  16  17   6
  13  20  19  18   7
  12  11  10   9   8
 */

// Zdravstvute GemeDev
// Задачка из курса Программирование на Python
// 2.6 Задачи по материалам недели
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int rows, columns;
    cin >> rows >> columns;
    vector<vector<int>> spiral(rows, vector<int>(columns));
    // fill nearby cells
    int i = 0, j = -1, count = 0;
    while (count < rows * columns) {
        // # Заполнение верхней горизонтальной матрицы (вправо)
        while (j < columns - 1 && !spiral[i][j + 1])
            spiral[i][++j] = ++count;
        // # Заполнение правой вертикальной матрицы (вниз)
        while (i < rows - 1 && !spiral[i + 1][j])
            spiral[++i][j] = ++count;
        // # Заполнение нижней горизонтальной матрицы (влево)
        while (j > 0 && !spiral[i][j - 1])
            spiral[i][--j] = ++count;
        // # Заполнение левой вертикальной матрицы (вверх)
        while (i > 0 && !spiral[i - 1][j])
            spiral[--i][j] = ++count;
    }

    // output
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%4d", spiral[i][j]);
        }
        cout << "\n";
    }
    // # Вы великолепны
    return 0;
}