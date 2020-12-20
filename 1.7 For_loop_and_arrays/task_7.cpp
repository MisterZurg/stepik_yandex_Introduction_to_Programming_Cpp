/*
Выведите значение наименьшего нечетного элемента списка,
а если в списке нет нечетных элементов - выведите число 0.

Формат входных данных

В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.

Формат выходных данных
Выведите ответ на задачу.

Sample Input 1:

5
0 1 2 3 4
Sample Output 1:

1
Sample Input 2:

5
2 4 6 8 10
Sample Output 2:

0
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // put your code here
    int n, min; // Чисто поржать, задание просит минимальный нечетный элемент.
    bool token = true;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < arr.size(); i++) {
        if (((arr[i] % 2 == 1) || (arr[i] % 2 == -1)) && (token)) {
            min = arr[i];
            token = !token;
        }
        if (((arr[i] % 2 == 1) || (arr[i] % 2 == -1)) && (arr[i] < min) && (!token)) {
            min = arr[i];
        }
    }
    if (token) {
        cout << 0;
    } else {
        cout << min;
    }
    return 0;
}