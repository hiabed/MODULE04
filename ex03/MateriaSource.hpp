#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class AMateria;

class MateriaSource : public IMateriaSource
{
private:
    AMateria *materias[4];
    AMateria *tmp[4];
public:
    MateriaSource();
    MateriaSource(const MateriaSource &other);
    MateriaSource &operator=(const MateriaSource &other);
    ~MateriaSource();
    void learnMateria(AMateria *m);
    AMateria* createMateria(std::string const & type);
};

#endif