/*
Возводить в степень можно гораздо быстрее, чем за n умножений!
Для этого нужно воспользоваться следующими рекуррентными соотношениями:

a^n = (a^2)^{n/2}  при четном n,

a^n = a × a^{n−1} при нечетном n.

Реализуйте алгоритм быстрого возведения в степень с помощью рекурсивной функции.

Формат входных данных
Вводятся действительное число a и целое неотрицательное число n.

Формат выходных данных
Выведите ответ на задачу.
Sample Input 1:

2.0
1
Sample Output 1:

2
Sample Input 2:

2
2
Sample Output 2:

4
 */

#include <iostream>

using namespace std;

double power(double a, int n) {
    if (n == 0) {
        return 1;
        // Алгоритм быстрого возведения в степень по рекуррентной формуле:
    } else if (n % 2 == 0) {    // При чётном n
        return power(a * a, n / 2);
    } else {                    // При нечётном n
        return a * power(a * a, n / 2);
    }
}

int main() {
    // put your code here
    double a;
    int n;
    cin >> a >> n;
    cout << power(a, n);
    return 0;
}