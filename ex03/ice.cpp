#include "ice.hpp"

ice::ice() : AMateria("ice");
{
    std::cout << "ice default constructor called!\n";
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