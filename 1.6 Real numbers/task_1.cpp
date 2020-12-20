/*
Дано положительное действительное число X. Выведите его дробную часть.

Формат входных данных

Вводятся положительное действительное число.

Формат выходных данных
Выведите ответ на задачу.
Sample Input:

17.9
Sample Output:

0.9
 */

#include <iostream>

using namespace std;

int main() {
    // put your code here
    float num;
    cin >> num;
    cout << num - int(num);
    return 0;
}