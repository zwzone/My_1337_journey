/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 09:47:56 by zwina             #+#    #+#             */
/*   Updated: 2022/07/31 13:29:11 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <iomanip>
# include <string>

enum	Type
{
	e_first_name,
	e_last_name,
	e_nickname,
	e_phone_number,
	e_darkest_secret,
	e_max
};

class Contact
{
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;

public:
	void	setFirstName(const std::string &str);
	void	setLastName(const std::string &str);
	void	setNickname(const std::string &str);
	void	setPhoneNumber(const std::string &str);
	void	setDarkestSecret(const std::string &str);
	void	print_in_field(Type t) const;
	void	print(Type t) const;
};

#endif
