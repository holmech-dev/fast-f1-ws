
/********************
Program    - Lap Sim - Tyre Model Class
Maintainer - C.Holmes
File       - Program Header
Version    - 0
    - Release Notes:
        - Version 0   - class structure for tyre model
********************/

#ifndef TYRE_MODEL_H
#define TYRE_MODEL_H

class TyreModel {
public:
    TyreModel(double mu, double stiffness);

    // Force calculation from slip velocities & Vertical Displacement
    void calculateForces(double slipVx, double slipVy, double deltaZ,
                         double& fX, double& fY);

private:
    double mu; // CoF
    double ks; // Vertical Tyre Stiffness (N/m)

    double calculateVerticalLoad(double deltaZ);
};

#endif // TYRE_MODEL_H