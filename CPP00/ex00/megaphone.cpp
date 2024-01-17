/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:57:24 by etlim             #+#    #+#             */
/*   Updated: 2024/01/15 18:12:49 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using std::cout;
using std::endl;

int main(int ac, char** argv)
{
    if (ac <= 1)
    {
        cout << "*LOUD AND UNBEARABLE FEEDBACK NOISE*" << endl;
    }
    else 
    {
        int i;
        int j;

        for (i = 1; argv[i]; i++)
        {
            for (j = 0; argv[i][j]; j++)
            {
                cout <<  (char) toupper(argv[i][j]);
            }
            if (i < ac - 1)
            {
                cout << ' ';
            }
        }
        cout << endl;
        return(0);
    }
}