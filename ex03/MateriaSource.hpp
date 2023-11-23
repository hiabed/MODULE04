#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
    
public:
    MateriaSource();
    MateriaSource(const MateriaSource &other);
    MateriaSource &operator=(const MateriaSource &other);
    ~MateriaSource();
    void learnMateria(AMateria *);
    AMateria* createMateria(std::string const & type);
};

#endif