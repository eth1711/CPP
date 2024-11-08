/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 03:22:16 by etlim             #+#    #+#             */
/*   Updated: 2024/11/09 03:35:05 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

using std::cout;
using std::cin;
using std::string;

class Zombie
{
	private:
		string name;

	public:
		string get_name();
		void set_name(string name);
		void announce(void);
		Zombie* newZombie(string name)
}