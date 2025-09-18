#ifndef ANIMALSINZOO_H
#define ANIMALSINZOO_H
#include "Animal.h"

#include <string>

class AnimalsInZoo
{
public:
    AnimalsInZoo(unsigned int initial_capacity);

    AnimalsInZoo();

    void display();

    bool store(Animal &another_animal);

    bool remove(const std::string& animal_name);

    Animal find(const std::string& animal_name);

    void readSizes(unsigned int &count, unsigned int &capacity);

    void show() const;

    unsigned int makeSpace(unsigned int how_many=0);
private:
    unsigned int numAnimals;
    Animal* zoo;
    unsigned int capacity;
    unsigned int currStored;
};

#endif
