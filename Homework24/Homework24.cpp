#include <iostream>
#include <string>
using namespace std;

// Задача 2.
bool palindrom(string str);
// Задача 3.
string finde(string str);
// Задача 4.
string lastSym(string str, char sym);


int main() {
    setlocale(LC_ALL, "ru");
    string str;
    char sym;

    // Задача 1.
    cout << "\tЗадача 1.\nДанная строка:\nstr = ";
    str = "Rudyard Kipling «The Lovers’ Litany»:\n...Eyes of black—the throbbing keel\nMilky foam to left and right\nLittle whispers near the wheel\nIn the brilliant tropic night...";
    cout << str << endl;
    cout << "Введите символ: ";
    cin >> sym;
    string newStr;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == sym)
            newStr += str[i];
    }
    cout << "newStr = " << newStr << "\n\n";

    // Задача 2.
    cout << "\tЗадача 2.\nВведите слово: ";
    cin >> str;
    if (palindrom(str))
        cout << str << " - Является палиндромом!\n\n";
    else
        cout << str << " - НЕ является палиндромом!\n\n";

    // Задача 3.
    cout << "\tЗадача 3.\nДанная строка: ";
    str = "???,,,There is not room to swing a cat!!!...";
    cout << str << endl;
    cout << "Общее колличесво знаков = " << finde(str) << "\n\n";

    // Задача 4.
    cin.ignore();
    cout << "\tЗадача 4.\nВведите строку: ";
    getline(cin, str);
    cout << "Введите символ: ";
    cin >> sym;
    cout << "Подстрока с последнего введённого символа - " << lastSym(str, sym) << "\n\n";

    return 0;
}

// Задача 2. Вычесление палиндрома.
bool palindrom(string str) {
    string newS;
    for (int i = str.size() - 1; i >= 0; i--) {
        str[i] = tolower(str[i]);
        newS += str[i];
    }
    if (newS == str)
        return true;
    return false;
}

// Задача 3. Подсчет пробелов, запятых, точек, восклицательных и вопросительных знаков.
string finde(string str) {
    int count = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ',' || str[i] == '?' || str[i] == ' ' || str[i] == '.' || str[i] == '!')
            count++;
    }
    string countS = to_string(count);
    return countS;
}

// Задача 4. Последнее вхождение символа в строку и возврат подстроки.
string lastSym(string str, char sym) {
    string str2;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == sym)
            str2 = str.substr(i);
    }
    return str2;
}