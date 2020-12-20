/*
По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m “диагоналями”, как показано в примере.
Формат входных данных
Вводятся два числа n и m, не превышающие 100.

Формат выходных данных
Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.

Sample Input:

3 5
Sample Output:

   1   2   4   7  10
   3   5   8  11  13
   6   9  12  14  15
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // put your code here
    int rows, columns, num = 1;
    cin >> rows >> columns;
    vector<vector<int>> not_snake(rows, vector<int>(columns));
    for (int i = 0; i < (rows + columns - 1); i++) {
        for (int j = 0; j < rows; j++) {
            for (int k = 0; k < columns; k++) {
                /* Условие,
                индекс строки = индекс диагонали - индекс столбца ||
                индекс столбца = индекс диагонали - индекс строки,
                то название_массива[индекс строки][индекс столбца] = c и с++ */
                if ((j == (i - k)) || (k == (i - j))) {
                    not_snake[j][k] = num;
                    num++;
                }
            }
        }
    }
    // Красивый вывод
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%4d", not_snake[i][j]);
        }
        cout << "\n";
    }
    return 0;
}