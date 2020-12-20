/*
Дано число n, не превосходящее 10, и массив размером n × n.
Проверьте, является ли этот массив симметричным относительно главной диагонали.
Выведите слово “YES”, если массив симметричный, и слово “NO” в противном случае.

Sample Input:

3
0 1 2
1 2 3
2 3 4
Sample Output:

YES
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // put your code here
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    bool token = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (n + 1 / 2); j++) {
            if (a[i][j] != a[j][i]) {
                token = !token;
                break;
            }
        }
        if (!token) {
            break;
        }
    }
    (token) ? cout << "YES" : cout << "NO";
    return 0;
}