/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/21 13:17:09 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/02/28 13:47:27 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


//*Now the actual point of the exercise: Your Zombies must be destroyed at appropriate
//times (so, when they are not needed anymore). They must also be allocated in the appropriate fashion: Some times it’s appropriate to have them on the stack, at other times
//the heap is a better choice. You will have to justify what you did to get a positive grade
//*



Zombie::Zombie(void) {}
Zombie::~Zombie(void) {}

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {}

std::string names[5] = {
	"mucks",
	"pertk",
	"veral",
	"stlab",
	"Conrad"
} ;

void Zombie::announce(void)
{
	std::cout << "This is " << _name << " the " << _type << " zombie." << std::endl ;
}

std::string Zombie::RandomChump(void)
{
	srand(time(NULL));
	int i = rand() % 5;
	return (names[i]);
}