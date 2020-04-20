//
// Created by Abdelhadi Hasnaoui on 12/04/2020.
//


#include <iostream>

#include "../headers/vehicule.hpp"

using namespace std;

int V_vehicule::s_nb_moto = 0;
int V_vehicule::s_nb_cars = 0;
int V_vehicule::s_nb_vehicule = 0;


V_vehicule::V_vehicule()
{
}

V_vehicule::~V_vehicule()
{
}

void V_vehicule::showGarage() {
    cout << "le nombre de vehicules au total est de :" << s_nb_vehicule << ", dont " << s_nb_cars << "voiture et " << s_nb_moto << " moto " << endl;
}


