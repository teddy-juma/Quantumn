#include "Vector2D.h"


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
const Vector2D<T>& Vector2D<T>::operator +(const Vector2D& other) const{
    Vector2D& res(this->x + other.getX(), this->y + other.getY());
    return res;
}

template<class T>
const Vector2D<T>& Vector2D<T>::operator -(const Vector2D& other) const{
    Vector2D& res(this->x - other.getX(), this->y - other.getY());
    return res;
}

template<class T>
const Vector2D<T>& Vector2D<T>::operator *(const Vector2D& other) const{
    Vector2D& res(this->x * other.getX(), this->y*other.getY());
    return res;
}

template<class T>
const Vector2D<T>& Vector2D<T>::operator /(const Vector2D& other) const{
    Vector2D& res(this->x/other.getX(), this->y/other.getY());
    return res;
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
const Vector2D<T>& Vector2D<T>::operator *(float scalar) const{
    Vector2D& res(this->x*scalar, this->y*scalar);
    return res;
}

template<class T>
const Vector2D<T>& Vector2D<T>::operator /(float scalar) const{
    Vector2D& res((this->x / scalar), (this->y / scalar));
    return res;
}

template<class T>
inline const T Vector2D<T>::getMagnitudeFromOrigin(const Vector2D& other) const{
    return sqrt(pow(other.getX()) + pow(other.getY()));
}
