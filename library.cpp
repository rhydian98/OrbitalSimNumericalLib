#include "library.h"

#include <cmath>

double Vector3::magnitude() const{

    double magnitudeSquared = std::pow(x, 2.0) + std::pow(y, 2.0) + std::pow(z, 2.0);

    double mag = std::sqrt(magnitudeSquared);

    return mag;



}
