/*
Однажды, разбирая старые книги на чердаке, школьник Вася нашёл англо-латинский словарь.
Английский он к тому времени знал в совершенстве, и его мечтой было изучить латынь.
Поэтому попавшийся словарь был как раз кстати.

К сожалению, для полноценного изучения языка недостаточно только одного словаря:
кроме англо-латинского необходим латинско-английский.
За неимением лучшего он решил сделать второй словарь из первого.

Как известно, словарь состоит из переводимых слов, к каждому из которых приводится несколько слов-переводов.
Для каждого латинского слова, встречающегося где-либо в словаре, Вася предлагает найти все его переводы
(то есть все английские слова, для которых наше латинское встречалось в его списке переводов),
и считать их и только их переводами этого латинского слова.

Помогите Васе выполнить работу по созданию латинско-английского словаря из англо-латинского.

Входные данные
В первой строке содержится единственное целое число N — количество английских слов в словаре.
Далее следует N описаний. Каждое описание содержится в отдельной строке,
в которой записано сначала английское слово, затем отделённый пробелами дефис (символ номер 45),
затем разделённые запятыми с пробелами переводы этого английского слова на латинский.
Переводы отсортированы в лексикографическом порядке.
Порядок следования английских слов в словаре также лексикографический.

Все слова состоят только из маленьких латинских букв, длина каждого слова не превосходит 15 символов.
Общее количество слов на входе не превышает 100000.

Выходные данные
В первой строке программа должна вывести количество слов в соответствующем данному латинско-английском словаре.
Со второй строки выведите сам словарь, в точности соблюдая формат входных данных.
В частности, первым должен идти перевод лексикографически минимального латинского слова,
далее — второго в этом порядке и т.д.
Внутри перевода английские слова должны быть также отсортированы лексикографически.

Sample Input:

3
apple - malum, pomum, popula
fruit - baca, bacca, popum
punishment - malum, multa
Sample Output:

7
baca - fruit
bacca - fruit
malum - apple, punishment
multa - punishment
pomum - apple
popula - apple
popum - fruit
 */

// Два дня жизни :3 два варианта

// Код который я пилил день не проходит 18 тест (огромное кол-во данных, а времени мало), но соответствует заданию (
/*
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <set>
#include <algorithm> // remove
using namespace std;

void tokenize (string & str, char delim, vector < string > &out){
    size_t start;
    size_t end = 0;

    while ((start = str.find_first_not_of (delim, end)) != string::npos){
        end = str.find (delim, start);
        out.push_back (str.substr (start, end - start));
    }
}

int main() {
  // put your code here
    int n;  // количество английских слов в словаре
    cin >> n >> ws; // ws модификатор потока ввода,
                    //удаляющий из него все разделительные символы в нашем случае "\n"
    map <string, vector <string> > words;
    set <string> latin_words;
    // apple - malum, pomum, popula
    // Заполнение
    for (int i = 0; i < n ; i++){
        // Считываем строку типа: слово - значение1, значение2, ..., значениеX
        string definition;
        getline(cin, definition);
        // Теперь сплитим её words[слово] = { "значение1", "значение2", ..., "значениеX" }
        // Получаем индекс "-" для удаления его из строки
        definition.erase(definition.find("-"), 2); // 2 удаляем пробел после "-"
        // Выпиливаем запятые
        definition.erase(std::remove(definition.begin(), definition.end(), ','), definition.end());

        // Пробел токен
        char space= ' ';
        vector <string> splited_definition;    // Разбитая строка
        tokenize(definition, space, splited_definition);

        // Заполняем англо-латинский словарь
        string key = splited_definition[0];
        // Удаляем ключ
        splited_definition.erase(splited_definition.begin());
        // Кладем ключ "key" :  значение vector <string>
        words.insert(pair<string, vector<string>>(key,splited_definition));
        // Заполняем отсортированный set латинских слов
        for (auto word : splited_definition){
            latin_words.insert(word);
        }

    }
    // Вывод
    cout << latin_words.size() << "\n";

    // Латинско - англ словарь
    map <string, vector <string> > latin_dict;
    for (auto key : latin_words){
        string translation = "";
        cout << key << " - ";
        for (auto eng_lt : words) {
            int count = 0;
            for (auto it : eng_lt.second) {
                if (count != eng_lt.second.size()) {
                    if (key == it){
                        translation = translation + eng_lt.first + ", ";
                        // Выводит по типу: malum - apple, punishment
                        // cout <<  translation_tmp;
                        count++;
                    }
                }
            }
        }
        // Выпиливаем заппятую в конце
        //translation.erase(std::remove(translation.end()- 1, translation.end(), ','), translation.end());
        translation.erase(std::remove(translation.end()-1, translation.end(), ' '), translation.end());
        translation.erase(std::remove(translation.end()-1, translation.end(), ','), translation.end());
        cout << translation;
        cout << "\n";
    }
    */

// Версия два
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main() {
    map<string, vector<string>> la_dict;

    // Получить количество записей в англо-латинском словаре.
    int n;
    cin >> n;

    // Обработка записей англо-латинского словаря по одной.
    for (int i = 0; i < n; i++) {
        string lat_word, eng_word;

        // Чтение английского слова и пропуск дефиса (дефис помещается вместо
        // латинского слова, значение которого будет получено позже.
        cin >> eng_word >> lat_word;

        // Повторять, пока список латинских слов не закончился.
        bool end = false;
        while (!end) {
            // Чтение латинского слова (вместе с запятыми, если есть).
            cin >> lat_word;

            // Обрезка запятых или отметка о конце списка латинских слов.
            if (lat_word[lat_word.length() - 1] == ',') {
                // Если в конце слова есть запятая, значит это слово не последнее.
                // Вырезать подстроку со словом, запятая больше не нужна.
                lat_word = lat_word.substr(0, lat_word.length() - 1);
            } else {
                // Если запятой в конце слова нет, значит это слово последнее в списке.
                end = true;
            }

            // Заполнение словаря lat -> eng.
            // Условия выполняются: английские слова расположены в словаре в
            // лексикографическом порядке, значит и в списке перевода они будут
            // следовать в таком же порядке. Порядок латинских слов не важен, т.к.
            // map сортируется по ключу.
            la_dict[lat_word].push_back(eng_word);
        }
    }

    // Количество записей в новом словаре.
    cout << la_dict.size() << endl;

    // Записи словаря в формате "СЛОВО - ПЕРЕВОД 1, ..., ПЕРЕВОД N".
    for (auto record : la_dict) {
        cout << record.first << " - ";
        for (size_t i = 0; i < record.second.size(); i++) {
            cout << record.second[i] << ((i + 1 < record.second.size()) ? ", " : "\n");
        }
    }

    return 0;
}