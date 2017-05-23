/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 15:37:28 by mmoliele          #+#    #+#             */
/*   Updated: 2017/05/23 16:45:58 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.class.h"
#include "Phonebook.class.h"

std::string truncate(std::string str);

int main() {

	std::string input = "d";

	int key = 0;
	Contact contacts[8];
	Phonebook phonebook;

	while(input != "EXIT") {

		std::cout << "MENU :\n --> ADD\n --> SEARCH\n --> EXIT \n -->";
		std::cin >> input;

		if (input == "ADD")
		{
			Contact newContact = phonebook.add_contact();
			if (key < 8){
				contacts[key] = newContact;;
				key++;
			}
		}
		else if (input == "SEARCH"){

			std::cout<<std::setw(10)<<"index"<<","<<std::setw(10)<<"first name"<<","<<std::setw(10)<<"last name"<<","
				<<std::setw(10)<<"nick name"<<std::endl;
			for (int i = 0; i < key; i++){

				std::cout<<std::setw(10)<<i<<"|";
				std::cout<<std::setw(10)<<truncate(contacts[i].getFirstname())<<"|"
					<<std::setw(10)<<truncate(contacts[i].getLastname())<<"|"
					<<std::setw(10)<<truncate(contacts[i].getNickname())
					<<std::endl;
			}

			int search_index = -1;
			std::cout<<"Enter search index to view, -1 to quit : \n ---> ";
			std::cin>>search_index;

			while (search_index != -1)
			{
				if (search_index >=0 && search_index < 8)
				{
					int i = search_index;
					
                	std::cout<<std::endl
						<<(contacts[i].getFirstname())<<"\n"
		                <<(contacts[i].getLastname())<<"\n"
		                <<(contacts[i].getNickname())<<"\n"
	                    <<(contacts[i].getLogin())<<"\n"
		                <<(contacts[i].getPostalAddress())<<"\n"
		                <<(contacts[i].getEmailAddress())<<"\n"
		                <<(contacts[i].getPhoneNumber())<<"\n"
		                <<(contacts[i].getBirthdayDate())<<"\n"
		                <<(contacts[i].getFavoriteMeal())<<"\n"
		                <<(contacts[i].getUnderwearColor())<<"\n"
		                <<(contacts[i].getDarkestSecret())<<"\n";
					
				}
				else{
					std::cout<<"\nINVALID input\n";
				}		
				std::cout<<"Enter search index between 0-7, -1 to quit SEARCH \n ---> ";
				std::cin>>search_index;		
			}
		}
	}
	return 0;
}

std::string	truncate(std::string str)
{
	if (str.length() > 10)
	{
		str.replace(str.begin() +9, str.end(), ".");
		return str;
	}
	else
		return str;
}
