#include "library.h"

#include <cmath>
#include <stdexcept>

double Vector3::magnitude() const{

    double magnitudeSquared = std::pow(x, 2.0) + std::pow(y, 2.0) + std::pow(z, 2.0);

    double mag = std::sqrt(magnitudeSquared);

    return mag;



}

Vector3 operator+(const Vector3& v1, const Vector3 & v2 ) {

    double x = v1.x + v2.x;
    double y = v1.y + v2.y;
    double z = v1.z + v2.z;

    Vector3 v3 = Vector3(x,y,z);

    return v3;

}

Vector3 operator-(const Vector3 & v1, const Vector3 & v2) {

    double x = v1.x - v2.x;
    double y = v1.y - v2.y;
    double z = v1.z - v2.z;


    Vector3 v3 (x,y,z);

    return v3;


}

Vector3 operator*(const Vector3& v, double k) {

    double x = v.x*k;
    double y = v.y*k;
    double z = v.z*k;

    Vector3 v1(x,y,z);
    return v1;


}

Vector3 operator*(double k, const Vector3& v) {

    Vector3 v1 = v*k;
    return v1;


}

Vector3 operator/(const Vector3& v1, double k){

    if (k == 0) {
        throw std::domain_error("Cannot divide Vector3 by zero");
    }

    double x = v1.x / k;
    double y = v1.y / k;
    double z = v1.z / k;

    Vector3 v2(x,y,z);

    return v2;


}



double dot(const Vector3& v1, const Vector3& v2) {

    double x = v1.x * v2.x;
    double y = v1.y * v2.y;
    double z = v1.z * v2.z;

    return x + y + z;





}

Vector3 cross(const Vector3& v1, const Vector3& v2) {
    double x = (v1.y*v2.z)-(v1.z*v2.y);
    double y = (v1.z*v2.x)-(v1.x*v2.z);
    double z = (v1.x*v2.y)-(v1.y*v2.x);

    Vector3 v3(x,y,z);

    return v3;


}


Vector3 Vector3::normalise() const{

    double magV = magnitude();

    if (magV == 0) {
        throw(std::domain_error("Magnitude can't be 0"));

    }

    Vector3 normal = *this/magV;

    return normal;

}


