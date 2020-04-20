#include "../headers/moto.hpp"

moto::moto() {
    s_nb_moto++;
    s_nb_vehicule++;
}

moto::~moto() {
    s_nb_moto--;
    s_nb_vehicule--;
}