#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called!\n";
}

Brain::Brain(const Brain &other)
{
    *this = other;
    std::cout << "Brain copy constructor called!\n";
}

Brain &Brain::operator=(const Brain &other)
{
    if(this != &other)
        this->type = other.type;
    std::cout << "Brain copy assignement operator called!\n";
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called!\n";
}