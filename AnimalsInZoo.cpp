#include <iostream>
#include <stdlib.h>
#include "Animal.h"
#include "AnimalsInZoo.h"
using namespace std;

AnimalsInZoo::AnimalsInZoo(Animal a){
	numAnimals = 1;
	animal = a;
}

AnimalsInZoo::AnimalsInZoo() {
	numAnimals = 0;
}

void AnimalsInZoo::display() {
	cout << numAnimals << " ";
	if (numAnimals > 0) {
		animal.display();
	}
}

