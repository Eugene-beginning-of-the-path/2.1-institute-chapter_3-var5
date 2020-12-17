#pragma once
#include "Triangle.h"

class Equilateral_Triangle final : public Triangle //Равносторонний треугольник 
{
public:
    Equilateral_Triangle(double side1) : Triangle(side1) {}

    double perimetr() override
    {
        return m_side1 * 3; 
    }

    double area() override
    {
        return (pow(m_side1, 2) * sqrt(3)) / 4;
    }

};
