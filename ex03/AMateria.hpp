#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

class AMateria
{
protected:
    std::string _type;
    std::string _name;
public:
    AMateria();
    AMateria(std::string const & type);
    AMateria(const AMateria &other);
    AMateria &operator=(const AMateria &other);
    ~AMateria();
    std::string const & getType() const; //Returns the materia type.
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif