#pragma once
#include <iostream>
class Triangle //Абстрактный класс с 2умя чистыми виртуальными функциями, c переменными-членами и своим конструктором
{
protected:
    double m_side1, m_side2 = 1, m_angle = 1;
public:
    Triangle(double side1) : m_side1(side1) {}
    Triangle(double side1, double side2) : m_side1{ side1 }, m_side2(side2) {}
    Triangle(double side1, double side2, double angle) : m_side1{ side1 }, m_side2(side2), m_angle(angle) {}
    virtual double perimetr() = 0;
    virtual double area() = 0;
};