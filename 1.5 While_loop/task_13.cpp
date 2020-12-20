/*
Элемент последовательности называется локальным максимумом,
если он строго больше предыдущего и последующего элемента последовательности.
Первый и последний элемент последовательности не являются локальными максимумами.

Дана последовательность натуральных чисел, завершающаяся числом 0.
Определите количество строгих локальных максимумов в этой последовательности.

Формат входных данных
Вводится последовательность натуральных чисел, оканчивающаяся числом 0
(само число 0 в последовательность не входит, а служит как признак ее окончания).

Формат выходных данных
Выведите ответ на задачу.

Sample Input:

1
2
1
2
1
0

Sample Output:

2
 */

#include <iostream>

using namespace std;

int main() {
    // put your code here
    int first, possible_local_max, second, counter = 0;
    cin >> first >> possible_local_max >> second;
    while (second != 0) {
        if ((first < possible_local_max) && (possible_local_max > second)) {
            counter++;
        }
        first = possible_local_max;
        possible_local_max = second;
        cin >> second;
    }
    cout << counter;
    return 0;
}