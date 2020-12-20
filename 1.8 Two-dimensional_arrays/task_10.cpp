/*
По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m “змейкой”, как показано в примере.

Формат входных данных
Вводятся два числа n и m, каждое из которых не превышает 30.
Формат выходных данных
Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.

Sample Input:

3 5
Sample Output:

   1   2   3   4   5
  10   9   8   7   6
  11  12  13  14  15
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
            if (i % 2 == 0) {
                snake[i][j] = num;
            } else {
                snake[i][columns - j - 1] = num;
            }
            num++;
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%4d", snake[i][j]); // Для выравнивания используем СИ-шный принтф
            // Или #include <iomanip>
            // cout << setw(4) << snake[i][j];
        }
        cout << "\n";
    }
    return 0;
}