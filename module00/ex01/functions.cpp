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

void	Human::setName(std::string str) {
	this->name = str;
}

void	Human::setLastName(std::string str) {
	this->lastName = str;
}

void	Human::setNickName(std::string str) {
	this->nickName = str;
}

void	Human::setPhoneNumber(std::string str) {
	this->phoneNumber = str;
}

void	Human::setSecret(std::string str) {
	this->secret = str;
}

/* ************************************************************************** */

std::string	Human::getName() {
	return this->name;
};

std::string	Human::getLastName() {
	return this->lastName;
};

std::string	Human::getNickName() {
	return this->nickName;
};

std::string Human::getPhoneNumber() {
	return this->phoneNumber;
}

std::string Human::getSecret() {
	return this->secret;
}