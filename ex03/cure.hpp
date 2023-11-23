#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class cure : public AMateria
{
public:
    cure();
    cure(std::string const & type);
    cure(const cure &other);
    cure &operator=(const cure &other);
    ~cure();
    std::string const & getType() const; //Returns the materia type.
    cure* clone() const;
    void use(ICharacter& target);
};

#endif