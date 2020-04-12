aucune erreur de compilation, mais erreur de linker. 

j'ai fait des recherche dessus mais je n'arrive toujours pas a comprendre d'ou vient-elle 

compilé sur UNIX (MacOS darwin kernel) en utilisant le compilateur g++

l'erreur est la suivante :

```
====================[ Build | the_incredible_car_concession | Debug ]===========
/Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake --build "/Users/abdelhadihasnaoui/OneDrive - Ynov/Y-nov/cpp-lang/project/Day05/the-incredible-car-concession/cmake-build-debug" --target the_incredible_car_concession -- -j 2
Scanning dependencies of target the_incredible_car_concession
[ 20%] Building CXX object CMakeFiles/the_incredible_car_concession.dir/src/class/vehicule.cpp.o
[ 40%] Linking CXX executable the_incredible_car_concession
Undefined symbols for architecture x86_64:
  "V_vehicule::s_nb_vehicule", referenced from:
      V_vehicule::showGarage() in vehicule.cpp.o
      moto::moto() in moto.cpp.o
      moto::~moto() in moto.cpp.o
      Car::Car() in car.cpp.o
      Car::~Car() in car.cpp.o
  "V_vehicule::s_nb_cars", referenced from:
      V_vehicule::showGarage() in vehicule.cpp.o
      Car::Car() in car.cpp.o
      Car::~Car() in car.cpp.o
  "V_vehicule::s_nb_moto", referenced from:
      V_vehicule::showGarage() in vehicule.cpp.o
      moto::moto() in moto.cpp.o
      moto::~moto() in moto.cpp.o
ld: symbol(s) not found for architecture x86_64
clang: error: linker command failed with exit code 1 (use -v to see invocation)
make[3]: *** [the_incredible_car_concession] Error 1
make[2]: *** [CMakeFiles/the_incredible_car_concession.dir/all] Error 2
make[1]: *** [CMakeFiles/the_incredible_car_concession.dir/rule] Error 2
make: *** [the_incredible_car_concession] Error 2
```

