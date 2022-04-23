#include <iostream>
#include <string>
using namespace std;

// ������ 2.
bool palindrom(string str);
// ������ 3.
string finde(string str);
// ������ 4.
string lastSym(string str, char sym);


int main() {
    setlocale(LC_ALL, "ru");
    string str;
    char sym;

    // ������ 1.
    cout << "\t������ 1.\n������ ������:\nstr = ";
    str = "Rudyard Kipling �The Lovers� Litany�:\n...Eyes of black�the throbbing keel\nMilky foam to left and right\nLittle whispers near the wheel\nIn the brilliant tropic night...";
    cout << str << endl;
    cout << "������� ������: ";
    cin >> sym;
    string newStr;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == sym)
            newStr += str[i];
    }
    cout << "newStr = " << newStr << "\n\n";

    // ������ 2.
    cout << "\t������ 2.\n������� �����: ";
    cin >> str;
    if (palindrom(str))
        cout << str << " - �������� �����������!\n\n";
    else
        cout << str << " - �� �������� �����������!\n\n";

    // ������ 3.
    cout << "\t������ 3.\n������ ������: ";
    str = "???,,,There is not room to swing a cat!!!...";
    cout << str << endl;
    cout << "����� ���������� ������ = " << finde(str) << "\n\n";

    // ������ 4.
    cin.ignore();
    cout << "\t������ 4.\n������� ������: ";
    getline(cin, str);
    cout << "������� ������: ";
    cin >> sym;
    cout << "��������� � ���������� ��������� ������� - " << lastSym(str, sym) << "\n\n";

    return 0;
}

// ������ 2. ���������� ����������.
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

// ������ 3. ������� ��������, �������, �����, ��������������� � �������������� ������.
string finde(string str) {
    int count = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ',' || str[i] == '?' || str[i] == ' ' || str[i] == '.' || str[i] == '!')
            count++;
    }
    string countS = to_string(count);
    return countS;
}

// ������ 4. ��������� ��������� ������� � ������ � ������� ���������.
string lastSym(string str, char sym) {
    string str2;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == sym)
            str2 = str.substr(i);
    }
    return str2;
}