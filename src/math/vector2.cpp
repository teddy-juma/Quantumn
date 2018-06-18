#include "vector2.h"


template<class T>
Vector2D<T>::Vector2D(const T& x, const T& y){
    this->x = x;
    this->y = y;
}
template<class T>
const T& Vector2D<T>::getX() const{
    return x;
}
template<class T>
void Vector2D<T>::setX(const T newX){
    x = newX;
}
template<class T>
void Vector2D<T>::setY(const T newY){
    y = newY;
}
template<class T>
const T& Vector2D<T>::getY() const{
    return y;
}
template<class T>
const Vector2D<T> Vector2D<T>::operator +(const Vector2D& other) const{
    Vector2D res(this->x + other.x, this->y + other.y);
    return res;
}

template<class T>
const Vector2D<T> Vector2D<T>::operator -(const Vector2D& other) const{
    Vector2D res(this->x - other.x, this->y - other.y);
    return res;
}

template<class T>
const Vector2D<T> Vector2D<T>::operator *(const Vector2D& other) const{
    Vector2D res(this->x * other.x, this->y*other.y);
    return res;
}

template<class T>
const Vector2D<T> Vector2D<T>::operator /(const Vector2D& other) const{
    return Vector2D(this->x/other.x, this->y/other.y);
}

template<class T>
inline bool Vector2D<T>::operator == (const Vector2D& other) const{
    return (this->x == other.x) && (this->y == other.y);
}

template<class T>
inline bool Vector2D<T>::operator >= (const Vector2D& other) const{
    return (this->x >= other.x) && (this->y >= other.y);
}

template<class T>
inline bool Vector2D<T>::operator <= (const Vector2D& other) const{
    return (this->x <= other.x) && (this->y <= other.y);
}

template<class T>
inline bool Vector2D<T>::operator > (const Vector2D& other) const{
    return (this->x > other.x) && (this->y > other.y);
}

template<class T>
inline bool Vector2D<T>::operator < (const Vector2D& other) const{
    return (this->x < other.x) && (this->y < other.y);
}

template<class T>
const Vector2D Vector2D<T>::operator *(T scalar) const{
    return Vector2D(this->x*scalar, this->y*scalar);
}

template<class T>
const Vector2D Vector2D<T>::operator /(T scalar) const{
    return Vector2D((this->x / scalar), (this->y / scalar));
}
template<class T>
const Vector2D<T>& Vector2D<T>::operator *= (T scalar) const{
    return *this = *this * scalar;
}
const Vector2D<T>& Vector2D<T>::operator /= (T scalar)const{
    return *this = *this / scalar;
}
template<class T>
inline const T Vector2D<T>::getMagnitudeFromOrigin() const{
    return sqrt(pow(this->getX(),2) + pow(this->getY(),2));
}
template<class T>
const T& Vector2D<T>::operator[] (int index) const{
    if(index < 0 || index > 1)return;
    switch(index){
        case 0:
            return x;
        case 1:
            return y;
    }
}
template<class T>
T& Vector2D<T>::operator[] (int index){
    if(index < 0 || index > 1)exit(1);
    switch(index){
        case 0:
            return x;
        case 1:
            return y;
    }
}