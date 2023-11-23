#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class ice : public AMateria
{
public:
    ice();
    ice(std::string const & type);
    ice(const ice &other);
    ice &operator=(const ice &other);
    ~ice();
    std::string const & getType() const; //Returns the materia type.
    ice* clone() const;
    void use(ICharacter& target);
};

#endif