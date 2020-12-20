/*
Дан список целых чисел, который может содержать до 100000 чисел.
Определите, сколько в нем встречается различных чисел.

Входные данные
Вводится число N - количество элементов списка, а затем N чисел.

Выходные данные
Выведите ответ на задачу.

Sample Input:

5
1 2 3 2 1
Sample Output:

3
 */

#include <iostream>
#include <set>  // Для вывода уникальных элементов множества

using namespace std;

int main() {
    // put your code here
    set<int> numbers;
    int n, counter = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        numbers.insert(x);
    }
    for (auto now : numbers) {
        counter++;
    }
    cout << counter;
    return 0;
}