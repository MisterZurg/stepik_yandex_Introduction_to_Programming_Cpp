/*
Дано целое число, не меньшее 2.
Выведите его наименьший натуральный делитель, отличный от 1.

Формат входных данных
Вводится целое положительное число.

Формат выходных данных
Выведите ответ на задачу.

Sample Input:

15
Sample Output:

3
 */

#include <iostream>

using namespace std;

int main() {
    // put your code here
    int n, i;
    i = 2;
    cin >> n;
    while ((n % i) != 0) {
        i++;
    }
    cout << i;
    return 0;
}