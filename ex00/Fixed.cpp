/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:13:26 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/12/10 20:42:48 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed(std::string name)
{
  _name = name;
 	std::cout << "Constructor " << getName() << " called!" << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
  this->_name = copy._name;
 	std::cout << "Copy constructor " << getName() << " called!" << std::endl;
}

Fixed& Fixed::operator=(Fixed const &copy) 
{
  this->_name = copy._name;
 	std::cout << "Copy assignment operator " << getName() << " called!" << std::endl;
  return (*this);
}

std::string Fixed::getName()
{
	return (this->_name);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor " << getName() << " called!" << std::endl;
}