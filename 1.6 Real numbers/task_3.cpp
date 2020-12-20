/*
Даны длины сторон треугольника. Вычислите площадь треугольника.

Формат входных данных
Вводятся три положительных числа.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

3
4
5
Sample Output:

6
 */

#include<iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y, z, s, p = 0;
    cin >> x >> y >> z;
    p = (x + y + z) / 2;

    // S_реугольника по Формуле Герона
    s = sqrt(p * (p - x) * (p - y) * (p - z));
    cout << s;
    return 0;
}