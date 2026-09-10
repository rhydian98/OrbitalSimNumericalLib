#ifndef PURNELLNUMERICAL_LIBRARY_H
#define PURNELLNUMERICAL_LIBRARY_H

class Vector3 {
private:
    double x, y, z;

public:
    Vector3(double x, double y, double z)
    :x(x),
     y(y),
     z(z)

    {



    }

    double getX() const{
        return x;
    }

    double getY() const{
        return y;
    }

    double getZ() const{
        return z;
    }

    double magnitude() const;

    Vector3 addV(Vector3 v1, Vector3 v2) const;

    friend Vector3 operator+(const Vector3 & v1, const Vector3 & v2);
    friend Vector3 operator-(const Vector3 & v1, const Vector3 & v2);
    friend Vector3 operator*(const Vector3& v, double k);
    friend Vector3 operator*(double k, const Vector3& v);
    friend double dot(const Vector3& v1, const Vector3& v2);
    friend Vector3 cross(const Vector3& v1, const Vector3& v2);



};



#endif // PURNELLNUMERICAL_LIBRARY_H
