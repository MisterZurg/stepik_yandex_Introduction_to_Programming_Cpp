/*
Выведите значение наименьшего из всех положительных элементов в массиве.
Известно, что в массиве есть хотя бы один положительный элемент.

Формат входных данных

В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.

Формат выходных данных
Выведите ответ на задачу.

Sample Input:

5
5 -4 3 -2 1
Sample Output:

1
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // put your code here
    int n, min;
    bool token = true;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < arr.size(); i++) {
        // Первый положительный элемент
        if ((arr[i] > 0) && (token)) {
            min = arr[i];
            token = !token;
        }
        // Остальные элементы
        if ((arr[i] > 0) && (arr[i] < min)) {
            min = arr[i];
        }
    }
    cout << min;
    return 0;
}