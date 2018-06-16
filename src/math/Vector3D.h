/*
MIT License

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
SOFTWARE.
*/

#ifndef VECTOR3D_H
#define VECTOR3D_H
#include "math.h" 
#include <cassert>

template<typename T>
class Vector3D{
    private:
        T x;
        T y;
        T z;

    public:
        Vector3D();
        Vector3D(const T& x, const T& y, const T& z);

        //getter and setters
        const T& getX() const;
        void setX(const T& newX);

        const T& getY() const;
        void setY(const T& newY);

        const T& getZ() const;
        void setZ(const T& newZ);

        const T& operator[] (size_t index) const;
        T& operator[] (size_t index);

        //Considering vectors as matrices with one row
        //const T& operator() (unsigned int column) const;
        //T& operator() (unsigned int column);

        const Vector3D operator+ (const Vector3D& other) const;
        Vector3D& operator+= (const Vector3D& other);

        const Vector3D operator- () const;

        const Vector3D operator- (const Vector3D& other) const;
        Vector3D& operator -= (const Vector3D& other);
        
        //Multiplication by a scalaar
        const Vector3D operator* (const T& scalar) const;
        Vector3D& operator*= (const T& scalar);

        //Multiply by 1/scalar
        const Vector3D operator/ (const T& scalar) const;
        Vector3D& operator/= (const T& scalar);

        //Calculate the dot/inner/scalar product
        const T operator* (const Vector3D& other) const;

        //Calculate the cross/outer/vector product
        const Vector3D operator%(const Vector3D& other) const;
        Vector3D& operator%= (const Vector3D& other);

        bool operator== (const Vector3D& other) const;
        //!Calculate the magnitude of a vector;
        const T getLen() const;

        //Return a vector with the same orientation but with a length of 1
        //Similar to getting the normal
        const Vector3D getUnit() const;
        void tests() const;
};
#endif
