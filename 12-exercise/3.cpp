#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Кол-во: ";
    cin >> n;

    if (n / 10 == 1)
        switch (n) {
        case 10:
            cout<<"десть учебных занятий.";
            break;
        case 11:
            cout << "одиннадцать учебных занятий.";
            break;
        case 12:
            cout << "двенадцать учебных занятий.";
            break;
        case 13:
            cout << "тринадцать учебных занятий.";
            break;
        case 14:
            cout << "четырнадцать учебных занятий.";
            break;
        case 15:
            cout << "пятнадцать учебных занятий.";
            break;
        case 16:
            cout << "шестнадцать учебных занятий.";
            break;
        case 17:
            cout << "семнадцать учебных занятий.";
            break;
        case 18:
            cout << "âîñåìíàäöàòü ó÷åáíûõ çàäàíèé.";
            break;
        case 19:
            cout << "äåâÿòíàäöàòü ó÷åáíûõ çàäàíèé.";
            break;
        }
    else {
        switch (n / 10) {
        case 2:
            cout << "двадцать ";
            break;
        case 3:
            cout << "тридцать ";
            break;
        case 4:
            cout << "сорок ";
            break;
        }

        switch (n % 10) {
        case 1:
            cout << "одно ";
            break;
        case 2:
            cout << "два ";
            break;
        case 3:
            cout << "три ";
            break;
        case 4:
            cout << "четыре ";
            break;
        case 5:
            cout << "пять ";
            break;
        case 6:
            cout << "шесть ";
            break;
        case 7:
            cout << "семь ";
            break;
        case 8:
            cout << "восемь ";
            break;
        case 9:
            cout << "девять ";
            break;
        }

        switch (n % 10) {
          case 0:
          case 5:
          case 6:
          case 7:
          case 8:
          case 9:
              cout << "учебных заданий.";
              break;
          case 1:
              cout << "учебное задание.";
              break;
          case 2:
          case 3:
          case 4:
              cout << "учебных задания.";
              break;
        }
    }
    return 0;
}
