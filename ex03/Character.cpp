#include "Character.hpp"
#include "AMateria.hpp"

Character::Character()
{
    _name = "Abed";
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

std::string const &Character::getName() const
{
    return _name;
}

void Character::equip(AMateria *m)
{
    slots[0] = m->clone();
    // implementation needed;
}

void Character::unequip(int idx)
{
    (void)idx;
    // implementation needed;
}

void Character::use(int idx, ICharacter &target)
{
    (void)idx;
    (void)target;
    // implementation needed;
}

Character::~Character()
{
    std::cout << "Character Destructor called\n";
}