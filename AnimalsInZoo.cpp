#include <iostream>
#include <stdlib.h>
#include "AnimalsInZoo.h"
#include "Animal.h"
#include <string>

AnimalsInZoo::AnimalsInZoo(unsigned int initial_capacity) {
	if (initial_capacity == 0) {
		capacity(1);
		zoo(new Animal[1]);
	} else {
		capacity(initial_capacity);
		zoo(new Animal[initial_capacity]);
	}
	numAnimals(0);
	currStored(0);
}

AnimalsInZoo::AnimalsInZoo() : numAnimals(0), currStored(0), capacity(1), zoo(new Animal[1]) {};

void AnimalsInZoo::display()
{
    std::cout << numAnimals << std::endl;
    if (numAnimals == 1)
    {
        animal.display();
    }
}

bool AnimalsInZoo::store(Animal &another_animal)
{
	if (currStored == capacity) {
		makeSpace();
	}
	*(zoo + currStored) = another_animal;
	currStored++;
}

bool AnimalsInZoo::remove(const string& animal_name) {
	int i;
	Animal currAnimal;
	for (i = 0; i < currStored; i++) {
		currAnimal = *(zoo + i);
		if (currAnimal.GetName() == animal_name) {
			currAnimal = *(zoo + (currStored - 1));
			currStored--;
			return true;
		}
	}
	cout << "Animal " << animal_name << " not found." << endl;
	return false;
}	

Animal AnimalsInZoo::find(const string& animal_name) {
	int i;
	Animal currAnimal;
	for (i = 0; i < currStored; i++) {
		currAnimal = *(zoo + i);
		if (currAnimal.GetName() == animal_name) {
			return currAnimal;
		}
	}
	currAnimal = new Animal();
	return currAnimal;
}

void AnimalsInZoo::readSizes(unsigned int &count, unsigned int &capacity) {
	capacity = capacity;
	count = currStored;
}


void AnimalsInZoo::show() const {
	int i;
	Animal currAnimal;
	for (i = 0; i < currStored; i++) {
		currAnimal = *(zoo + i);
		cout << i << ": " << currAnimal.GetName() << ", " << currAnimal.GetWeight() << "lbs ";
		if (currAnimal.GetDangerous()) {
			cout << "be careful" << endl;
		}
	}
}

unsigned int AnimalsInZoo::makeSpace(unsigned int how_many=0) {
	int spacesAdded;
	if (how_many > 0) {
		spacesAdded = how_many;
		capacity = capacity + how_many;
	} else {
		spacesAdded = capacity;
		capacity = capacity * 2;
	}

	Animal* newArr = new Animal[capacity];
	for (int i = 0; i < currStored; i++) {
		*(newArr + i) = *(zoo + i);
	}
	zoo = newArr;

	return spacesAdded;
}
