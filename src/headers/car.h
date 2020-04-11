#ifndef CAR_H
#define CAR_H

#include <vector>
#include <string>

#include "vehicule.h"

class car : public  vehicule
{
private:
    /* data */
    int nb_wheel = 4;
    int nb_seat = 5;


public:
    // constructeur
    car();

    // destructeur
    ~car();
    
    // autre fonctions

};

#endif // PROMO_H
