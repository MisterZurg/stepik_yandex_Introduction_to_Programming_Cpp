/*
Отсортируйте массив.

Входные данные
Первая строка входных данных содержит количество элементов в массиве N ≤ 105.
Далее идет N целых чисел, не превосходящих по абсолютной величине 10^9.

Выходные данные
Выведите эти числа в порядке неубывания.

Sample Input:

5
5 4 3 2 1
Sample Output:

1 2 3 4 5
 */

#include <iostream>
#include <algorithm>    // Законно используем
#include <vector>

int main() {
    // put your code here
    int n;
    std::cin >> n;
    std::vector<int> seq(n);
    for (int i = 0; i < n; i++) {
        std::cin >> seq[i];
    }
    sort(seq.begin(), seq.end());
    for (auto elem : seq) {
        std::cout << elem << " ";
    }
    return 0;
}