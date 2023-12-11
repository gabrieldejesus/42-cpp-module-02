/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:12:54 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/12/10 20:42:45 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_HPP
# define Fixed_HPP

# include <iostream>

class Fixed {
  private:
    std::string _name;

  public:
    Fixed(std::string name);
    Fixed(Fixed const &copy); // Copy constructor
    Fixed& operator=(Fixed const &copy); // Copy assignment operator
    ~Fixed(void);

		std::string getName();
};

#endif
