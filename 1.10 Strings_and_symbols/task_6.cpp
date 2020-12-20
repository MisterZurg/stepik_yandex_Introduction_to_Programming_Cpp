/*
Найдите в данной строке самое длинное слово и выведите его.

Входные данные
Вводится одна строка. Слова в ней отделены одним пробелом.

Выходные данные
Выведите самое длинное слово. Если таких слов несколько, то выводить нужно, которое встречается раньше.

Sample Input:

Everyone of us has all we need
Sample Output:

Everyone
 */

#include <iostream>

using namespace std;

int main() {
    string word;
    string longest_word = "";
    while (cin >> word) {
        if (word.length() > longest_word.length()) {
            longest_word = word;
        }
    }
    cout << longest_word;
    return 0;
}