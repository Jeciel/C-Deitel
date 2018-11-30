#include "VectorR2.h"
#include <iostream>
#include <cmath>

VectorR2::VectorR2(float x, float y)
{
    setVector(x, y);
}

float VectorR2::getX()
{
    return x;
}

float VectorR2::getY()
{
    return y;
}

void VectorR2::setX(float x)
{
    this->x = x;
}

void VectorR2::setY(float y)
{
    this->y = y;
}

void VectorR2::setVector(float x, float y)
{
    setX(x);
    setY(y);
}

void VectorR2::imprimir()
{
    std::cout << "<" << getX() << " , " << getY() << ">";
}

VectorR2 VectorR2::suma(VectorR2 v1)
{
    return VectorR2(getX() + v1.getX(), getY()+v1.getY());
}

VectorR2 VectorR2::suma(VectorR2 v1, VectorR2 v2)
{
    return VectorR2(v1.getX() + v2.getX(), v1.getY() + v2.getY());
}

VectorR2 VectorR2::resta(VectorR2 v1)
{
    return VectorR2(getX() - v1.getX(), getY() - v1.getY());
}

VectorR2 VectorR2::resta(VectorR2 v1, VectorR2 v2)
{
    return VectorR2(v1.getX() - v2.getX(), v1.getY() - v2.getY());
}

float VectorR2::mult(VectorR2 v1, VectorR2 v2)
{
    return v1.getX() * v2.getX() + v1.getY() * v2.getY();
}

float VectorR2::mult(VectorR2 v1)
{
    return v1.getX()*getX() + v1.getY()*getY();
}

VectorR2 VectorR2::mult(float esc)
{
    return VectorR2(esc*getX(), esc*getY());
}

float VectorR2::norm(){
    return std::sqrt(std::pow(getX(), 2) + std::pow(getY(), 2));
}

float VectorR2::norm(VectorR2 v1){
    return std::sqrt(std::pow(v1.getX(), 2) + std::pow(v1.getY(), 2));
} 
