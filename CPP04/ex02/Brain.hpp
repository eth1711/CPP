/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:54:24 by etlim             #+#    #+#             */
/*   Updated: 2024/02/02 20:40:05 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain 
{
    private:
        std::string _ideas[100];
        
    public: 
        Brain();
        Brain(const Brain &copy);
        Brain &operator=(const Brain &copy);
        ~Brain();

        const std::string *getIdeas(void) const;
        void setIdeas()const;
};

#endif
