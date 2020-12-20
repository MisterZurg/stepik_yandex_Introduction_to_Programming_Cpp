/*
Переведите символ в верхний регистр.

Входные данные
Вводится единственый символ.

Выходные данные
Если введеный символ является строчной буквой латинского алфавита,
то выведите такую же заглавную букву. В противном случае выведите тот же символ, который был введен.

Sample Input:

b
Sample Output:

B
 */

#include <iostream>

// #include <string>
int main() {
    // put your code here
    char lower_case_symbol;
    std::cin >> lower_case_symbol;
    std::cout << char(toupper(lower_case_symbol));
    return 0;
}