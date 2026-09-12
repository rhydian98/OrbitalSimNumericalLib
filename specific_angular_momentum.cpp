//
// Created by rhydian on 12/09/2026.
//
#include "specific_angular_momentum.h"
#include "library.h"

Vector3 specific_angular_momentum(const Vector3 &r, const Vector3 &v) {
    return cross(r,v);

}



