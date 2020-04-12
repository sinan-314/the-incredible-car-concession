//
// Created by Abdelhadi Hasnaoui on 12/04/2020.
//

#include "../headers/car.hpp"

Car::Car()
{
    s_nb_cars++;
    s_nb_vehicule++;
}

Car::~Car()
{
    s_nb_cars--;
    s_nb_vehicule--;
}
