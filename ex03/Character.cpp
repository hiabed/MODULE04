#include "Character.hpp"
#include "AMateria.hpp"

Character::Character()
{
    _name = "Abed";
    for (int i = 0; i < 4; i++)
        slots[i] = NULL;
    for (int i = 0; i < 4; i++)
        unequiped_slots[i] = NULL;
}

Character::Character(std::string name)
{
    _name = name;
    for (int i = 0; i < 4; i++)
        slots[i] = NULL;
    for (int i = 0; i < 4; i++)
        unequiped_slots[i] = NULL;
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
    for (int i = 0; i < 4; i++)
    {
        if(unequiped_slots[i] != NULL)
        {
            free(unequiped_slots[i]);
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if(slots[i] == NULL)
        {
            slots[i] = m->clone();
            break;
        }
    }
}

void Character::unequip(int idx)
{
    for (int i = 0; i < 4; i++) //save the adress to free later on equipe method;
    {
        if(unequiped_slots[i] == NULL)
        {
            unequiped_slots[i] = slots[idx];
            break;
        }
    }
    slots[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx > 3)
    {
        std::cout << "Please enter an index between 0 and 3";
        return ;
    }
    slots[idx]->use(target);
}

Character::~Character()
{
    std::cout << "Character Destructor called\n";
}