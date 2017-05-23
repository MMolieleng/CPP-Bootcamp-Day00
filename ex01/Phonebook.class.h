//
// Created by Mohale MOLIELENG on 2017/05/23.
//

#ifndef EX01_PHONEBOOK_H
#define EX01_PHONEBOOK_H

#include "Contact.class.h"
#include <iostream>

class Phonebook {

public:
    Phonebook();
    ~Phonebook();

    Contact    add_contact();
    void    search_contact();
private:
    Contact contacts[8];
    int index;
};


#endif //EX01_PHONEBOOK_H
