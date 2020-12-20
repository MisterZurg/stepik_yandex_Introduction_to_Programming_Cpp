/*
Дано три числа. Упорядочите их в порядке неубывания.

Формат входных данных
Вводятся три числа.

Формат выходных данных
Выведите ответ на задачу.

Sample Input:

1
2
1
Sample Output:

1 1 2
 */

#include <iostream>

using namespace std;

int main() {
    // put your code here
    int a, b, c;
    cin >> a >> b >> c;
    if ((a <= b) && (b <= c)) {
        cout << a << ' ' << b << ' ' << c;
    } else if ((a <= c) && (c <= b)) {
        cout << a << ' ' << c << ' ' << b;
    } else if ((b <= a) && (a <= c)) {
        cout << b << ' ' << a << ' ' << c;
    } else if ((b <= c) && (c <= a)) {
        cout << b << ' ' << c << ' ' << a;
    } else if ((c <= a) && (a <= b)) {
        cout << c << ' ' << a << ' ' << b;
    } else {
        cout << c << ' ' << b << ' ' << a;
    }
    return 0;
}
/*
#include <iostream>

using namespace std;

int main() {
    int a, b, c, tmp;
    cin >> a >> b >> c;
    if (a > b) {
        tmp = a;
        a = b;
        b = tmp;
    }
    if (a > c) {
        tmp = a;
        a = c;
        c = tmp;
    }
    if (b > c) {
        tmp = b;
        b = c;
        c = tmp;
    }
    cout << a << " " << b << " " << c;
    return 0;
}
*/