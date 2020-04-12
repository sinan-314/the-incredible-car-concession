#include <vector>
#include <iostream>

#include "../headers/vehicule.hpp"

using namespace std;


V_vehicule::V_vehicule()
{
    s_nb_vehicule++;
}

V_vehicule::~V_vehicule() {

}

void V_vehicule::showGarage() {
    cout << "le nombre de vehicules au total est de :" << s_nb_vehicule << ", dont " << s_nb_cars << "voiture et " << s_nb_moto << " moto " << endl;
}


