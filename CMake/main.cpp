#include <iostream> 
#include <cmath>
using namespace std; 
// Вариант 7 

int main() {
    setlocale(LC_ALL, "ru");
    // ПЕРВЫЙ ПУНКТ       <===== 
    int A, B, C;
    cout << "A = ";
    cin >> A;
    cout << "B = ";
    cin >> B;
    cout << "C = ";
    cin >> C;
    int res;
    if (A > 0 && B > 0 && C > 0) {
        if (A > B && B > C) {
            res = C - B - A;
            cout << "A > B и B > C, " << res << endl;
        }
        else if (A % C == 0) {
            res = A / C + B;
            cout << "A кратно C, " << res << endl;
        }
        else {
            res = A + B + C;
            cout << "НЕ (A > B и B > C), " << res << endl;
        }
    }
    else {
        cout << "Введите значение, которые больше нуля" << endl;
    }

    // ВТОРОЙ ПУНКТ      <===== 
    int N;

    cout << "Введите N< 50: ";
    cin >> N;

    bool G = N >= 50;
    switch (G) {
    case true:
        cout << "Ошибка! Введите число N согласно условию: N < 50!" << endl;
        break;
    }
    switch (N) {
    case 0:
    case 1:
    case 4:
    case 9:
    case 16:
    case 25:
    case 36:
    case 49:
        cout << "Введенное число является квадратом целого числа" << endl;
        break;
    default:
        cout << "Введенное число не является квадратом целого числа" << endl;
        break;
    }

    return 0;
}