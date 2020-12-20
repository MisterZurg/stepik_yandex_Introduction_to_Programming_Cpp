/*
Даны пять действительных чисел: x, y, xc, yc, r.
Проверьте, принадлежит ли точка (x, y) кругу с центром (xc, yc) и радиусом r.
Если точка принадлежит кругу, выведите слово YES, иначе выведите слово NO.
Решение должно содержать функцию IsPointInCircle(x, y, xc, yc, r),
возвращающую True, если точка принадлежит кругу и False, если не принадлежит.
Основная программа должна считать координаты точки,
вызвать функцию IsPointInCircle и в зависимости от возвращенного значения вывести на экран необходимое сообщение.
Функция IsPointInCircle не должна содержать инструкцию if.

Формат входных данных
Вводятся пять действительных чисел.

Формат выходных данных
Выведите ответ на задачу.

Sample Input 1:

0.5
0.5
0
0
1
Sample Output 1:

YES
Sample Input 2:

0.5
0.5
1
1
0.1
Sample Output 2:

NO
 */

#include <iostream>
#include <cmath>
// Вспоминаем уравнение окружности из задачи с параметром ЕГЭ 2018
// (Y-Yc)^2 + (X-Xc)^2 = R^2
// Точка Z(x,y) \in \; ОкружностиZ(x,y)∈ Окружности при условии, что
// (x_z − x_c)^2/ +(y_z − y_c)^2 ≤ r_c^2
​
bool IsPointInCircle(double x, double y, double xc, double yc, double r) {
    return pow((x - xc), 2) + pow((y - yc), 2) <= pow(r, 2);
}

int main() {
    double x, y, xc, yc, r;
    std::cin >> x >> y >> xc >> yc >> r;
    std::cout << (IsPointInCircle(x, y, xc, yc, r) ? "YES" : "NO");
    return 0;
}