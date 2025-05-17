/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganchev <mganchev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 20:09:08 by mganchev          #+#    #+#             */
/*   Updated: 2025/05/17 18:04:16 by mganchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie* heapZombie = newZombie("heapZombie");
    randomChump("stackZombie");
    heapZombie->announce();
    delete heapZombie;
    return (0);
}