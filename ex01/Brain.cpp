#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called!\n";
}

Brain::Brain(const Brain &other)
{
    *this = other;
}

Brain &Brain::operator=(const Brain &other)
{
    if(this != &other)
        this->type = other.type;
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called!\n";
}