/*
Дан массив чисел. Выведите все элементы массива, которые больше предыдущего элемента .
Формат входных данных

В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

5
1 5 2 4 3
Sample Output:

5 4
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // put your code here
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i - 1] < arr[i]) {
            cout << arr[i] << " ";
        }
    }
    return 0;
}