/*
В кинотеатре n рядов по m мест в каждом (n и m не превосходят 20).
В двумерном массиве хранится информация о проданных билетах, число 1 означает,
что билет на данное место уже продан, число 0 означает, что место свободно.
Поступил запрос на продажу k билетов на соседние места в одном ряду. Определите, можно ли выполнить такой запрос.

Формат входных данных
Программа получает на вход числа n и m. Далее идет n строк, содержащих m чисел (0 или 1),
разделенных пробелами. Затем дано число k.

Формат выходных данных
Программа должна вывести номер ряда, в котором есть k подряд идущих свободных мест.
Если таких рядов несколько, то выведите номер наименьшего подходящего ряда.
Если подходящего ряда нет, выведите число 0.

Sample Input:

3 4
0 1 0 1
1 0 0 1
1 1 1 1
2
Sample Output:

2
 */

// Условие кривое:
// На самом деле задача проще простого: нужно найти первый ряд в котором достаточно мест (свободных мест >= k)

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // put your code here
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int k, conter = 0;
    cin >> k;
    bool buy_tickets = false;
    for (int i = 0; i < n; i++) {
        bool is_not_occupied = true;
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 0 && is_not_occupied) {
                conter++;
                is_not_occupied = !is_not_occupied;
            } else if (a[i][j] == 0 && !is_not_occupied) {
                conter++;
            } else {
                is_not_occupied = !is_not_occupied;
                conter = 0;
            }
            if (conter == k) {
                buy_tickets = !buy_tickets;
                cout << i + 1;
                break;
            }
        }
        if (buy_tickets) { break; }
        conter = 0;
    }
    if (!buy_tickets) { cout << 0; }
    return 0;
}