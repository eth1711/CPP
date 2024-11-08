/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 03:21:07 by etlim             #+#    #+#             */
/*   Updated: 2024/11/09 03:32:54 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
using std::string;

string Zombie::get_name(){
	return this->name;
}

void Zombie::set_name(string name){
	this->name = name;
}

void Zombie::announce(void){
	cout << this->get_name() << ": >: BraiiiiiiinnnzzzZ.."
}