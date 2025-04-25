#include <iostream>
using namespace std;
void inputCurrentDay();
void inputCurrentMonth();
void inputCurrentYear();
void inputDaysToAdd();
void calculateNewDate();
void calculateDaysToNextYear();

int main() {
    int choice;

    do {
       
        cout << "\nМеню:\n";
        cout << "1. Ввести текущий день\n";
        cout << "2. Ввести текущий месяц\n";
        cout << "3. Ввести текущий год\n";
        cout << "4. Ввести количество дней длSя прибавления\n";
        cout << "5. Вычислить новую дату после прибавления дней\n";
        cout << "6. Найти разницу в днях до 1 января следующего года\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт меню: ";
        cin >> choice;

        switch (choice) {
            case 1:
                inputCurrentDay();
                break;
            case 2:
                inputCurrentMonth();
                break;
            case 3:
                inputCurrentYear();
                break;
            case 4:
                inputDaysToAdd();
                break;
            case 5:
                calculateNewDate();
                break;
            case 6:
                calculateDaysToNextYear();
                break;
            case 0:
                cout << "Выход из программы.\n";
                break;
            default:
                cout << "Неверный выбор! Попробуйте снова.\n";
        }
    } while (choice != 0);

    return 0;
}


void inputCurrentDay() {
    int day;
    cout << "Введите текущий день: ";
    cin >> day;
    cout << "Текущий день: " << day << endl;
}

void inputCurrentMonth() {
    int month;
    cout << "Введите текущий месяц: ";
    cin >> month;
    cout << "Текущий месяц: " << month << endl;
}

void inputCurrentYear() {
    
}

void inputDaysToAdd() {
    
}

void calculateNewDate() {
    
}

void calculateDaysToNextYear() {
    
}