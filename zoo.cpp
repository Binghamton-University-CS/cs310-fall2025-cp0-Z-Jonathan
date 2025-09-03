#include <iostream>
#include <stdlib.h>
#include "Animal.h"
#include "AnimalsInZoo.h"
using namespace std;

int main()
{
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);
   Animal animal3("Komodo Dragon", 1576);
   AnimalsInZoo animalsInZoo(animal3);

   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);

   animal3.display();
   animal2.display();
   animal1->display();
   animalsInZoo.display();

   delete animal1;
}
