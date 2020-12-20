/*
Дано натуральное число N. Выведите слово YES,
если число N является точной степенью двойки,
или слово NO в противном случае.

Формат входных данных
Вводится натуральное число.

Формат выходных данных
Выведите ответ на задачу.

Sample Input 1:

1
Sample Output 1:

YES
Sample Input 2:

2
Sample Output 2:

YES
 */

#include <iostream>

using namespace std;

int main() {
    // put your code here
    int n;
    cin >> n;
    if (n & (n - 1))
        cout << "NO";
    else
        cout << "YES";
    return 0;
}