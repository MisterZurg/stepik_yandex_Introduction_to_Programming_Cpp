/*
Последовательность Фибоначчи определяется так:

F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).

Дано натуральное число A. Определите, каким по счету числом Фибоначчи оно является,
то есть выведите такое число N, что F(N) = A.
Если А не является числом Фибоначчи, выведите число -1.

Формат входных данных
Вводится натуральное число A > 1.

Формат выходных данных
Выведите ответ на задачу.

Sample Input:

8

Sample Output:

6
 */

#include <iostream>

using namespace std;

int main() {
    // put your code here
    int a, tmp;
    cin >> a;
    if (a == 0) {
        cout << 0;
    } else {
        int fib_prev = 0, fib_next = 1, n = 1;
        while (fib_next <= a) {
            if (fib_next == a) {
                cout << n;
                break;
            }
            tmp = fib_next;
            fib_next = fib_prev + fib_next;
            fib_prev = tmp;
            n++;
        }
        if (fib_next > a) {
            cout << -1;
        }
    }
    return 0;
}