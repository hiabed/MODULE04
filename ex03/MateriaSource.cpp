#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
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
    std::cout << "MateriaSource Destructor called\n";
}

void MateriaSource::learnMateria(AMateria *)
{
    
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    (void)type;
    return nullptr;
}