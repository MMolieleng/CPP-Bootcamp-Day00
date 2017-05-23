/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 23:30:07 by mmoliele          #+#    #+#             */
/*   Updated: 2017/05/23 16:29:21 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.h"

Contact::Contact()
{
	this->firstname = "";
	this->lastname = "";
	this->nickname = "";
	this->login = "";
	this->postal_address = "";
	this->email_address = "";
	this->phone_number = "";
	this->birthday_date = "";
	this->favorite_meal = "";
	this->underwear_color = "";
	this->darkest_secret = "";

}

void	Contact::setFirstname(std::string firstname)
{
    this->firstname = firstname;
}

std::string	Contact::getFirstname( void )
{
    return this->firstname;
}

void	Contact::setLastname(std::string lastname)
{
    this->lastname = lastname;
}

std::string	Contact::getLastname( void )
{
    return this->lastname;
}

void	Contact::setNickname(std::string nickname)
{
    this->nickname = nickname;
}

std::string	Contact::getNickname( void )
{
    return this->nickname;
}

void	Contact::setLogin(std::string login)
{
    this->login = login;
}

std::string	Contact::getLogin( void )
{
    return this->login;
}

void	Contact::setPostalAddress(std::string postal_address)
{
    this->postal_address = postal_address;
}

std::string	Contact::getPostalAddress( void )
{
    return this->postal_address;
}

void	Contact::setEmailAddress( std::string email_address )
{
    this->email_address = email_address;
}

std::string	Contact::getEmailAddress( void )
{
    return this->email_address;
}

void	Contact::setPhoneNumber( std::string phone_number )
{
    this->phone_number = phone_number;
}

std::string	Contact::getPhoneNumber( void )
{
    return this->phone_number;
}

void	Contact::setBirthdayDate( std::string birthday )
{
    this->birthday_date = birthday;
}

std::string Contact::getBirthdayDate( void )
{
    return this->birthday_date;
}

void	Contact::setFavoriteMeal( std::string favorite_meal )
{
    this->favorite_meal = favorite_meal;
}

std::string	Contact::getFavoriteMeal( void )
{
    return this->favorite_meal;
}

void	Contact::setUnderwearColor( std::string ucolor )
{
    this->underwear_color = ucolor;
}

std::string Contact::getUnderwearColor( void )
{
    return this->underwear_color;
}

void	Contact::setDarkestSecret( std::string secret )
{
    this->darkest_secret = secret;
}

std::string Contact::getDarkestSecret()
{
	return this->darkest_secret;
}

Contact::~Contact()
{}

