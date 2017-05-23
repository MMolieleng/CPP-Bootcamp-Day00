/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 01:32:49 by mmoliele          #+#    #+#             */
/*   Updated: 2017/05/23 14:52:50 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H
# include <iostream>
# include "Contact.class.h"

class	Phonebook
{
	public:

		Phonebook();
		~Phonebook();
		
		void	add_contact(Contact c);
		void	search();
		
	private:
		
		int SIZE;
//		Contact contacts[8];
		int KEY;
};
#endif
