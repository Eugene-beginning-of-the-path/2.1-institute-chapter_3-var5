#include <iostream>
#include "Triangle.h"
#include "Equilateral_Triangle.h"
#include "Isosceles_Triangle.h"
#include "Straight_Line_Triangle.h"

using namespace std;

void work_with_Equilateral_Triangle();
void work_with_Isosceles_Triangle();
void work_with_Straight_Line_Triangle();

void menu_logic()
{
    setlocale(LC_ALL, "rus");
    char choose;
    cout << "Choose which of the triangles you want to work with: \n" <<
        "Enter:\n'E'-for Equilateral_Triangle\n'I'-for Isosceles_Triangle\n'S'-for Straight_Line_Triangle" << endl <<"Enter: ";
    cin >> choose;
    while (choose != 'E' && choose != 'I' && choose != 'S')
    {
        cout << "Mistake! Enter 'E', 'I' or 'S' to continue\n Enter: ";
        cin >> choose;
    }

    switch (choose)
    {
    case 'E':
        work_with_Equilateral_Triangle();
        break;

    case'I':
        work_with_Isosceles_Triangle();
        break;

    case'S':
        work_with_Straight_Line_Triangle();
        break;
    }
    
}

void work_with_Equilateral_Triangle()
{
    double side1;
    bool flag = true;
    while (flag)
    {
        cout << "\n---Equilateral Triangle---\n";
        cout << "Enter the side value= ";
        cin >> side1;
        while (side1 <= 0)
        {
            cout << "Enter a value greater than 0\n Enter: ";
            cin >> side1;
        }

        Equilateral_Triangle et(side1);
        Triangle* ptr = &et;
        cout << "Area of the triangle= " << ptr->area() << endl;
        cout << "Perimeter of the triangle= " << ptr->perimetr() << endl;
        cout << "-------------------------" << endl;
        cout << "Enter 0 to exit: ";
        cin >> flag;
    }
};

void work_with_Isosceles_Triangle()
{
    double side1, side2, angle;
    bool flag = true;
    while (flag)
    {
        cout << "\n---Isosceles Triangle---\n";
        cout << "Enter the first side value= ";
        cin >> side1;
        while (side1 <= 0)
        {
            cout << "Enter a value greater than 0\n Enter: ";
            cin >> side1;
        }

        cout << "Enter the second side value= ";
        cin >> side2;
        while (side2 <= 0)
        {
            cout << "Enter a value greater than 0\n Enter: ";
            cin >> side2;
        }

        cout << "Enter the angle value in degrees= ";
        cin >> angle;
        while (angle < 0 || 180 < angle)
        {
            cout << "Enter a value from 0 to 180\n Enter: ";
            cin >> angle;
        }

        Isosceles_Triangle it(side1, side2, angle);
        Triangle* ptr = &it;
        cout << "Area of the triangle= " << ptr->area() << endl;
        cout << "Perimeter of the triangle= " << ptr->perimetr() << endl;
        cout << "-------------------------" << endl;
        cout << "Enter 0 to exit: ";
        cin >> flag;
    }
};

void work_with_Straight_Line_Triangle()
{
    double side1, side2;
    bool flag = true;
    while (flag)
    {
        cout << "\n---Straight Line Triangle---\n";
        cout << "Enter the first side value= ";
        cin >> side1;
        while (side1 <= 0)
        {
            cout << "Enter a value greater than 0\n Enter: ";
            cin >> side1;
        }

        cout << "Enter the second side value= ";
        cin >> side2;
        while (side2 <= 0)
        {
            cout << "Enter a value greater than 0\n Enter: ";
            cin >> side2;
        }

        Straight_Line_Triangle lt(side1, side2);
        Triangle* ptr = &lt;
        cout << "Area of the triangle= " << ptr->area() << endl;
        cout << "Perimeter of the triangle= " << ptr->perimetr() << endl;
        cout << "-------------------------" << endl;
        cout << "Enter 0 to exit: ";
        cin >> flag;
    }
}