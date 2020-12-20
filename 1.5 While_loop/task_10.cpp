/*
Последовательность Фибоначчи определяется так:

F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).

По данному числу N определите N-е число Фибоначчи F(N).

Формат входных данных
Вводится натуральное число N.

Формат выходных данных

Выведите ответ на задачу.
Sample Input:

6

Sample Output:

8
 */
#include <iostream>

using namespace std;

int main() {
    // put your code here
    int n_minus_one = 1, n_minus_two = 0, n, tmp, counter = 0;
    cin >> n;
    while (counter != n) {
        tmp = n_minus_one;
        n_minus_one += n_minus_two;
        n_minus_two = tmp;
        counter++;
    }
    cout << n_minus_two;
    return 0;
}