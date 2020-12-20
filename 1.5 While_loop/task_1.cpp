/*
Формат входных данных
Вводится натуральное число.

Формат выходных данных
Выведите ответ на задачу.

Sample Input:

50
Sample Output:

1 4 9 16 25 36 49
 */

#include <iostream>

using namespace std;

int main() {
    // put your code here
    int i, n;
    i = 1;
    cin >> n;
    while ((i * i) <= n) {
        cout << (i * i) << " ";
        i++;
    }
    return 0;
}