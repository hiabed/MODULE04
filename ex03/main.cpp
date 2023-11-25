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
    AMateria *a = new Ice();
    src->learnMateria(a);
    src->learnMateria(a);
    src->learnMateria(a);
    src->learnMateria(a);
    src->learnMateria(a);
    src->learnMateria(a);
    // src->learnMateria(a);
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    // me->unequip(0);
    // me->unequip(0);
    // me->unequip(0);
    // me->unequip(0);
    // me->unequip(0);
    // me->unequip(0);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
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