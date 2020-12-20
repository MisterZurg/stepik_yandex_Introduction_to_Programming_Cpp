/*
Вам дан словарь, состоящий из пар слов. Каждое слово является синонимом к парному ему слову.
Все слова в словаре различны. Для одного данного слова определите его синоним.

Входные данные
Программа получает на вход количество пар синонимов N.
Далее следует N строк, каждая строка содержит ровно два слова-синонима.
После этого следует одно слово.

Выходные данные
Программа должна вывести синоним к данному слову.

Sample Input:

3
Hello Hi
Bye Goodbye
List Array
Goodbye
Sample Output:

Bye
 */

#include <iostream>
#include <map> // Мапа наконец-то
#include <string>

using namespace std;

int main() {
    // put your code here
    int n;
    cin >> n; // Размер мапы: СлОвАрЯ
    map<string, string> my_dictionary;
    for (int i = 0; i < n; i++) {
        string key, value;
        cin >> key >> value;
        my_dictionary[key] = value;
        // my_dictionary[value] = key; 1) Для более простого решения.
    }
    string word;
    cin >> word;
    // cout << my_dictionary[word];    2) Для более простого решения.

    for (auto now : my_dictionary) {
        if (now.second == word) {
            cout << now.first;
        } else if (now.first == word) {
            cout << now.second;
        }
    }
    return 0;
}