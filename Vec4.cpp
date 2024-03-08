#include <iomanip>
#include "Vec4.h"

Vec4::Vec4()
{
    this->x = 0.0;
    this->y = 0.0;
    this->z = 0.0;
    this->t = 0.0;
    this->colorId = NO_COLOR;
}

Vec4::Vec4(double x, double y, double z, double t)
{
    this->x = x;
    this->y = y;
    this->z = z;
    this->t = t;
    this->colorId = NO_COLOR;
}

Vec4::Vec4(double x, double y, double z, double t, int colorId)
{
    this->x = x;
    this->y = y;
    this->z = z;
    this->t = t;
    this->colorId = colorId;
}

Vec4::Vec4(const Vec4 &other)
{
    this->x = other.x;
    this->y = other.y;
    this->z = other.z;
    this->t = other.t;
    this->colorId = other.colorId;
}

double Vec4::getNthComponent(int n)
{
    switch (n)
    {
    case 0:
        return this->x;

    case 1:
        return this->y;

    case 2:
        return this->z;

    case 3:
    default:
        return this->t;
    }
}

std::ostream &operator<<(std::ostream &os, const Vec4 &v)
{
    os << std::fixed << std::setprecision(6) << "[" << v.x << ", " << v.y << ", " << v.z << ", " << v.t << "]";
    return os;
}
Vec4 Vec4::operator=(const Vec4& other)
{
    this->x = other.x;
    this->y = other.y;
    this->z = other.z;
    this->t = other.t;
    this->colorId = other.colorId;

    return *this;
}
Vec4 Vec4::operator-(const Vec4 p1){
    Vec4 temp;
    temp.x = this->x-p1.x;
    temp.y = this->y-p1.y;
    temp.z = this->z-p1.z;
    temp.t = this->t;
    temp.colorId = this->colorId;
    return temp;
}

Vec4 Vec4::operator+(const Vec4 p1){
    Vec4 temp;
    temp.x = this->x+p1.x;
    temp.y = this->y+p1.y;
    temp.z = this->z+p1.z;
    temp.t = this->t;
    temp.colorId = this->colorId;
    return temp;
}