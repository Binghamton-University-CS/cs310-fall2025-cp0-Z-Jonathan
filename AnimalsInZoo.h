#ifndef ANIMALSINZOO_H
#define ANIMALSINZOO_H
#include "Animal.h"

#include <string>

class AnimalsInZoo
{
public:
    AnimalsInZoo(Animal animal);

    AnimalsInZoo();

    void display();

private:
    Animal animal;
    unsigned int numAnimals;
};

#endif
