//
// Created by rhydi on 06/09/2026.
//
#include "library.h"
#include <iostream>

void testMultiplication();
void testDivision();
void testDivisionByZero();


int main() {

    testMultiplication();
    testDivision();
    testDivisionByZero();

}

void testMultiplication() {
    Vector3 v1(10, 5,7);
    double k = 5;

    Vector3 v2 = v1*k;
    Vector3 v3 = k*v1;

    std::cout << v2.getX() << " " << v2.getY() << " " << v2.getZ()<< std::endl;
    std::cout << v3.getX() << " " << v3.getY() << " " << v3.getZ()<< std::endl;


}


void testDivision() {

    Vector3 v1(10,20,30);
    double k = 5;

    Vector3 v2 = v1/k;

    std::cout<< v2.getX() << " " << v2.getY() << " " << v2.getZ() << std::endl;


}


void testDivisionByZero() {
    bool threwException = false;
    Vector3 v1(10,20,30);
    double k = 0;
    try {
        Vector3 v2 = v1/k;
    }
    catch (const std::domain_error& e){
        threwException = true;

    }

    if ( !threwException ) {
        throw std::runtime_error{"Vector3 division by zero did not throw"};
    }



}