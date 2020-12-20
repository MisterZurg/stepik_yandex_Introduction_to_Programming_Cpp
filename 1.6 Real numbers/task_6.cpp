/*
Определите среднее значение всех элементов последовательности, завершающейся числом 0.

Формат входных данных

Вводится последовательность целых чисел, оканчивающаяся числом 0
(само число 0 в последовательность не входит, а служит как признак ее окончания).

Формат выходных данных
Выведите ответ на задачу.
Sample Input:

1
7
9
0
Sample Output:

5.66666666667
 */

#include <iostream>
#include <iomanip> //Для точности в 11 знаков после запятой.

using namespace std;

int main() {
    // put your code here
    int n, counter = 0, sum = 0;
    cin >> n;
    while (n != 0) {
        sum += n;
        counter++;
        cin >> n;
    }
    cout.precision(11);
    cout << double(sum) / double(counter);
    return 0;
}