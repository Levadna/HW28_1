#pragma once
#include "Bird.h"
namespace Birds {
	namespace Domestic {
		class Chicken : public Bird {
		public:
			void makeSound() const override {
				std::cout << "Chicken: Kudkudah!\n";
			}
		};
		class Duck : public Bird {
		public:
			void makeSound() const override {
				std::cout << "Duck: Krya-krya!\n";
			}
		};
		class Eagle : public Bird {
		public:
			void makeSound() const override {
				std::cout << "Eagle: eagre cry!\n";
			}
		};
	}
}