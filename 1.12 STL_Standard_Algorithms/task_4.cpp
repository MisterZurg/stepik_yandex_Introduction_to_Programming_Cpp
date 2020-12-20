/*
Выведите все исходные точки в порядке возрастания их расстояний от начала координат.

Входные данные
Программа получает на вход набор точек на плоскости.
Сначала задано количество точек n, затем идет последовательность из n строк,
каждая из которых содержит два числа: координаты точки. Величина n не превосходит 100,
все исходные координаты – целые числа, не превосходящие 103.

Выходные данные
Необходимо вывести все исходные точки в порядке возрастания их расстояний от начала координат.

Sample Input:

2
1 2
2 3
Sample Output:

1 2
2 3
 */

#include <iostream>
#include <utility>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

struct coord {
    int x;
    int y;
    double distance;
};

bool cmp(coord a, coord b) {
    return a.distance < b.distance;
}

int main() {
    int n;
    cin >> n;
    vector<coord> coordinate(n);

    for (int i = 0; i < n; i++) {
        int tmp_x, tmp_y;
        coord temp;
        cin >> tmp_x >> tmp_y;
        temp.x = tmp_x;
        temp.y = tmp_y;
        temp.distance = hypot(abs(tmp_x), abs(tmp_y));
        coordinate[i] = temp;
    }
    sort(coordinate.begin(), coordinate.end(), cmp);
    for (auto now : coordinate) {
        cout << now.x << " " << now.y << endl;
    }
    return 0;
}