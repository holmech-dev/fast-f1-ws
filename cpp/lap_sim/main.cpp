#include "iostream"
#include "tyreModel.hpp"
#include "tyreModel.cpp"

/********************
Program    - Test
Maintainer - C.Holmes
File       - Main Program
Version    - 0
    - Release Notes:
        - Version 0   - Program Test Structure
            -- build -> g++ main.cpp -o main.out
            -- run   -> ./main.out
********************/

int main() {
    std::cout << "Main Lap Sim Program Entrypoint..." << std::endl;

    double mu = 1.0;                // Same for both Fx and Fy
    double stiffness = 200000.0;    // N/m

    TyreModel tyre(mu, stiffness);

    //Inputs
    double slipVx = 0.02;
    double slipVy = 0.01;
    double deltaZ = 0.005;

    double fX = 0.0, fY = 0.0;
    tyre.calculateForces(slipVx, slipVy, deltaZ, fX, fY);

    std::cout << "Fx --->: " << fX << std::endl;
    std::cout << "Fy --->: " << fY << std::endl;
}