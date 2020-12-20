/*
В обувном магазине продается обувь разного размера.
Известно, что одну пару обуви можно надеть на другую, если она хотя бы на три размера больше.
В магазин пришел покупатель. Требуется определить,
какое наибольшее количество пар обуви сможет предложить ему продавец так,
чтобы он смог надеть их все одновременно.

Входные данные
Сначала вводится размер ноги покупателя (обувь меньшего размера он надеть не сможет),
затем количество пар обуви в магазине и размер каждой пары.
Размер — натуральное число, не превосходящее 100,
количество пар обуви в магазине не превосходит 1000.

Выходные данные
Выведите единственное число — максимальное количество пар обуви.

Sample Input:

26
5
30 35 40 41 42
Sample Output:

3
 */

#include <iostream>
#include <algorithm>
#include <vector>

// put your code here
int main() {
    // put your code here
    int foot_size, footwear_amount, counter = 0;
    std::cin >> foot_size >> footwear_amount;
    std::vector<int> footwear(footwear_amount);
    for (int i = 0; i < footwear_amount; i++) {
        std::cin >> footwear[i];
    }
    sort(footwear.begin(), footwear.end());
    for (auto boots_size : footwear) {
        if (foot_size <= boots_size && counter == 0) {
            foot_size = boots_size;
            counter++;
        } else if (boots_size - foot_size >= 3) {
            foot_size = boots_size;
            counter++;
        }
        // std::cout << foot_size << " ";
    }
    std::cout << counter;
    return 0;
}