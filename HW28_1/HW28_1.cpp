#include <iostream>
#include <iostream>
#include <vector>
#include "Animal.h"
#include "Wild.h"
#include "Bird.h"
#include "Domestic.h"
using namespace std;
int main()
{
	std::vector<Animals::Animal*> zoo;
	zoo.push_back(new Animals::Wild::Lion());
	zoo.push_back(new Animals::Wild::Wolf());
	zoo.push_back(new Animals::Wild::Dog());
	zoo.push_back(new Birds::Domestic::Chicken());
	zoo.push_back(new Birds::Domestic::Duck());
	zoo.push_back(new Birds::Domestic::Eagle());
	for (auto animal : zoo)
		animal->makeSound();
	for (auto animal : zoo)
		delete animal;
}
