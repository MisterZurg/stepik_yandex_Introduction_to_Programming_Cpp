/*
Во время проведения олимпиады каждый из участников получил свой идентификационный номер
– натуральное число. Необходимо отсортировать список участников олимпиады
по количеству набранных ими баллов.

Входные данные
На первой строке дано число N (1 ≤ N ≤ 1000) – количество участников.
На каждой следующей строке даны идентификационный номер
и набранное число баллов соответствующего участника. Все числа во входном файле не превышают 105.

Выходные данные
В выходной файл выведите исходный список в порядке убывания баллов.
Если у некоторых участников одинаковые баллы,
то их между собой нужно упорядочить в порядке возрастания идентификационного номера.

Sample Input 1:

3
101 80
305 90
200 14
Sample Output 1:

305 90
101 80
200 14
Sample Input 2:

3
20 80
30 90
25 90
Sample Output 2:

25 90
30 90
20 80
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    short n;
    cin >> n;
    vector<pair<int, int>> list_mark(n);
    for (pair<int, int> &num : list_mark) {
        cin >> num.second >> num.first;
        num.first *= -1;    //инвертирование для сортировки отриц.
    }                       //чисел по возрастанию
    sort(list_mark.begin(), list_mark.end());

    for (pair<int, int> &num : list_mark) {
        cout << num.second << " " << -1 * num.first << endl;
    }
    return 0;
}

// Тупо II этап Всеукраинской олимпиады школьников 2011-2012, г. Бердичев