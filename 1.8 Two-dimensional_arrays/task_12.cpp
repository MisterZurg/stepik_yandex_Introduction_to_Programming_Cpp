/*
Даны числа n и m. Заполните массив размером n × m в шахматном порядке:
клетки одного цвета заполнены нулями,
а другого цвета - заполнены числами натурального ряда сверху вниз, слева направо.
В левом верхнем углу записано число 1.

Формат входных данных
Вводятся два числа n и m, не превышающие 100.

Формат выходных данных
Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.

Sample Input:

3 5
Sample Output:

   1   0   2   0   3
   0   4   0   5   0
   6   0   7   0   8
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // put your code here
    int rows, columns, num = 1;
    cin >> rows >> columns;
    vector<vector<int>> snake(rows, vector<int>(columns));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if ((i + j) % 2 == 0) {
                snake[i][j] = num;
                num++;
            } else {
                snake[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%4d", snake[i][j]);
        }
        cout << "\n";
    }
    return 0;
}