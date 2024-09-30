#include "AdressBook.h"
#include <iostream>
#include <string>

// ���������� ������ ��������
void AddressBook::addContact() {
    std::string name, phone, email;
    std::cout << "������� ���: ";
    std::cin >> name;
    std::cout << "������� �������: ";
    std::cin >> phone;
    std::cout << "������� email: ";
    std::cin >> email;

    contacts.emplace_back(name, phone, email);
    std::cout << "������� ��������!\n";
}

// �������������� �������� �� �����
void AddressBook::editContact() {
    std::string name;
    std::cout << "������� ��� �������� ��� ��������������: ";
    std::cin >> name;

    for (auto& contact : contacts) {
        if (contact.name == name) {
            std::cout << "�������������� �������� " << contact.name << std::endl;
            std::cout << "������� ����� ���: ";
            std::cin >> contact.name;
            std::cout << "������� ����� �������: ";
            std::cin >> contact.phone;
            std::cout << "������� ����� email: ";
            std::cin >> contact.email;
            std::cout << "������� ��������!\n";
            return;
        }
    }
    std::cout << "������� �� ������!\n";
}

// �������� �������� �� �����
void AddressBook::deleteContact() {
    std::string name;
    std::cout << "������� ��� �������� ��� ��������: ";
    std::cin >> name;

    for (auto it = contacts.begin(); it != contacts.end(); ++it) {
        if (it->name == name) {
            contacts.erase(it);
            std::cout << "������� ������!\n";
            return;
        }
    }
    std::cout << "������� �� ������!\n";
}

// ����� �������� �� �����
void AddressBook::searchContact() const {
    std::string name;
    std::cout << "������� ��� ��� ������: ";
    std::cin >> name;

    for (const auto& contact : contacts) {
        if (contact.name == name) {
            std::cout << "���: " << contact.name << std::endl;
            std::cout << "�������: " << contact.phone << std::endl;
            std::cout << "Email: " << contact.email << std::endl;
            return;
        }
    }
    std::cout << "������� �� ������!\n";
}

// ����� ���� ���������
void AddressBook::displayContacts() const {
    if (contacts.empty()) {
        std::cout << "�������� ����� �����.\n";
        return;
    }

    for (const auto& contact : contacts) {
        std::cout << "���: " << contact.name << std::endl;
        std::cout << "�������: " << contact.phone << std::endl;
        std::cout << "Email: " << contact.email << std::endl;
        std::cout << "-------------------\n";
    }
}
