/*
Даны два списка чисел, которые могут содержать до 100000 чисел каждый.
Выведите все числа, которые входят как в первый, так и во второй список в порядке возрастания.

Входные данные
Вводится число N - количество элементов первого списка, а затем N чисел первого списка.
Затем вводится число M - количество элементов второго списка, а затем M чисел второго списка.

Выходные данные
Выведите ответ на задачу.

Sample Input:

3
1 3 2
3
4 3 2
Sample Output:

2 3
 */

#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    // put your code here
    int first_set, second_set, couples_counter = 0;      // Кол-во элементов последовательностей N, M
    set<int> first_sequence;
    set<int> second_sequence;
    cin >> first_set;
    // Заполняем первое множество
    for (int i = 0; i < first_set; i++) {
        int elem;
        cin >> elem;
        first_sequence.insert(elem);
    }
    cin >> second_set;
    // Заполняем второе множество
    for (int i = 0; i < second_set; i++) {
        int elem;
        cin >> elem;
        second_sequence.insert(elem);
    }

    set<int> intersect;
    set_intersection(first_sequence.begin(), first_sequence.end(),
                     second_sequence.begin(), second_sequence.end(),
                     inserter(intersect, intersect.begin()));
    // Тоже самое только выводем саму последовательность
    for (auto elem : intersect) {
        cout << elem << " ";
    }
    return 0;
}