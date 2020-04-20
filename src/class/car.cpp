#include "../headers/car.hpp"

Car::Car(){
    s_nb_cars++;
    s_nb_vehicule++;
}

Car::~Car(){
    s_nb_cars--;
    s_nb_vehicule--;
}