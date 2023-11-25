#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure default constructor called!\n";
}

// Cure::Cure(std::string const &type) : AMateria("Cure")
// {
//     _type = type;
// }

Cure::Cure(const Cure &other)
{
    *this = other;
}

Cure &Cure::operator=(const Cure &other)
{
    if(this != &other)
    {
        this->_type = other._type;
        this->_name = other._name;
    }
    return *this;
}

std::string const &Cure::getType() const
{
    return _type;
}

Cure *Cure::clone() const
{
    Cure *new_instance = new Cure();
    return new_instance;
}

void Cure::use(ICharacter& target)
{
    std::cout << "\"* heals " << target.getName() << "’s wounds *\"\n";
}

Cure::~Cure()
{
    std::cout << "Cure destructor called!\n";
}