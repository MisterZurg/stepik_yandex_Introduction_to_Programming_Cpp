/*
Выведите фамилии и имена учащихся в порядке убывания их среднего балла.

Входные данные
Заданы сначала количество учащихся n, затем n строк, каждая из которых содержит фамилию,
имя и три числа (оценки по трем предметам: математике, физике, информатике).
Данные в строке разделены одним пробелом. Оценки принимают значение от 1 до 5.

Выходные данные
Необходимо вывести пары фамилия-имя по одной на строке, разделяя фамилию и имя одним пробелом.
Выводить оценки не нужно. Если несколько учащихся имеют одинаковые средние баллы,
то их нужно выводить в порядке, заданном во входных данных.

Sample Input:

3
Markov Valeriy 5 5 5
Sergey Petrov 1 1 1
Petrov Petr 3 3 3
Sample Output:

Markov Valeriy
Petrov Petr
Sergey Petrov
 */

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct Student {
    string name, surname;
    int math, phys, comp_science;
};

bool cmp(Student a, Student b) {
    return a.math + a.phys + a.comp_science > b.math + b.phys + b.comp_science;
}

int main(void) {
    int n;
    cin >> n;
    if (n < 1) return 1;

    vector<Student> data(n);
    for (int i = 0; i < n; ++i) {
        cin >> data[i].name >> data[i].surname;
        cin >> data[i].math >> data[i].phys >> data[i].comp_science;
    }
    stable_sort(data.begin(), data.end(), cmp);

    for (auto s : data)
        cout << s.name << " " << s.surname << endl;
    return 0;
}