/*
Известно, что на доске 8×8 можно расставить 8 ферзей так, чтобы они не били друг друга.
Вам дана расстановка 8 ферзей на доске, определите, есть ли среди них пара бьющих друг друга.

Формат входных данных

Программа получает на вход восемь пар чисел, каждое число от 1 до 8 - координаты 8 ферзей.

Формат выходных данных
Если ферзи не бьют друг друга, выведите слово NO, иначе выведите YES.
Sample Input 1:

1 7
2 4
3 2
4 8
5 6
6 1
7 3
8 5
Sample Output 1:

NO
Sample Input 2:

1 8
2 7
3 6
4 5
5 4
6 3
7 2
8 1
Sample Output 2:

YES
 */

#include <iostream>
#include <vector>
#include <cmath>    // std::abs(выражение)

using namespace std;

int main() {
    // put your code here
    int couples = 8;
    vector<int> x(couples), y(couples); // Храним координаты (x,y)
    for (int i = 0; i < couples; i++) {
        cin >> x[i] >> y[i]; // Cчитывем координаты (x,y) i-го ферзя
    }
    bool token = true;
    for (int i = 0; i < couples; i++) {
        for (int j = i + 1; j < couples; j++) {
            if (((x[i] == x[j]) or
                 (y[i] == y[j]) or
                 (abs(x[i] - x[j])
                 ) == abs(y[i] - y[j]))) {
                token = false;
            }
        }
    }
    (token) ? cout << "NO" : cout << "YES";
    return 0;
}