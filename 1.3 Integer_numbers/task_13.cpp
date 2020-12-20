/*
Симметричное число

Дано четырехзначное число. Определите, является ли его десятичная запись симметричной.
Если число симметричное, то выведите 1,
иначе выведите любое другое целое число.
Число может иметь меньше четырех знаков, тогда нужно считать,
что его десятичная запись дополняется слева незначащими нулями.

Формат входных данных

Вводится единственное число.

Формат выходных данных

Выведите одно целое число - ответ на задачу.

Sample Input 1:

2002
Sample Output 1:

1
Sample Input 2:

2008
Sample Output 2:

37
*/

#include <iostream>

using namespace std;

int main() {
    // put your code here
    int number;
    cin >> number;
    int first = 0, second = 0, third = 0, fourth = 0;
    first = number / 1000;
    second = number / 100 % 10;
    third = number / 10 % 10;
    fourth = number % 10;
    cout << (first - fourth) * (fourth - first) + (third - second) * (second - third) + 1;
    return 0;
}