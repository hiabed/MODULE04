#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        materias[i] = NULL;
    std::cout << "MateriaSource default constructor called\n";
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    std::cout << "MateriaSource copy constructor called\n";
    *this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
    if(this != &other)
    {
        std::cout << "MateriaSource copy assignement called\n";
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if(materias[i])
            delete materias[i];
    }
    std::cout << "MateriaSource Destructor called\n";
}

void MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if(materias[i] == NULL)
        {
            materias[i] = m;
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if(materias[i] && materias[i]->getType() == type)
            return (materias[i]->clone());
    }
    return NULL;
}