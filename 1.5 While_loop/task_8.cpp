/*
Последовательность состоит из натуральных чисел и завершается числом 0.
Определите, какое количество элементов этой последовательности, равны ее наибольшему элементу.

Формат входных данных
Вводится непустая последовательность целых чисел,
оканчивающаяся числом 0 (само число 0 в последовательность не входит,
а служит как признак ее окончания).

Формат выходных данных
Выведите ответ на задачу.

Sample Input 1:

1
7
9
0

Sample Output 1:

1

Sample Input 2:

1
3
3
1
0

Sample Output 2:

2
*/
#include <iostream>

using namespace std;

int main() {
    // put your code here
    int n, max, counter;
    cin >> n;
    max = n, counter = 0;
    while (n != 0) {
        if (max < n) {
            max = n, counter = 1;
        } else if (n == max) {
            counter++;
        }
        cin >> n;
    }
    cout << counter;
    return 0;
}