#ifndef CONTACT_H
#define CONTACT_H

#include <string>

class Contact {
public:
    std::string name;
    std::string phone;
    std::string email;

    Contact(const std::string& name, const std::string& phone, const std::string& email);
};

#endif // CONTACT_H
#pragma once
