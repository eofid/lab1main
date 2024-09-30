#include <iostream>
#include "AdressBook.h"

using namespace std;

void showMenu() {
    cout << "1. Добавить контакт\n";
    cout << "2. Редактировать контакт\n";
    cout << "3. Удалить контакт\n";
    cout << "4. Поиск контакта\n";
    cout << "5. Вывести все контакты\n";
    cout << "6. Выход\n";
    cout << "Выберите опцию: ";
}

int main() {
    setlocale(LC_ALL, "rus");
    AddressBook addressBook;
    int choice;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
        case 1:
            addressBook.addContact();
            break;
        case 2:
            addressBook.editContact();
            break;
        case 3:
            addressBook.deleteContact();
            break;
        case 4:
            addressBook.searchContact();
            break;
        case 5:
            addressBook.displayContacts();
            break;
        case 6:
            cout << "Выход из программы...\n";
            break;
        default:
            cout << "Неверный выбор, попробуйте снова.\n";
        }
    } while (choice != 6);

    return 0;
}