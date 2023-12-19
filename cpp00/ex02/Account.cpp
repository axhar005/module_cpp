#include "inc/Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit ) : _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0){
	_accountIndex = _nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout 
		<< "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";created"
	<< std::endl;
}

Account::~Account(void){
	_displayTimestamp();
	std::cout 
		<< "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";closed"
	<< std::endl;
}

int Account::getNbAccounts(void) {
	return _nbAccounts;
}

int Account::getTotalAmount(void) {
	return _totalAmount;
}

int Account::getNbDeposits(void) {
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
	return _totalNbWithdrawals;
}

void Account::_displayTimestamp() {
	if (DEBUG == 1){
		std::cout << "[19920104_091532] ";
	}
	else{
		std::time_t now = std::time(nullptr);
		std::tm *ltm = std::localtime(&now);
		std::cout
			<< "["
			<< 1900 + ltm->tm_year
			<< std::setfill('0') << std::setw(2) << 1 + ltm->tm_mon
			<< std::setfill('0') << std::setw(2) << ltm->tm_mday
			<< "_"
			<< std::setfill('0') << std::setw(2) << ltm->tm_hour
			<< std::setfill('0') << std::setw(2) << ltm->tm_min
			<< std::setfill('0') << std::setw(2) << ltm->tm_sec
			<< "] ";
	}
}

void	Account::displayAccountsInfos(void){
	_displayTimestamp();
	std::cout
		<< "accounts:" << _nbAccounts
		<< ";total:" << _totalAmount 
		<< ";deposits:" << _totalNbDeposits
		<< ";withdrawals:" << _totalNbWithdrawals
	<< std::endl;
}

void	Account::makeDeposit( int deposit ){
	//index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
	_displayTimestamp();
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	std::cout
		<< "index:" << _accountIndex
		<< ";p_amount:" << (_amount - deposit)
		<< ";deposit:" << deposit
		<< ";amount:" << _amount
		<< ";nb_deposits:" << _nbDeposits
	<< std::endl;

}

bool	Account::makeWithdrawal( int withdrawal ){
	_displayTimestamp();
	if (_amount < withdrawal){
		std::cout
			<< "index:" << _accountIndex
			<< ";p_amount:" << _amount
			<< ";withdrawal:refused"
		<< std::endl;
		return false;
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	std::cout
	<< "index:" << _accountIndex
		<< ";p_amount:" << (_amount + withdrawal)
		<< ";withdrawal:" << withdrawal
		<< ";amount:" << _amount
		<< ";nb_withdrawals:" << _nbWithdrawals
	<< std::endl;
	return true;
}

int		Account::checkAmount() const{
	return _amount;
}

void	Account::displayStatus( ) const{
	_displayTimestamp();
	std::cout
		<< "index:" << _accountIndex
		<< ";amount:"<< _amount
		<< ";deposits:" << _nbDeposits
		<< ";withdrawals:" << _nbWithdrawals
	<< std::endl;
}