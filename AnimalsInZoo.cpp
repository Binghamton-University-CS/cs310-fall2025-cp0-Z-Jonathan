#include <iostream>
#include <stdlib.h>
#include "AnimalsInZoo.h"
#include "Animal.h"
#include <string>

AnimalsInZoo::AnimalsInZoo(Animal animal) : animal(animal), numAnimals(1) {};

AnimalsInZoo::AnimalsInZoo() : numAnimals(0) {};

void AnimalsInZoo::display()
{
    std::cout << numAnimals << std::endl;
    if (numAnimals == 1)
    {
        animal.display();
    }
}
