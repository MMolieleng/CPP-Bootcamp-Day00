/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 15:37:12 by mmoliele          #+#    #+#             */
/*   Updated: 2017/05/23 16:28:15 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_CONTACT_H
#define EX01_CONTACT_H


#include <iostream>

class	Contact
{
public:

    Contact();
    ~Contact( void );
    void	setFirstname(std::string);
    void	setLastname(std::string);
    void	setNickname(std::string);
    void	setLogin(std::string);
    void	setPostalAddress(std::string);
    void	setEmailAddress(std::string);
    void	setPhoneNumber(std::string);
    void	setBirthdayDate(std::string);
    void	setFavoriteMeal(std::string);
    void	setUnderwearColor(std::string);
    void	setDarkestSecret(std::string);

    std::string	getFirstname( void );
    std::string	getLastname( void );
    std::string	getNickname( void );
    std::string	getLogin( void );
    std::string	getPostalAddress( void );
    std::string	getEmailAddress( void );
    std::string	getPhoneNumber( void );
    std::string	getBirthdayDate( void );
    std::string	getFavoriteMeal( void );
    std::string	getUnderwearColor( void );
    std::string	getDarkestSecret( void );

private:

    std::string	firstname;
    std::string	lastname;
    std::string	nickname;
    std::string	login;
    std::string	postal_address;
    std::string	email_address;
    std::string	phone_number;
    std::string	birthday_date;
    std::string	favorite_meal;
    std::string	underwear_color;
    std::string	darkest_secret;
};

#endif //EX01_CONTACT_H
