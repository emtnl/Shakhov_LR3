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
    int year;
    cout << "Введите текущий год: ";
    cin >> year;
    cout << "Текущий год: " << year << endl;
}

void inputDaysToAdd() {
    int days;
    cout << "Введите количество дней для прибавления: ";
    cin >> days;
    cout << "Количество дней для прибавления: " << days << endl;
}

void calculateNewDate() {
    int day, month, year, daysToAdd;
    
   
    cout << "Введите текущую дату (день месяц год): ";
    cin >> day >> month >> year;
    cout << "Введите количество дней для прибавления: ";
    cin >> daysToAdd;

  
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        daysInMonth[1] = 29; 
    }

    
    day += daysToAdd;
    while (day > daysInMonth[month - 1]) {
        day -= daysInMonth[month - 1];
        month++;
        if (month > 12) {
            month = 1;
            year++;
     
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                daysInMonth[1] = 29;
            } else {
                daysInMonth[1] = 28;
            }
        }
    }

    cout << "Новая дата: " << day << "." << month << "." << year << endl;
}

void calculateDaysToNextYear() {
    
}