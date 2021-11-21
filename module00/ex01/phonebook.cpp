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

	std::cout << this->contact[i].getName() << std::endl;
	std::cout << this->contact[i].getLastName() << std::endl;
	std::cout << this->contact[i].getNickName() << std::endl;
	std::cout << this->contact[i].getPhoneNumber() << std::endl;
	std::cout << this->contact[i].getSecret() << std::endl;
	std::cout << this->contact[i].getIndex() << std::endl;

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
			if (index >= 8)
				index = 0;
			if (phonebook.getCountContact() < 8)
				phonebook.setCountContact(index + 1);
		}


	}
	return (0);
}