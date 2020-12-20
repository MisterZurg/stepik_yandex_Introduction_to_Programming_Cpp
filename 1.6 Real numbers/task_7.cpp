/*
Дана последовательность натуральных чисел x1, x2, ..., xn.
Стандартным отклонением называется величина
σ = sqrt( ( (x_1 - s)^2 + (x_2 - s)^2 + ... + (x_n - s)^2 ) / n-1 )
, где s = (x_1 + x_2 + ... + x_n) / n - среднее значение последовательности.
// Формулы есть во вложениях

Определите стандартное отклонение для данной последовательности натуральных чисел, завершающейся числом 0.

Формат входных данных

Вводится последовательность натуральных чисел, оканчивающаяся числом 0
(само число 0 в последовательность не входит, а служит как признак ее окончания).
В последовательности не менее двух чисел до 0.

Формат выходных данных
Выведите ответ на задачу.
Sample Input:

1
7
9
0
Sample Output:

4.16333199893
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double number, counter = 0, sum, sum_of_powers;
    cin >> number;
    sum = number;
    sum_of_powers = pow(number, 2.0);
    while (number != 0) {
        counter++;
        cin >> number;
        sum += number;
        sum_of_powers += pow(number, 2.0);
    }
    cout.precision(11);
    cout << sqrt((sum_of_powers - (pow(sum, 2.0) / counter)) / (counter - 1));

    return 0;
}