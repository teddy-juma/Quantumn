#ifndef VECTOR3D_H
#define VECTOR3D_H

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

        const T& operator[] (unsigned int index) const;
        T& operator[] (unsigned int index);

        //Considering vectors as matrices with one row
        const T& operator() (unsigned int column) const;
        T& operator() (unsigned int column);

        const Vector3D operator+ (const Vector3D& other) const;
        Vector3D& operator+= (const Vector3D& other);

        const Vector3D operator- () const;

        const Vector3D operator- (const Vector3D& other) const;
        Vector3D& operator -= (const Vector3D& other);
        
        //Multiplication by a scalaar
        const Vector3D operator* (const T& scalar) const;
        Vector3D& operator*= (const T& scalara);

        //Multiply by 1/scalar
        const Vector3D operator/ (const T& scalar) const;
        Vector3D& operator/= (const T& scalar);

        //Calculate the dot/inner/scalar product
        const T operator* (const Vector3D& other) const;

        //Calculate the cross/outer/vector product
       const Vector3D& operator%(const Vector3D& other) const;
       Vector3D& operator%= (const Vector3D& other);

       //git test push

};

#endif
