/*
Дано число N. Определите, сколькими способами можно расставить на доске N×N N ферзей, не бьющих друг друга.

Формат входных данных
Задано единственное число N. (N ≤ 10)

Формат выходных данных
Выведите ответ на задачу.

Подсказка
Напишите рекурсивную функцию, которая пытается поставить ферзя в очередной столбец.
Если на эту клетку ставить ферзя нельзя (он бьет предыдущих), то такой вариант даже не стоит рассматривать.
Когда вы успешно поставили ферзя в последний столбец - увеличивайте счетчик.

Sample Input:

8
Sample Output:

92
 */

/*

Решение курвтора курса @Алекс Глозман

#include <iostream>
#include <vector>
using namespace std;
using vint = vector <int>;

int queens(int col, int n, vint &r, vint &d1, vint &d2)
{
    int cnt = 0;
    if (col == n) return 1;

    for (int i= 0, shift=n-1; i < n; ++i) {
        if (!r[i] && !d1[col + i] && !d2[col - i + shift])
        {
            r[i] = d1[col + i] = d2[col - i + shift] = 1;
            cnt += queens(col+1, n, r, d1, d2);
            r[i] = d1[col + i] = d2[col - i + shift] = 0;
        }
    }
    return cnt;
}

int main() {
    int n;
    cin >> n;
    vint rows(n), d1(2*n-1), d2(2*n-1);
    cout << queens(0, n, rows, d1, d2);
}
 */

#include <iostream>

using namespace std;

// прототипы функций.
bool isSafe(int &, int &, int[]);

int placing(int, int &, int[]);

int main() {
    int N;
    cin >> N;
    /*
    массив, содержащий номера строк поставленных ферзей.
    индексы элементов этого массива соответсвуют номерам столбцов поставленных ферзей
    т.е. i-ый поставленный ферзь будет иметь координаты (position[i]; i).
    */
    int position[N] = {};
    cout << placing(0, N, position);
}


/*
функция isSafe() проверяет, бьется ли выбранная клетка с координатами (row_position; queen_number) другими, уже
поставленными, ферзями.
row_position - номер строки в рассматриваемом столбце.
queen_number - какого по счету ставим ферзя.
position[] - массив координат уже поставленных ферзей.
*/
bool isSafe(int &row_position, int &queen_number, int position[]) {

    /*
    проверяем выбранную клетку на "безопасность",
    последовательно сравнивая номер ее стоки с номерами строк уже поставленных ферзей.
    для строк первого столбца цикл не запускается, т.к. queen_number = 0, поэтому возвращается сразу true.
    */
    for (int i = 0; i < queen_number; i++) {
        // переменная prev_row_pos содержит позицию в стобце предыдущего поставленного i-го ферзя
        int prev_row_pos = position[i];
        /*
        если i-ый поставленный ферзь и рассматриваемая клетка текущего столбца находятся
        в одной диагонале или в одной строке, то ф-ция вернет false, иначе true

        (row_position; queen_number) - координаты проверяемой клетки.
        (prev_row_pos; i) - координаты i-го поставленного ферзя.
        */
        if (prev_row_pos == row_position || abs(prev_row_pos - row_position) == abs(i - queen_number)) {
            return false;
        }
    }

    return true;
}

/*
функция placing(текущий стобец/ферзь, размер доски, массив координат поставленных ферзей)
пробует поставить очередного ферзя в k-ый столбец.
row - номер столбца в строки которого будем пытаться поставить очередного ферзя.
N - размер доски и общее количество ферзей, которое надо расставить.
position[] - массив координат уже поставленных ферзей.
*/
int placing(int row, int &N, int position[]) {

    // если поставили N - 1 ферзей на доску (отсчет у нас от 0), то это одна из возможных комбинаций.
    if (row == N) {
        return 1; // увеличиваем счетчик на 1, рекурсивно суммируя.
    }

    int num_of_comb = 0; // счетчик "успешных" комбинаций расстановки ферзей.

    // проходимся по всем i-ым строкам k-го столбца.
    for (int i = 0; i < N; i++) {
        // если isSafe вернет true, то клетка не бьется другими поставленными ферзями и ставим туда очередного ферзя.
        if (isSafe(i, row, position)) {
            position[row] = i; // сохраняем координаты клетки (i; k) в которую поставили нового ферзя в массив position[].
            num_of_comb += placing(row + 1, N, position); // рекурсивно вызываем ф-цию для следующего k+1-го столбца.
        }
    }

    return num_of_comb; // возращается количество "успешных" комбинаций расстановки ферзей.
}
