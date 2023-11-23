#include "AMateria.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "ice default constructor called!\n";
}

Ice::Ice(const Ice &other)
{
    *this = other;
}

Ice &Ice::operator=(const Ice &other)
{
    if(this != &other)
    {
        this->_type = other._type;
    }
    return *this;
}

std::string const &Ice::getType() const
{
    return _type;
}

Ice *Ice::clone() const
{
    Ice *new_instance = new Ice();
    return new_instance;
}

void Ice::use(ICharacter& target)
{
    std::cout << "Ice: \"*  shoots an Ice bolt at " << _name << " *\"";
}

Ice::~Ice()
{
    std::cout << "Ice destructor called!\n";
}