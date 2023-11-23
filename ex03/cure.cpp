#include "cure.hpp"

cure::cure()
{
    _type = "Default type";
    std::cout << "cure default constructor called!\n";
}

cure::cure(std::string const &type)
{
    _type = type;
}

cure::cure(const cure &other)
{
    *this = other;
}

cure &cure::operator=(const cure &other)
{
    if(this != &other)
    {
        this->_type = other._type;
    }
    return *this;
}

std::string const &cure::getType() const
{
    return _type;
}

cure *cure::clone() const
{
    cure *new_instance = new cure();
    return new_instance;
}

/* void cure::use(ICharacter& target)
{
    // implementation needed;
} */

cure::~cure()
{
    std::cout << "cure destructor called!\n";
}