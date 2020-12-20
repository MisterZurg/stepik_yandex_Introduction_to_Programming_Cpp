/*
По данной строке определите, является ли она палиндромом
(то есть, читается одинаково как слева-направо, так и справа-налево).

Входные данные
На вход подается 1 строка без пробелов.

Выходные данные
Необходимо вывести yes, если строка является палиндромом, и no в противном случае.

Sample Input:

kayak
Sample Output:

yes
 */

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str;
    cin >> str;

    cout << (equal(str.begin(), str.end(), str.rbegin()) ? "yes" : "no") << endl;
    return 0;
}
/* Решение в лоб
#include <iostream>
#include <string>

using namespace std;
int main() {
  // put your code here
    bool token = true;
    string my_str;
    getline(cin, my_str);
    for (int i = 0; i < my_str.length() / 2; i++) {
        if ( my_str[i] != my_str[my_str.length() - 1 - i]){
            token = !token;
            break;
        }
    }
    cout << (token ? "yes" : "no");
  return 0;
}
*/