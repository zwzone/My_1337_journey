/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 10:17:55 by zwina             #+#    #+#             */
/*   Updated: 2022/07/31 09:56:35 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <iomanip>
#include "Account.hpp"

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

void	Account::_displayTimestamp(void)
{
	time_t	tt = std::chrono::system_clock::to_time_t(\
					std::chrono::system_clock::now());
	tm		*now = gmtime(&tt);

	std::cout	<< '['
				<< std::setw(4) << std::setfill('0')
				<< now->tm_year + 1900
				<< std::setw(2) << std::setfill('0')
				<< now->tm_mon + 1
				<< std::setw(2) << std::setfill('0')
				<< now->tm_mday
				<< '_'
				<< std::setw(2) << std::setfill('0')
				<< now->tm_hour
				<< std::setw(2) << std::setfill('0')
				<< now->tm_min
				<< std::setw(2) << std::setfill('0')
				<< now->tm_sec
				<< ']';
}

Account::Account( void )
	: _accountIndex(getNbAccounts())
	, _amount(0)
	, _nbDeposits(0)
	, _nbWithdrawals(0)
{
}

Account::Account( int initial_deposit )
	: _accountIndex(_nbAccounts++)
	, _amount(initial_deposit)
	, _nbDeposits(0)
	, _nbWithdrawals(0)
{
	_displayTimestamp();
	std::cout	<< " index:" << _accountIndex << ';'\
				<< "amount:" << _amount << ';'\
				<< "created" << std::endl;
	_totalAmount += _amount;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout	<< " index:" << _accountIndex << ';'\
				<< "amount:" << _amount << ';'\
				<< "closed" << std::endl;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout	<< " accounts:" << _nbAccounts << ';'\
				<< "total:" << _totalAmount << ';'\
				<< "deposits:" << _totalNbDeposits << ';'\
				<< "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout	<< " index:" << _accountIndex << ';'\
				<< "amount:" << _amount << ';'\
				<< "deposits:" << _nbDeposits << ';'\
				<< "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout	<< " index:" << _accountIndex << ';'\
				<< "p_amount:" << _amount << ';'\
				<< "deposit:" << deposit << ';';
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout	<< "amount:" << _amount << ';'\
				<< "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout	<< " index:" << _accountIndex << ';'\
				<< "p_amount:" << _amount << ';'\
				<< "withdrawal:";
	if (_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout	<< withdrawal << ';'\
				<< "amount:" << _amount << ';'\
				<< "nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

int	Account::getNbAccounts(void)	{ return (_nbAccounts); }
int	Account::getTotalAmount(void)	{ return (_totalAmount); }
int	Account::getNbDeposits(void)	{ return (_totalNbDeposits); }
int	Account::getNbWithdrawals(void)	{ return (_totalNbWithdrawals); } 
