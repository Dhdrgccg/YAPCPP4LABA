#pragma once
#include <iostream>
using namespace std;

class Point {

private:
    double x;
    double y;

public:
    Point(double X = 0, double Y = 0) {
        x = X;
        y = Y;
    }

    int GetPoint1() {
        cout << "���������� ������ �����: " << "(" << x << " " << y << ")" << endl;
        return 0;
    }

    Point operator-(Point const& obj) {
        Point res;
        res.x = x - obj.x;
        res.y = y - obj.y;
        return res;
    }

    friend std::ostream& operator<< (std::ostream& out, const Point& point);

};

ostream& operator<< (std::ostream& out, const Point& point)
{
    out << "���������� ����� �������(" << point.x << ", " << point.y << ')';
    return out;
}

int No1()
{
    setlocale(LC_ALL, "Russian");
    wcout.imbue(std::locale("ru_RU.UTF-8"));

    double x;
    double y;
    double x2;
    double y2;

    cout << "������� ���������� x ��� 1 �����: ";
    while (!(cin >> x)) {
        cin.ignore();
        cin.clear();
        cout << "������ �����.";
        break;
    }

    cout << "������� ���������� y ��� 1 �����: ";
    while (!(cin >> y)) {
        cin.ignore();
        cin.clear();
        cout << "������ �����.";
        break;
    }

    cout << "������� ���������� x ��� 2 �����: ";
    while (!(cin >> x2)) {
        cin.ignore();
        cin.clear();
        cout << "������ �����.";
        break;
    }

    cout << "������� ���������� y ��� 2 �����: ";
    while (!(cin >> y2)) {
        cin.ignore();
        cin.clear();
        cout << "������ �����.";
        break;
    }

    Point Point1(x, y);
    Point Point2(x2, y2);
    Point1.GetPoint1();
    Point2.GetPoint1();
    cout << Point1 - Point2;

    return 0;
}