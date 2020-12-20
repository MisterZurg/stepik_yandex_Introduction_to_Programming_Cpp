/*
Проверьте, принадлежит ли точка данной закрашенной области:
// См. обл. во вложениях

Если точка принадлежит области (область включает границы), выведите слово YES, иначе выведите слово NO.
Решение должно содержать функцию IsPointInArea(x, y), возвращающую True,
если точка принадлежит области и False, если не принадлежит.
Основная программа должна считать координаты точки, вызвать функцию IsPointInArea
и в зависимости от возвращенного значения вывести на экран необходимое сообщение.
Функция IsPointInArea не должна содержать инструкцию if.

Формат входных данных
Вводятся два действительных числа.

Формат выходных данных
Выведите ответ на задачу.
Sample Input 1:

-4
-4
Sample Output 1:

NO
Sample Input 2:

-4
-3
Sample Output 2:

NO
 */

#include <iostream>
#include <cmath> // pow

using namespace std;

// Здравствуйте СПбГУТ
bool IsPointInArea(double x, double y) {
    //Line y1 = -x
    double xL1_1 = -4, yL1_1 = 4,
            xL1_2 = 4, yL1_2 = -4,
            kL1 = (yL1_1 - yL1_2) / (xL1_1 - xL1_2), //kL1 -> коэф. наклона.
    bL1 = yL1_1 - kL1 * xL1_1;              // b , вроде, сдвиг прямой
    //Line y2 = 2x + 2
    double xL2_1 = -3, yL2_1 = -4,
            xL2_2 = 1, yL2_2 = 4,
            kL2 = (yL2_1 - yL2_2) / (xL2_1 - xL2_2), //kL2 -> коэф. наклона.
    bL2 = yL2_1 - kL2 * xL2_1;
    //Circle
    double xC = -1, yC = 1, rC = 2;

    // Выше Line_1 && Line 2
    if (y >= (kL1 * x + bL1) && y >= (kL2 * x + bL2)) {
        // Проверяем внутри Circle ; Делаю отдельно в целях читабельности
        if ((pow(x - xC, 2) + pow(y - yC, 2)) <= pow(rC, 2)) {
            return true;
        } else {
            return false;
        }
    } else if (y <= (kL1 * x + bL1) && y <= (kL2 * x + bL2)) { // Ниже что Line_1 && Line 2
        // Проверяем вне Circle ;
        if ((pow(x - xC, 2) + pow(y - yC, 2)) >= pow(rC, 2)) {
            return true;
        } else {
            return false;
        }
    } else { // В остальных случаях
        return false;
    }
}

int main() {
    double x, y;
    cin >> x >> y;
    cout << (IsPointInArea(x, y) ? "YES" : "NO");
    return 0;
}
// P.S. алгоритм ещё с I - курса XD