/*
Циклически сдвиньте элементы списка вправо
(A[0] переходит на место A[1], A[1] на место A[2], ...,
последний элемент переходит на место A[0]).

Формат входных данных

В первой строке вводится количество элементов в массиве.
Во второй строке вводятся элементы массива.

Формат выходных данных
Выведите ответ на задачу.
Sample Input:

5
1 2 3 4 5
Sample Output:

5 1 2 3 4
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // put your code here
    int elements_in_arr, last_elem_holder;
    cin >> elements_in_arr;
    vector<int> arr(elements_in_arr);
    for (int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }
    last_elem_holder = arr[arr.size() - 1];
    // cout << last_elem_holder;
    for (int i = arr.size() - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last_elem_holder;
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}