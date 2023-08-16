/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 09:47:34 by zwina             #+#    #+#             */
/*   Updated: 2022/07/29 19:48:48 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact	_contacts[8];
	size_t	_index;
	size_t	_nContact;
public:
	PhoneBook();
	void	addContact(void);
	void	searching(void) const;
};

#endif
