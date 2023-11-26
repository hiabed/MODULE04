#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

void ft()
{
    IMateriaSource* src = new MateriaSource();
    AMateria *ice = new Ice();
    AMateria *cure = new Cure();
    src->learnMateria(ice);
    src->learnMateria(cure);
    src->learnMateria(cure);
    src->learnMateria(cure);
    src->learnMateria(ice);
    src->learnMateria(ice);
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    delete bob;
    delete me;
    delete src;
}

int main()
{
    ft();
    system("leaks FinalFantasy");
    return 0;
}