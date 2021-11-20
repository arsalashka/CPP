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

void	Phonebook::addHuman(int i) {

	std::string	str;

	std::cout << "Input name: ";
	if (!std::getline(std::cin, str))
		exit (0);
	this->human[i].setName(str);

	std::cout << "Input last name: ";
	if (!std::getline(std::cin, str))
		exit (0);
	this->human[i].setLastName(str);

	std::cout << "Input nickname: ";
	if (!std::getline(std::cin, str))
		exit (0);
	this->human[i].setNickName(str);

	std::cout << "Input phone number: ";
	if (!std::getline(std::cin, str))
		exit (0);
	this->human[i].setPhoneNumber(str);

	std::cout << "Input darkest secret: ";
	if (!std::getline(std::cin, str))
		exit (0);
	this->human[i].setSecret(str);

	std::cout << this->human[i].getName() << std::endl;
	std::cout << this->human[i].getLastName() << std::endl;
	std::cout << this->human[i].getNickName() << std::endl;
	std::cout << this->human[i].getPhoneNumber() << std::endl;
	std::cout << this->human[i].getSecret() << std::endl;

}

int main() {

	Phonebook	phonebook;
	std::string	cmd;
	int			index = 0;

	while (true) {
		std::cout << "Input command: ";
		if (!std::getline(std::cin, cmd))
			exit (0);
		if (!cmd.compare("EXIT"))
			break;
		else if (!cmd.compare("ADD")) {
			phonebook.addHuman(index++);
			if (index >= 8)
				index = 0;
		}


	}
	return (0);
}