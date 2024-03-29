/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/24 12:01:55 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/11 11:12:37 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"

int main( void ) {

    /*type class awesome class mee te sturen */

    /* type is awesome */

    
    std::cout << "\nawesome class tests:" << std::endl;
	Awesome a1(4);
	Awesome a2(7);
	std::cout << "before swap: " << a1._n << " and " << a2._n << std::endl;


     int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b) << std::endl;
     std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    
    std::swap(a1, a2);
	std::cout << "after swap: " << a1._n << " and " << a2._n << std::endl;
	std::cout << "min of " << a1._n << " and " << a2._n << ": " << ::min(a1._n, a2._n) << std::endl;
	std::cout << "max of " << a1._n << " and " << a2._n << ": " << ::max(a1._n, a2._n) << std::endl;

    
    return 0;


    
}