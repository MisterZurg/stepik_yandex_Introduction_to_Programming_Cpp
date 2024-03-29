/*
Даны вещественные числа a, b, c, d, e, f. Решите систему линейных уравнений
                / ax + by = e,
                |
                \ cx + dy = f.
                // Таже самая формула, также есть во вложениях

Формат входных данных

Вводятся шесть чисел - коэффициенты уравнений системы.

Формат выходных данных

Вывод программы зависит от вида решения этой системы.

Если система не имеет решений, то программа должна вывести единственное число 0.

Если система имеет бесконечно много решений, каждое из которых имеет вид y=kx+n,
    то программа должна вывести число 1, а затем значения k и n.

Если система имеет единственное решение (x0, y0),
    то программа должна вывести число 2, а затем значения x0 и y0.

Если система имеет бесконечно много решений вида x=x0, y — любое,
    то программа должна вывести число 3, а затем значение x0.

Если система имеет бесконечно много решений вида y=y0, x — любое,
    то программа должна вывести число 4, а затем значение y0.

Если любая пара чисел (x, y)  является решением, то программа должна вывести число 5.

Sample Input 1:

1
0
0
1
3
3
Sample Output 1:

2 3 3
Sample Input 2:

1
1
2
2
1
2
Sample Output 2:

1 -1 1
Sample Input 3:

0
2
0
4
1
2
Sample Output 3:

4 0.5
Sample Input 4:

2
3
4
6
1
2
Sample Output 4:

1 -0.666667 0.333333
Sample Input 5:

0
1
0
3
5
15
Sample Output 5:

4 5
Sample Input 6:

1
0
1
0
3
3
Sample Output 6:

3 3
 */

#include <iostream>

using namespace std;
// Задача решается Методом Краммера, ради этого стоило ходитб на 1 курс на "Анал"
// (Аналитическая алгебра и линейная геометрия)
int main() {
    double a, b, c, d, e, f, det, detx, dety;
    cin >> a >> b >> c >> d >> e >> f;
    det = a * d - b * c;
    detx = e * d - b * f;
    dety = a * f - e * c;
    if (det == 0) {
        if (detx == 0 && dety == 0) {
            if (a == 0 && b == 0 && c == 0 && d == 0) {
                if (e == 0 && f == 0) cout << 5;
                else cout << 0;
            } else if (a == 0 && c == 0) {
                if (b == 0) cout << 4 << " " << f / d;
                else cout << 4 << " " << e / b;
            } else if (b == 0 && d == 0) {
                if (a == 0) cout << 3 << " " << f / c;
                else cout << 3 << " " << e / a;
            } else if (b == 0) cout << 1 << " " << -c / d << " " << f / d;
            else cout << 1 << " " << -a / b << " " << e / b;
        } else cout << 0;
    } else cout << 2 << " " << detx / det << " " << dety / det;

    return 0;
}