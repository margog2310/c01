/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganchev <mganchev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 20:09:24 by mganchev          #+#    #+#             */
/*   Updated: 2025/05/01 20:09:25 by mganchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cstdlib>

class Zombie
{
    private:
        std::string  _name;
    
    public:
        Zombie();
        Zombie(std::string name);    
        ~Zombie();
        void    announce();
} ;
    
Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif
