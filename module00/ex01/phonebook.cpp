/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maearly <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 17:08:07 by maearly           #+#    #+#             */
/*   Updated: 2021/11/20 17:08:08 by maearly          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook() {
	countContact = 0;
}

Contact::Contact() {

}

bool	Phonebook::printContact(Contact *contacts, std::string index) {

	if (!index.compare("1") || !index.compare("2") || !index.compare("3")
		|| !index.compare("4") || !index.compare("5") || !index.compare("6")
		|| !index.compare("7") || !index.compare("0")) {
		if (index[0] - 48 >= countContact)
		{
			std::cout << "\nWrong index. Write index again: ";
			return false;
		}
		std::cout << "\nIndex: "<< index << "\n";
		std::cout << "Name: " << contacts[index[0] - 48].getName() << std::endl;
		std::cout << "LastName: " << contacts[index[0] - 48].getLastName()
			<< std::endl;
		std::cout << "Nickname: " << contacts[index[0] - 48].getNickName()
			<< std::endl;
		std::cout << "Phone number: " << contacts[index[0] - 48].getPhoneNumber()
			<< std::endl;
		std::cout << "Darkest secret: " << contacts[index[0] - 48].getSecret()
			<< std::endl;
		return true;
	} else {
		std::cout << "Wrong index. Write index again: ";
		return false;
	}
}

void	printString(std::string str) {
	if (str.size() == 0)
		std::cout << "          ";
	else if (str.size() > 10)
		std::cout << str.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << str;
}

void	searchContact(Phonebook phonebook) {

	std::string	indexContact;

	std::cout << "    index|first name| last name|  nickname" << std::endl;
	for (int i = 0; i < phonebook.getCountContact(); i++) {
		std::cout << "        " << i;
		std::cout << "|";
		printString(phonebook.getContact(i).getName());
		std::cout << "|";
		printString(phonebook.getContact(i).getLastName());
		std::cout << "|";
		printString(phonebook.getContact(i).getNickName());
		std::cout << std::endl;
	}

	if (phonebook.getCountContact() > 0) {
		std::cout << "Input index of contact: ";
		if (!std::getline(std::cin, indexContact))
			exit (1);
		while (!phonebook.printContact(phonebook.getContacts(), indexContact))
			if (!std::getline(std::cin, indexContact))
				exit (1);
	}
}

void	Phonebook::addContact(int i) {

	std::string	str;

	std::cout << "Input name: ";
	if (!std::getline(std::cin, str))
		exit (0);
	this->contact[i].setName(str);

	std::cout << "Input last name: ";
	if (!std::getline(std::cin, str))
		exit (0);
	this->contact[i].setLastName(str);

	std::cout << "Input nickname: ";
	if (!std::getline(std::cin, str))
		exit (0);
	this->contact[i].setNickName(str);

	std::cout << "Input phone number: ";
	if (!std::getline(std::cin, str))
		exit (0);
	this->contact[i].setPhoneNumber(str);

	std::cout << "Input darkest secret: ";
	if (!std::getline(std::cin, str))
		exit (0);
	this->contact[i].setSecret(str);

	this->contact[i].setIndex(i);
}

int main() {

	Phonebook	phonebook;
	std::string	cmd;
	int	index = 0;

	while (true) {
		std::cout << "Input command: ";
		if (!std::getline(std::cin, cmd))
			exit (0);
		if (!cmd.compare("EXIT"))
			break;
		else if (!cmd.compare("ADD")) {
			phonebook.addContact(index++);

			if (phonebook.getCountContact() < 8)
				phonebook.setCountContact(index);
			if (index > 7)
				index = 0;
		} else if (!cmd.compare("SEARCH")) {
			searchContact(phonebook);
		} else if (!cmd.compare("\0"))
			std::cout << std::endl;
		else
			std::cout << "Wrong command!" << std::endl;
	}
	return (0);
}