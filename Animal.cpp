#include <iostream>
#include <stdlib.h>
#include "Animal.h"
#include <string>

Animal::Animal(std::string speciesName, unsigned int discoveryYear)
{
    species = speciesName;
    year_discovered = discoveryYear;
}

Animal::Animal(std::string speciesName, float w, bool dangerous)
{
	species = speciesName;
	weight = w;
	dangerousness = dangerous;
}

Animal::Animal() : species(""), year_discovered(0) {};

void Animal::display()
{
    std::cout << species << " [" << year_discovered << "]" << std::endl;
}

std::string Animal::GetName() {
	return species;
}

float Animal::GetWeight() {
	return weight;
}

bool Animal::GetDangerous() {
	return dangerousness;
}

std::string species = "";
unsigned int year_discovered = 0;
weight = 0.0;
dangerousness = false;
