#pragma once
#include "Animal.h"
namespace Animals {
	namespace Wild {
		class Wolf : public Animal {
		public:
			void makeSound() const override {
				std::cout << "Wolf: Ayyyy!\n";
			}
		};
		class Dog : public Animal {
		public:
			void makeSound() const override {
				std::cout << "Dog: Gav-gav!\n";
			}
		};
		class Lion : public Animal {
		public:
			void makeSound() const override {
				std::cout << "Lion: Rrrr!\n";
			}
		};
	}
}