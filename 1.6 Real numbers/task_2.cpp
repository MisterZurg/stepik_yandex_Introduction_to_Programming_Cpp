/*
Дано положительное действительное число X. Выведите его первую цифру после десятичной точки.

Формат входных данных
Вводится положительное действительное число.

Формат выходных данных
Выведите ответ на задачу.
Sample Input:

1.79
Sample Output:

7
 */
#include <iostream>

int main() {
    // put your code here
    double num;
    std::cin >> num;
    std::cout << int(num * 10) % 10;
    return 0;
}