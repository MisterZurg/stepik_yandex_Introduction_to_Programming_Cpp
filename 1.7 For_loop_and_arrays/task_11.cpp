/*
Дан массив чисел. Посчитайте, сколько в нем пар элементов, равных друг другу.
Считается, что любые два элемента, равные друг другу образуют одну пару, которую необходимо посчитать.

Формат входных данных

В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.

Формат выходных данных
Выведите ответ на задачу.
Sample Input 1:

5
1 2 3 2 3
Sample Output 1:

2
Sample Input 2:

5
1 1 1 1 1
Sample Output 2:

10
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // put your code here
    int elems_in_arr, couples = 0;
    cin >> elems_in_arr;
    vector<int> arr(elems_in_arr);
    // Заполнение вектора:
    for (int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }
    // Подсчёт пар:
    for (int i = 1; i < arr.size(); i++) {
        for (int j = 0; j < i; j++) {
            (arr[j] == arr[i]) ? couples++ : couples;
        }
    }
    cout << couples;
    return 0;
}