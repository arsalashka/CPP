/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maearly <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 21:03:24 by maearly           #+#    #+#             */
/*   Updated: 2021/11/20 21:03:26 by maearly          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

/* SETTERS******************************************************************* */


void	Contact::setName(std::string str) {
	this->name = str;
}

void	Contact::setLastName(std::string str) {
	this->lastName = str;
}

void	Contact::setNickName(std::string str) {
	this->nickName = str;
}

void	Contact::setPhoneNumber(std::string str) {
	this->phoneNumber = str;
}

void	Contact::setSecret(std::string str) {
	this->secret = str;
}

void	Contact::setIndex(int index) {
	this->index = index;
}

void	Phonebook::setCountContact(int i) {
	this->countContact = i;
}

/* GETTERS******************************************************************* */

std::string	Contact::getName() {
	return this->name;
};

std::string	Contact::getLastName() {
	return this->lastName;
};

std::string	Contact::getNickName() {
	return this->nickName;
};

std::string Contact::getPhoneNumber() {
	return this->phoneNumber;
}

std::string Contact::getSecret() {
	return this->secret;
}

int	Contact::getIndex() {
	return this->index;
}

int	Phonebook::getCountContact() {
	return this->countContact;
}

Contact Phonebook::getContact(int i) {
	return this->contact[i];
}

Contact *Phonebook::getContacts() {
	return this->contact;
}