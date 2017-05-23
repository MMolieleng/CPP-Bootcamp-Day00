/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 01:53:16 by mmoliele          #+#    #+#             */
/*   Updated: 2017/05/23 14:40:38 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.class.h"

Contact contacts[8];
Phonebook::Phonebook()
{
	this->SIZE = 8;
	this->KEY = 0;
}

Phonebook::~Phonebook(){}

void	Phonebook::add_contact(Contact contact)
{
	if (this->KEY < this->SIZE)
	{
		contacts[this->KEY] = contact;
		this->KEY++;
	}
	else
	{
		std::cout<<"List is full"<<std::endl;
	}
}
