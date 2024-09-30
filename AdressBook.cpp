#include "AdressBook.h"
#include <iostream>
#include <string>

// Добавление нового контакта
void AddressBook::addContact() {
    std::string name, phone, email;
    std::cout << "Введите имя: ";
    std::cin >> name;
    std::cout << "Введите телефон: ";
    std::cin >> phone;
    std::cout << "Введите email: ";
    std::cin >> email;

    contacts.emplace_back(name, phone, email);
    std::cout << "Контакт добавлен!\n";
}

// Редактирование контакта по имени
void AddressBook::editContact() {
    std::string name;
    std::cout << "Введите имя контакта для редактирования: ";
    std::cin >> name;

    for (auto& contact : contacts) {
        if (contact.name == name) {
            std::cout << "Редактирование контакта " << contact.name << std::endl;
            std::cout << "Введите новое имя: ";
            std::cin >> contact.name;
            std::cout << "Введите новый телефон: ";
            std::cin >> contact.phone;
            std::cout << "Введите новый email: ";
            std::cin >> contact.email;
            std::cout << "Контакт обновлен!\n";
            return;
        }
    }
    std::cout << "Контакт не найден!\n";
}

// Удаление контакта по имени
void AddressBook::deleteContact() {
    std::string name;
    std::cout << "Введите имя контакта для удаления: ";
    std::cin >> name;

    for (auto it = contacts.begin(); it != contacts.end(); ++it) {
        if (it->name == name) {
            contacts.erase(it);
            std::cout << "Контакт удален!\n";
            return;
        }
    }
    std::cout << "Контакт не найден!\n";
}

// Поиск контакта по имени
void AddressBook::searchContact() const {
    std::string name;
    std::cout << "Введите имя для поиска: ";
    std::cin >> name;

    for (const auto& contact : contacts) {
        if (contact.name == name) {
            std::cout << "Имя: " << contact.name << std::endl;
            std::cout << "Телефон: " << contact.phone << std::endl;
            std::cout << "Email: " << contact.email << std::endl;
            return;
        }
    }
    std::cout << "Контакт не найден!\n";
}

// Вывод всех контактов
void AddressBook::displayContacts() const {
    if (contacts.empty()) {
        std::cout << "Адресная книга пуста.\n";
        return;
    }

    for (const auto& contact : contacts) {
        std::cout << "Имя: " << contact.name << std::endl;
        std::cout << "Телефон: " << contact.phone << std::endl;
        std::cout << "Email: " << contact.email << std::endl;
        std::cout << "-------------------\n";
    }
}
