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


};



#endif // PURNELLNUMERICAL_LIBRARY_H
