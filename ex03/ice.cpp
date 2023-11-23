#include "ice.hpp"

ice::ice()
{
    _type = "Default type";
    std::cout << "ice default constructor called!\n";
}

ice::ice(std::string const &type)
{
    _type = type;
}

ice::ice(const ice &other)
{
    *this = other;
}

ice &ice::operator=(const ice &other)
{
    if(this != &other)
    {
        this->_type = other._type;
    }
    return *this;
}

std::string const &ice::getType() const
{
    return _type;
}

ice *ice::clone() const
{
    ice *new_instance = new ice();
    return new_instance;
}

/* void ice::use(ICharacter& target)
{
    // implementation needed;
} */

ice::~ice()
{
    std::cout << "ice destructor called!\n";
}