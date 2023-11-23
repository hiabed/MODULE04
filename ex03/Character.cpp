#include "Character.hpp"

Character::Character()
{
    *slots = NULL;
}

Character::Character(std::string name)
{
    _name = name;
}

Character::Character(const Character &other)
{
    *this = other;
}

Character &Character::operator=(const Character &other)
{
    if (this != &other)
    {
        this->_name = other._name;
    }
    return *this;
}

void Character::equip(AMateria *m)
{
    // implementation needed;
}

void Character::unequip(int idx)
{
    // implementation needed;
}

void Character::use(int idx, ICharacter &target)
{
    // implementation needed;
}

Character::~Character()
{
    std::cout << "Character Destructor called\n";
}