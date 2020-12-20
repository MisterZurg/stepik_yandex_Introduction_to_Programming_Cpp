/*
По введенному символу определите, является ли он цифрой.

Входные данные
Вводится единственый символ.

Выходные данные
Выведите "yes", если символ является цифрой и "no" в противном случае.
Обратите внимание, что слова нужно выводить маленькими буквами.

Sample Input 1:

1
Sample Output 1:

yes
Sample Input 2:

a
Sample Output 2:

no
 */

#include <iostream>

using namespace std;

int main() {
    // put your code here
    char symbol;
    cin >> symbol;
    cout << ('0' <= symbol && symbol <= '9' ? "yes" : "no");
    return 0;
}