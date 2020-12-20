/*
Дана последовательность чисел, завершающаяся числом 0.
Найдите сумму всех этих чисел, не используя цикл.

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

17
 */

#include <iostream>

using namespace std;

int sum_of_stange_nums() {
    int strange_num; // Контейнер
    cin >> strange_num;
    if (strange_num != 0) {
        return strange_num + sum_of_stange_nums();
    }
}

int main() {
    cout << sum_of_stange_nums();
    return 0;
}