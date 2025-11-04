#pragma once
#include <iostream>
#include <string>
namespace Animals {
	class Animal {
	public:
		virtual ~Animal() {}
		virtual void makeSound() const = 0;
	};
}