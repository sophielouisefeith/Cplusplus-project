/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/12 11:52:33 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/12 14:14:43 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ISquad.hpp"

class Squad : public ISquad {
	public:
		Squad();
		virtual ~Squad();
		Squad(const Squad &copy);

		Squad &operator=(const Squad &current);

		int getCount() const;
		/* get the unit from spacemarine  */
		ISpaceMarine* getUnit(int n) const; 
		int push(ISpaceMarine* unit);

	private:
		int _count;
		ISpaceMarine **_units;
} ;