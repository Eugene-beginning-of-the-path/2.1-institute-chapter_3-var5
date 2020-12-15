#pragma once
#include "Triangle.h"

class Isosceles_Triangle final : public Triangle //Равнобедренный треугольник 
{
public:
    Isosceles_Triangle(double side1, double side2, double angle) : Triangle(side1, side2, angle) {}

    double perimetr() override
    {
        return m_side1 + m_side1 * 2;
    }

    double area() override
    {
        return   m_side1 / 2 * m_side2 * sin(m_angle * 3.14 / 180); //m_side1, m_side2-катеты и m_angle-угол между ними
    }

    ~Isosceles_Triangle() {}
};