#pragma once
#include "Triangle.h"

class Straight_Line_Triangle final : public Triangle //Прямоугольный треугольник 
{
public:
    Straight_Line_Triangle(double side1, double side2) : Triangle(side1, side2) {}

    double perimetr() override
    {
        return sqrt(pow(m_side1, 2) + pow(m_side2, 2)) + m_side1 + m_side2; //m_side2-катет, m_side1-катет
    }

    double area() override
    {
        return m_side1 * m_side2 / 2;
    }

    ~Straight_Line_Triangle() {}

};