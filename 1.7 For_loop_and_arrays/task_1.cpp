/*
Выведите все элементы массива с четными индексами (то есть A[0], A[2], A[4], ...).
Формат входных данных

В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

5
1 2 3 4 5
Sample Output:

1 3 5
 */

#include <iostream>
#include <vector>

int main() {
    // put your code here
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    for (int i = 0; i < arr.size(); i++)
        if (i % 2 == 0) {
            std::cout << arr[i] << " ";
        }
    return 0;
}