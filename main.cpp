#include <iostream>
#include <cmath>

using namespace std;

void task1() {
    cout << "\n=== Завдання 1: Корені квадратного рівняння (ax^2 + bx + c = 0) ===\n";
    double a, b, c;
    cout << "Введіть коефіцієнти a, b та c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "Рівняння має нескінченну кількість коренів.\n";
            } else {
                cout << "Рівняння не має розв'язків.\n";
            }
        } else {
            double x = -c / b;
            cout << "Це лінійне рівняння. Корінь: x = " << x << endl;
        }
    } else {
        double D = b * b - 4 * a * c;
        cout << "Дискримінант D = " << D << endl;

        if (D > 0) {
            double x1 = (-b + sqrt(D)) / (2 * a);
            double x2 = (-b - sqrt(D)) / (2 * a);
            cout << "Два дійсні корені:\nx1 = " << x1 << "\nx2 = " << x2 << endl;
        } else if (D == 0) {
            double x = -b / (2 * a);
            cout << "Один дійсний корінь: x = " << x << endl;
        } else {
            cout << "Дійсних коренів немає (дискримінант від'ємний).\n";
        }
    }
}

void task2() {
    cout << "\n=== Завдання 2: Перевірка на наявність від'ємного числа ===\n";
    double num1, num2, num3;
    cout << "Введіть три числа через пробіл: ";
    cin >> num1 >> num2 >> num3;

    if (num1 < 0 || num2 < 0 || num3 < 0) {
        cout << "Так, серед введених чисел є хоча б одне від'ємне.\n";
    } else {
        cout << "Ні, серед введених чисел немає від'ємних.\n";
    }
}

void task3() {
    cout << "\n=== Завдання 3: Порівняння a^2 та b^3 ===\n";
    double a, b;
    cout << "Введіть числа a та b: ";
    cin >> a >> b;

    double valA = a * a;
    double valB = b * b * b;

    cout << "a^2 = " << valA << endl;
    cout << "b^3 = " << valB << endl;

    if (valA > valB) {
        cout << "Найбільше значення має a^2 (" << valA << ").\n";
    } else if (valB > valA) {
        cout << "Найбільше значення має b^3 (" << valB << ").\n";
    } else {
        cout << "Значення a^2 та b^3 рівні між собою.\n";
    }
}

void task4() {
    cout << "\n=== Завдання 4: Назви місяців за номером пори року ===\n";
    int season;
    cout << "Введіть номер пори року (1 - Зима, 2 - Весна, 3 - Літо, 4 - Осінь): ";
    cin >> season;

    switch (season) {
        case 1:
            cout << "Зима: Грудень, Січень, Лютий\n";
            break;
        case 2:
            cout << "Весна: Березень, Квітень, Травень\n";
            break;
        case 3:
            cout << "Літо: Червень, Липень, Серпень\n";
            break;
        case 4:
            cout << "Осінь: Вересень, Жовтень, Листопад\n";
            break;
        default:
            cout << "Помилка: введено невірний номер (потрібно від 1 до 4).\n";
            break;
    }
}

void task5() {
    cout << "\n=== Завдання 5: Назва кольору за першою літерою (r, g, b, y) ===\n";
    char colorLetter;
    cout << "Введіть першу літеру кольору (r, g, b, y): ";
    cin >> colorLetter;

    switch (colorLetter) {
        case 'r':
        case 'R':
            cout << "Назва кольору: Red\n";
            break;
        case 'g':
        case 'G':
            cout << "Назва кольору: Green\n";
            break;
        case 'b':
        case 'B':
            cout << "Назва кольору: Blue\n";
            break;
        case 'y':
        case 'Y':
            cout << "Назва кольору: Yellow\n";
            break;
        default:
            cout << "Помилка: невідома літера. Допустимі: r, g, b, y.\n";
            break;
    }
}

int main() {
    int choice;
    do {
        cout << "\n====================================\n";
        cout << "       ОБЕРІТЬ НОМЕР ЗАВДАННЯ:\n";
        cout << "1 - Квадратне рівняння\n";
        cout << "2 - Перевірка від'ємного числа\n";
        cout << "3 - Порівняння a^2 та b^3\n";
        cout << "4 - Місяці за порами року\n";
        cout << "5 - Колір за літерою\n";
        cout << "0 - Вихід з програми\n";
        cout << "====================================\n";
        cout << "Ваш вибір: ";
        cin >> choice;

        switch (choice) {
            case 1: task1(); break;
            case 2: task2(); break;
            case 3: task3(); break;
            case 4: task4(); break;
            case 5: task5(); break;
            case 0: cout << "Завершення роботи програми.\n"; break;
            default: cout << "Некоректний вибір. Спробуйте ще раз.\n"; break;
        }
    } while (choice != 0);

    return 0;
}