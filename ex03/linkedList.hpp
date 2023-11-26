#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include "AMateria.hpp"

typedef struct s_list
{
    AMateria *tmp;
    struct s_list *next;
}   t_list;


#endif