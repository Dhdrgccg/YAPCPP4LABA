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
        cout << "���������� ������ �����: " << "(" << x << " " << y << ")" << endl;
        return 0;
    }

    PoinT& operator=(const PoinT& other) {
        if (this == &other) {
            // �������� �� ����������������
            return *this;
        }
        // �������� ��������
        x = other.x;
        y = other.y;
        return *this;
    }

    PoinT operator+(int value) const {
        return PoinT(x + value, y); // ����������� ������ ���������� x
    }

    PoinT operator-(PoinT const& obj) {
        PoinT res;
        res.x = x - obj.x;
        res.y = y - obj.y;
        return res;
    }

    operator int() const {
        return static_cast<int>(x); // ���������� ����� ����� ���������� x
    }

    operator double() const {
        return static_cast<double>(y); // ���������� ����� ����� ���������� x
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

    PoinT Point1(x, y);
    PoinT Point2(x2, y2);

    Point1.GetPoint1();

    cout << 'n' << "����� �������������� ������� � 1 ������(1 - ++, 2 - --, 3 - double, 4 - int, 5 - + Point p, 6 - +): ";
    while (!(cin >> strini)) {
        cin.ignore();
        cin.clear();
        cout << "������ �����.";
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

        cout << "�������� ���������� ��� ����� p: " << endl;

        cout << "������� ���������� x ��� ����� p: ";
        while (!(cin >> x3)) {
            cin.ignore();
            cin.clear();
            cout << "������ �����.";
            break;
        }

        cout << "������� ���������� y ��� ����� p: ";
        while (!(cin >> y3)) {
            cin.ignore();
            cin.clear();
            cout << "������ �����.";
            break;
        }

        PoinT p(x3, y3);

        cout << "���������� ����� �������: " << Point1 - p;
    }
    if (strini == 6) {

        cout << "������� ����� �����: " << endl;
        while (!(cin >> dfg)) {
            cin.ignore();
            cin.clear();
            cout << "������ �����.";
            break;
        }
        Point1 = Point1 + dfg;
        cout << Point1 << endl;
    }

    Point2.GetPoint1();

    cout << 'n' << "����� �������������� ������� �� 2 ������(1 - ++, 2 - --, 3 - double, 4 - int, 5 - + Point p, 6 - +): ";
    while (!(cin >> strini)) {
        cin.ignore();
        cin.clear();
        cout << "������ �����.";
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

        cout << "�������� ���������� ��� ����� p: " << endl;

        cout << "������� ���������� x ��� 2 �����: ";
        while (!(cin >> x3)) {
            cin.ignore();
            cin.clear();
            cout << "������ �����.";
            break;
        }

        cout << "������� ���������� y ��� 2 �����: ";
        while (!(cin >> y3)) {
            cin.ignore();
            cin.clear();
            cout << "������ �����.";
            break;
        }

        PoinT p(x3, y3);

        cout << "���������� ����� �������: " << Point2 - p;
    }
    if (strini == 6) {

        cout << "������� ����� �����: " << endl;
        while (!(cin >> dfg)) {
            cin.ignore();
            cin.clear();
            cout << "������ �����.";
            break;
        }
        Point2 = Point2 + dfg;
        cout << Point2 << endl;
    }

    cout << "���������� ����� �������: " << Point1 - Point2;

    return 0;
}