/*
Даны два целых числа.
Программа должна вывести единицу,
если первое число больше второго,
двойку, если второе больше первого, или ноль, если они равны.

Формат входных данных
Вводятся два числа.

Формат выходных данных
Выведите ответ на задачу.

Sample Input:

1
2
Sample Output:

2
*/

#include <iostream>

using namespace std;

int main() {
    // put your code here
    int first_num, second_num;
    cin >> first_num >> second_num;
    if (first_num > second_num) {
        cout << 1;
    } else if (first_num < second_num) {
        cout << 2;
    } else {
        cout << 0;
    }
    return 0;
}