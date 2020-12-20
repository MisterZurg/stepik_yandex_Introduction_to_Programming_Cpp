/*
Дан список, упорядоченный по неубыванию элементов в нем.
Определите, сколько в нем различных элементов.

Формат входных данных

В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.

Формат выходных данных
Выведите ответ на задачу.
Sample Input:

6
1 2 2 3 3 3
Sample Output:

3
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, counter = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }
    // "Elements after sorting" 
    // мне нравится как я миксую Eng - Ru
    sort(v.begin(), v.end());
    for (int i = 1; i < v.size(); i++) {
        if (v[i] != v[i - 1]) {
            counter++;
        }
    }
    cout << counter + 1;
    return 0;
}