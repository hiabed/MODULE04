#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(std::string newType);
    Animal(const Animal &other);
    Animal &operator=(const Animal &other);
    virtual ~Animal() = 0;
    virtual std::string getType() const = 0;
    virtual void makeSound() const = 0;
};

#endif