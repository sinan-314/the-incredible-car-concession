#ifndef MOTO_H
#define MOTO_H

#include <vector>
#include <string>

#include "vehicule.h"

class moto : public  vehicule
{
private:
    /* data */
    int nb_wheel = 2;
    int nb_seat = 2;

public:
    // constructeur
    moto();

    // destructeur
    ~moto();
    
    // autre fonctions

};

#endif // PROMO_H
