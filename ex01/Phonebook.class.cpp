/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 15:36:54 by mmoliele          #+#    #+#             */
/*   Updated: 2017/05/23 15:36:58 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.h"

Phonebook::Phonebook() {

    this->index = 0;
}

Phonebook::~Phonebook() {}

Contact Phonebook::add_contact() {

    Contact c;
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string login;
    std::string postal_address;
    std::string email_address;
    std::string phone_number;
    std::string birthday;
    std::string favorite;
    std::string underwear;
    std::string meal;
    std::string secret;

    std::cout<<"Enter firstname : ";
    std::cin>>firstname;
    c.setFirstname(firstname);

    std::cout<<"Enter lastname : ";
    std::cin>>lastname;
    c.setLastname(lastname);

    std::cout<<"Enter nickname : ";
    std::cin>>nickname;
    c.setNickname(nickname);

    std::cout<<"Enter login : ";
    std::cin>>login;
    c.setLogin(login);

    std::cout<<"Enter postal address : ";
    std::cin>>postal_address;
    c.setPostalAddress(postal_address);

    std::cout<<"Enter email address : ";
    std::cin>>email_address;
    c.setEmailAddress(email_address);

    std::cout<<"Enter phone number : ";
    std::cin>>phone_number;
    c.setPhoneNumber(phone_number);

    std::cout<<"Enter birthday date : ";
    std::cin>>birthday;
    c.setBirthdayDate(birthday);

    std::cout<<"Enter favorite meal : ";
    std::cin>>favorite;
    c.setFavoriteMeal(favorite);

    std::cout<<"Enter your underwear color : ";
    std::cin>>underwear;
    c.setUnderwearColor(underwear);

    std::cout<<"Enter your darkest secret : ";
    std::cin>>secret;
    c.setDarkestSecret(secret);

    return c;
}

void Phonebook::search_contact() {

    for (int i = 0; i < this->index; i++){

        std::cout<<i<<std::endl;
        std::cout<<this->contacts[index].getFirstname()<<"\t"
                 <<this->contacts[index].getLastname()<<"\t"
                 <<this->contacts[index].getNickname()<<std::endl;
    }
}
