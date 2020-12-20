/*
Найдите количество положительных элементов в данном массиве.
Формат входных данных

В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

5
1 -2 3 -4 5
Sample Output:

3
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // put your code here
    int n, sum_of_positives = 0; //кол-во элементов в массиве
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > 0) {
            sum_of_positives += 1;
        }
    }
    cout << sum_of_positives;
    return 0;
}