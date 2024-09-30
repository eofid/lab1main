#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H

#include <vector>
#include "Contact.h"

class AddressBook {
private:
    std::vector<Contact> contacts;

public:
    void addContact();
    void editContact();
    void deleteContact();
    void searchContact() const;
    void displayContacts() const;
};

#endif // ADDRESSBOOK_H
#pragma once
