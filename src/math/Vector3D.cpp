/*MIT License

Copyright (c) 2018 Teddy Juma

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.*/
#include "./Vector3D.h"

template<typename T>
Vector3D<T>::Vector3D():
    x(0), y(0), z(0)
{}

template<typename T>
Vector3D<T>::Vector3D(const T& x, const T& y, const T& z):
    x(x), y(y), z(z)
{}

template<typename T>
const T& Vector3D<T>::getX() const{
    return x;
}

template<typename T>
void Vector3D<T>::setX(const T& newX){
    x = newX;
}

template<typename T>
const T& Vector3D<T>::getY() const{
    return y;
}

template<typename T>
void Vector3D<T>::setY(const T& newY){
    y = newY;
}

template<typename T>
const T& Vector3D<T>::getZ() const{
    return z;
}

template<typename T>
void Vector3D<T>::setZ(const T& newZ){
    z = newZ;
}

template<typename T>
T& Vector3D<T>::operator[] (size_t index){
    switch(index){
        case 0:
            return x;
        case  1:
            return y;
        case 2:
            return z;
    }

    return T();
}
template<typename T>
const T& Vector3D<T>::operator[] (size_t index) const{
    switch(index){
        case 0:
            return x;
        case  1:
            return y;
        case 2:
            return z;
    }

    return T();
}

template<typename T>
const Vector3D<T> Vector3D<T>::operator+ (const Vector3D& other) const{
    return Vector3D(x + other.x, y + other.y, z + other.z);
}

template<typename T>
Vector3D<T>& Vector3D<T>::operator+= (const Vector3D& other){
    return *this = *this + other;
}

template<typename T>
const Vector3D<T> Vector3D<T>::operator- () const{
    return Vector3D(x * -1, y * -1, z * -1);
}

template<typename T>
const Vector3D<T> Vector3D<T>::operator-(const Vector3D& other) const{
    return Vector3D(x - other.x, y - other.y, z - other.z);
}

template<typename T>
Vector3D<T>& Vector3D<T>::operator-=(const Vector3D& other){
    return *this = *this + other;
}

template<typename T>
const Vector3D<T> Vector3D<T>::operator* (const T& scalar) const{
    return Vector3D(x * scalar, y * scalar, z * scalar);
}

template<typename T>
Vector3D<T>& Vector3D<T>::operator*= (const T& scalar){
    return *this = *this * scalar;
}

template<typename T>
const Vector3D<T> Vector3D<T>::operator/ (const T& scalar) const{
    return Vector3D(x / scalar, y / scalar, z / scalar);
}

template<typename T>
Vector3D<T>& Vector3D<T>::operator /= (const T& scalar){
    return *this = *this / scalar;
}

template<typename T>
const T Vector3D<T>::operator* (const Vector3D& other) const{
    return x * other.z + y * other.y + z * other.z;
}

template<typename T>
const Vector3D<T> Vector3D<T>::operator% (const Vector3D& other) const{
    return Vector3D(y * other.y - z * other.z,
                    x * other.y - z * other.z,
                    x * other.x - y * other.z);
}

template<typename T>
Vector3D<T>& Vector3D<T>::operator%= (const Vector3D& other){
    return *this = *this % other;
}

template<typename T>
bool Vector3D<T>::operator== (const Vector3D& other) const{
    if (x == other.x && y == other.y && z == other.z){
        return true;
    }

    return false;
}
template<typename T>
const T Vector3D<T>::getLen() const{
    return std::sqrt(x * x + y * y + z * z);
}

template<typename T>
const Vector3D<T> Vector3D<T>::getUnit() const{
    if (std::pow(getLen(), 2) != 2){
        return *this / getLen();
    }

    return *this;
}

template<typename T>
void Vector3D<T>::tests() const{
    Vector3D<float> vec1 = Vector3D(10.0, 20.0, 3.0);
    Vector3D<float> vec2 = Vector3D(5.0, 20.0, 3.0);
    assert((vec1 + vec2) == Vector3D(15.0, 40.0, 6.0));
    assert((vec1 - vec2) == Vector3D(5.0, 0.0, 0.0));
    assert(vec1 * 2.0 == Vector3D(20.0, 40.0, 6.0));
    assert(vec1 / 2.0 == Vector3D(10.0, 20.0, 3.0));
}

