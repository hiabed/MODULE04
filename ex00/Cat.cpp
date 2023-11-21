#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat\n";
    std::cout << "Cat constructor called!\n";
}

Cat::Cat(const Cat &other)
{
    *this = other;
}

Cat &Cat::operator=(const Cat &other)
{
    if(this != &other)
        this->type = other.type;
    return *this;
}

void Cat::makeSound()
{
    std::cout << "Meow :3\n";
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called!\n";
}