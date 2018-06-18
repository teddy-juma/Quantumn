#ifndef _VECTOR2D_H
#define _VECTOR2D_H

#include <cmath>
#include <cstdlib>
template<class T>
class Vector2D{
    private:
        T x;
        T y;

    public:
        Vector2D(): x(T(0)), y(T(0)){} //initialize both x and y to 0
        Vector2D(const T& x, const T& y);

        //getters and setters
        const T& getX() const;
        void  setX(const T newX);

        const T& getY() const;
        void setY(const T newY);

        //simple vector arithmetic
        const Vector2D operator +(const Vector2D& other) const; // returns a new vector whose result is
        // this->x + other.x and this->y + other.y
        const Vector2D operator -(const Vector2D& other) const;
        const Vector2D operator *(const Vector2D& other) const;
        const Vector2D operator /(const Vector2D& other) const;
        const Vector2D operator +=(const Vector2D& other) const;
        const Vector2D operator -=(const Vector2D& other) const;
        const Vector2D operator *=(const Vector2D& other) const;
        const Vector2D operator /=(const Vector2D& other) const;

        const T& operator[] (int index) const;
        T& operator[] (int index);
        /*boolean operation such as if vector->
        are equal(in the same position)
        if they are close or far from each other
        */
        inline bool operator ==(const Vector2D& other) const;
        inline bool operator >=(const Vector2D& other) const;
        inline bool operator <=(const Vector2D& other) const;
        inline bool operator <(const Vector2D& other) const;
        inline bool operator >(const Vector2D& other) const;
        //scalar operations
        const Vector2D operator *(T) const;
        const Vector2D operator /(T)const;
        const Vector2D operator *=(T)const;
        const Vector2D operator /=(T)const;

        //get magnitude from origin(0,0)
        inline const T getMagnitudeFromOrigin() const;
 };
//float getMagnitude(const Vector2D pointA, const Vector2D pointB);

#endif