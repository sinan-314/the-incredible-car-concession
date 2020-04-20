#include <iostream>
#include "../headers/vehicule.hpp"

int V_vehicule::s_nb_moto = 0;
int V_vehicule::s_nb_cars = 0;
int V_vehicule::s_nb_vehicule = 0;

V_vehicule::V_vehicule(){
}

V_vehicule::~V_vehicule(){
}

void V_vehicule::showGarage() {
    std::cout << "le nombre de vehicules au total est de : " << s_nb_vehicule << ", dont " << s_nb_cars << " voiture et " << s_nb_moto << " moto " << std::endl;
}