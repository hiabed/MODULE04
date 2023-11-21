#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog\n";
    std::cout << "Dog constructor called!\n";
}

Dog::Dog(const Dog &other)
{
    *this = other;
}

Dog &Dog::operator=(const Dog &other)
{
    if(this != &other)
        this->type = other.type;
    return *this;
}

void Dog::makeSound()
{
    std::cout << "Woof!!\n";
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called!\n";
}