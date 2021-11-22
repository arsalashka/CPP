// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                      //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ) {
	return(_nbAccounts);
}

int	Account::getTotalAmount( void ) {
	return(_totalAmount);
}

int	Account::getNbDeposits( void ) {
	return(_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {
	return(_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account( int initial_deposit ) {
	_displayTimestamp();
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	std::cout << "index:" << _accountIndex << ";";
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	std::cout << "amount:" << _amount << ";";
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	std::cout << "created" << std::endl;
}

Account::~Account( void ) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";" << "closed";
	std::cout << std::endl <<"HERE!!!" << std::endl;
	if (_accountIndex != 0)
		std::cout << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount - deposit << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_deposits:" << _nbDeposits << "\n";
}

bool	Account::makeWithdrawal( int withdrawal ) {
	if (_amount > withdrawal)
	{
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";";
		std::cout << "p_amount:" << _amount + withdrawal << ";";
		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << _amount << ";";
		std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (true);
	}
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "withdrawal:refused" << std::endl;
	return (false);
}

int		Account::checkAmount( void ) const {
	return 0;
}

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << "\n";
}

void	Account::_displayTimestamp(void)
{
	std::time_t ttime = std::time(0);
	std::tm *l_time = localtime(&ttime);
	std::cout << "[" << l_time->tm_year + 1900;
	std::cout << std::setfill('0') << std::setw(2) << l_time->tm_mon + 1;
	std::cout << std::setfill('0')  << std::setw(2) << l_time->tm_mday;
	std::cout << "_" << std::setfill('0')  << std::setw(2) << l_time->tm_hour;
	std::cout << std::setfill('0')  << std::setw(2) << l_time->tm_min;
	std::cout << std::setfill('0')  << std::setw(2) << l_time->tm_sec << "] ";
	// std::cout;
}