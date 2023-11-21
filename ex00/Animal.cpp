#include "Animal.hpp"

Animal::Animal()
{
    type = "Animal\n";
    std::cout << "Animal constructor called!\n";
}

Animal::Animal(std::string newType)
{
    type = newType;
}

Animal::Animal(const Animal &other)
{
    *this = other;
}

Animal &Animal::operator=(const Animal &other)
{
    if(this != &other)
        this->type = other.type;
    return *this;
}

void Animal::getType()
{
    return type;
}

void Animal::makeSound()
{
    std::cout << "Animal sound!\n";
}

Animal::~Animal()
{
    std::cout << "Animal destructor called!\n";
}