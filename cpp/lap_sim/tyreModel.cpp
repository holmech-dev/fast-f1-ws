#include "tyreModel.hpp"

/********************
Program    - Lap Sim - Tyre Model Fnc
Maintainer - C.Holmes
File       - Program Header
Version    - 0
    - Release Notes:
        - Version 0   - Tyre model functions
********************/

TyreModel::TyreModel(double muInput, double stiffness) {
    mu = muInput;
    ks = stiffness;
}

double TyreModel::calculateVerticalLoad(double deltaZ) {
    return ks * deltaZ;
}

void TyreModel::calculateForces(double slipVx, double slipVy, 
                                double deltaZ, double& fX, double& fY) {
    double fZ = calculateVerticalLoad(deltaZ);

    fX = mu * fZ * slipVx;
    fY = mu * fZ * slipVy;

}