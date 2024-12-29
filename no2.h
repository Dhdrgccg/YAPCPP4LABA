#pragma once
#include <iostream>
using namespace std;

class PoinT {

private:
    double x;
    double y;

public:
    PoinT(double X = 0, double Y = 0) {
        x = X;
        y = Y;
    }

    int GetPoint1() {
        cout << "Координаты первой точки: " << "(" << x << " " << y << ")" << endl;
        return 0;
    }

    PoinT& operator=(const PoinT& other) {
        if (this == &other) {
            // Проверка на самоприсваивание
            return *this;
        }
        // Копируем значения
        x = other.x;
        y = other.y;
        return *this;
    }

    PoinT operator+(int value) const {
        return PoinT(x + value, y); // Увеличиваем только координату x
    }

    PoinT operator-(PoinT const& obj) {
        PoinT res;
        res.x = x - obj.x;
        res.y = y - obj.y;
        return res;
    }

    operator int() const {
        return static_cast<int>(x); // Возвращаем целую часть координаты x
    }

    operator double() const {
        return static_cast<double>(y); // Возвращаем целую часть координаты x
    }

    PoinT operator++(int) {
        PoinT temp = *this;
        temp.x += 1;
        return temp;
    }

    PoinT operator--(int) {
        PoinT temp = *this;
        temp.x -= 1;
        return temp;
    }

    friend ostream& operator<< (ostream& out, const PoinT& point);

};

ostream& operator<< (ostream& out, const PoinT& point)
{
    out << "(" << point.x << ", " << point.y << ')';
    return out;
}

int No2()
{
    setlocale(LC_ALL, "Russian");
    wcout.imbue(std::locale("ru_RU.UTF-8"));

    double x;
    double y;
    double x2;
    double y2;
    int dfg;
    int strini;

    cout << "Введите координату x для 1 точки: ";
    while (!(cin >> x)) {
        cin.ignore();
        cin.clear();
        cout << "Ошибка ввода.";
        break;
    }

    cout << "Введите координату y для 1 точки: ";
    while (!(cin >> y)) {
        cin.ignore();
        cin.clear();
        cout << "Ошибка ввода.";
        break;
    }

    cout << "Введите координату x для 2 точки: ";
    while (!(cin >> x2)) {
        cin.ignore();
        cin.clear();
        cout << "Ошибка ввода.";
        break;
    }

    cout << "Введите координату y для 2 точки: ";
    while (!(cin >> y2)) {
        cin.ignore();
        cin.clear();
        cout << "Ошибка ввода.";
        break;
    }

    PoinT Point1(x, y);
    PoinT Point2(x2, y2);

    Point1.GetPoint1();

    cout << 'n' << "Какие преобразования сделать с 1 точкой(1 - ++, 2 - --, 3 - double, 4 - int, 5 - + Point p, 6 - +): ";
    while (!(cin >> strini)) {
        cin.ignore();
        cin.clear();
        cout << "Ошибка ввода.";
        break;
    }
    if (strini == 1) {
        Point1 = Point1++;
        cout << Point1 << endl;
    }
    if (strini == 2) {
        Point1 = Point1--;
        cout << Point1 << endl;
    }
    if (strini == 3) {
        cout << (int)Point1 << endl;
    }
    if (strini == 4) {
        cout << (double)Point1 << endl;
    }
    if (strini == 5) {
        double x3;
        double y3;

        cout << "Напишите координаты для точки p: " << endl;

        cout << "Введите координату x для точки p: ";
        while (!(cin >> x3)) {
            cin.ignore();
            cin.clear();
            cout << "Ошибка ввода.";
            break;
        }

        cout << "Введите координату y для точки p: ";
        while (!(cin >> y3)) {
            cin.ignore();
            cin.clear();
            cout << "Ошибка ввода.";
            break;
        }

        PoinT p(x3, y3);

        cout << "Расстояние между точками: " << Point1 - p;
    }
    if (strini == 6) {

        cout << "Введите целое число: " << endl;
        while (!(cin >> dfg)) {
            cin.ignore();
            cin.clear();
            cout << "Ошибка ввода.";
            break;
        }
        Point1 = Point1 + dfg;
        cout << Point1 << endl;
    }

    Point2.GetPoint1();

    cout << 'n' << "Какие преобразования сделать со 2 точкой(1 - ++, 2 - --, 3 - double, 4 - int, 5 - + Point p, 6 - +): ";
    while (!(cin >> strini)) {
        cin.ignore();
        cin.clear();
        cout << "Ошибка ввода.";
        break;
    }
    if (strini == 1) {
        Point2 = Point2++;
        cout << Point2 << endl;
    }
    if (strini == 2) {
        Point2 = Point2--;
        cout << Point2 << endl;
    }
    if (strini == 3) {
        cout << (int)Point2 << endl;
    }
    if (strini == 4) {
        cout << (double)Point2 << endl;
    }
    if (strini == 5) {
        double x3;
        double y3;

        cout << "Напишите координаты для точки p: " << endl;

        cout << "Введите координату x для 2 точки: ";
        while (!(cin >> x3)) {
            cin.ignore();
            cin.clear();
            cout << "Ошибка ввода.";
            break;
        }

        cout << "Введите координату y для 2 точки: ";
        while (!(cin >> y3)) {
            cin.ignore();
            cin.clear();
            cout << "Ошибка ввода.";
            break;
        }

        PoinT p(x3, y3);

        cout << "Расстояние между точками: " << Point2 - p;
    }
    if (strini == 6) {

        cout << "Введите целое число: " << endl;
        while (!(cin >> dfg)) {
            cin.ignore();
            cin.clear();
            cout << "Ошибка ввода.";
            break;
        }
        Point2 = Point2 + dfg;
        cout << Point2 << endl;
    }

    cout << "Расстояние между точками: " << Point1 - Point2;

    return 0;
}