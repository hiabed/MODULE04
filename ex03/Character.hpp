#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"

class Character : public ICharacter
{
private:
    AMateria *slots[4];
    std::string _name;
public:
    Character();
    Character(std::string name);
    Character(const Character &other);
    Character &operator=(const Character &other);
    ~Character();
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};


#endif