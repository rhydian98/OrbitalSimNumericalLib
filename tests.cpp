//
// Created by rhydi on 06/09/2026.
//
#include "library.h"
#include <iostream>
int main() {

    Vector3 v1(10, 5,7);
    double k = 5;

    Vector3 v2 = v1*k;
    Vector3 v3 = k*v1;

    std::cout << v2.getX() << " " << v2.getY() << " " << v2.getZ()<< std::endl;
    std::cout << v3.getX() << " " << v3.getY() << " " << v3.getZ()<< std::endl;



}