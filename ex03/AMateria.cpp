#include "AMateria.hpp"

AMateria::AMateria()
{
    _type = "Default type";
    std::cout << "AMateria default constructor called!\n";
}

AMateria::AMateria(std::string const &type)
{
    _type = type;
}

AMateria::AMateria(const AMateria &other)
{
    *this = other;
}

AMateria &AMateria::operator=(const AMateria &other)
{
    if(this != &other)
    {
        this->_type = other._type;
    }
    return *this;
}

std::string const &AMateria::getType() const
{
    return _type;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called!\n";
}