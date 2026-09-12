//
// Created by rhydi on 06/09/2026.
//
#include "library.h"
#include "specific_angular_momentum.h"
#include <iostream>

void testMultiplication();
void testDivision();
void testDivisionByZero();
void testNormalisation();
void zeroVectorNormalisationTest();
void testSpecificAngularMomentum();
int main() {

    testMultiplication();
    testDivision();
    testDivisionByZero();
    testNormalisation();
    zeroVectorNormalisationTest();
    testSpecificAngularMomentum();
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

void testNormalisation(){

    Vector3 v(5,10,15);

    Vector3 v1 = v.normalise();

    if (std::abs(v1.magnitude()-1.0) > 1e-12) {

        std::cout << v1.magnitude()<< " Magnitude of normalised vector not 1" << std::endl;

    }


}

void zeroVectorNormalisationTest() {
    bool threwException = false;
    Vector3 v(0,0,0);
    try {
        v = v.normalise();
    }catch (const std::domain_error& e){
        threwException = true;

    }

    if (!threwException) {

        throw std::runtime_error{"Did not throw exception to normalising a 0 Vector"};

    }



}

void testSpecificAngularMomentum() {
    Vector3 r1(1,0,0);
    Vector3 r2(7'000'000,0,0);
    Vector3 v1(0,1,0);
    Vector3 v2(0,7'500,0);

    Vector3 h1 = specific_angular_momentum(r1,v1);
    Vector3 h2 = specific_angular_momentum(r2,v2);

    if (h1.getX() != 0 || h1.getY() != 0 || h1.getZ() != 1) {

        throw std::runtime_error{"Specific angular momentum Test 1 Failed: Result incorrect"};

    }

    if (h2.getX() != 0 || h2.getY() != 0 || h2.getZ() != 5.25e10) {

        throw std::runtime_error{"Specific angular momentum Test 2 Failed: result incorrect"};

    }


}
