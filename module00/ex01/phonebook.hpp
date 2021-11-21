/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maearly <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 19:30:25 by maearly           #+#    #+#             */
/*   Updated: 2021/11/20 19:30:27 by maearly          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>

class	Contact {

private:
	int			index;
	std::string	name;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	secret;

public:
	Contact();
	void	setName(std::string str);
	void	setLastName(std::string str);
	void	setNickName(std::string str);
	void	setPhoneNumber(std::string str);
	void	setSecret(std::string str);
	void 	setIndex(int index);
	std::string	getName();
	std::string	getLastName();
	std::string	getNickName();
	std::string	getPhoneNumber();
	std::string	getSecret();
	int			getIndex();
};

class	Phonebook {

private:
	int		countContact;
	Contact	contact[8];
public:
	Phonebook();
	void	addContact(int i);
	void	setCountContact(int count);

	int		getCountContact();
};

#endif
