//
// Created by Abdelhadi Hasnaoui on 12/04/2020.
//


#ifndef VEHICULE_HPP
#define VEHICULE_HPP

#include <vector>
#include <string>




class V_vehicule
{
protected:
    static int s_nb_moto;
    static int s_nb_cars;
    static int s_nb_vehicule;

public:
    V_vehicule();

    ~V_vehicule();

    static void showGarage(void);
};



#endif // PROMO_H
