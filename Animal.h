#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal
{
public:
    Animal(std::string speciesName, unsigned int discoveryYear);

    Animal(std::string speciesName, float w, bool dangerous); 

    Animal();

    void display();

    std::string GetName();

    float GetWeight();

    bool GetDangerous();
private:
    std::string species;
    unsigned int year_discovered;
    float weight;
    bool dangerousness;
};

#endif
