# include "Fixed.hpp"

const int	Fixed::_frac = 8;

			Fixed::Fixed() : _value(0)
{
	std::cout << "Default Constructor called" << std::endl;

	return ;
}

			Fixed::Fixed( int n ) : _value(n)
{
	std::cout << "Parametric Constructor called" << std::endl;

	return ;
}

			Fixed::Fixed( Fixed const & other )
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = other;

	return ;
}

Fixed &		Fixed::operator=( Fixed const & other )
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = other.getRawBits();

	return *this;
}

int			Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;

	return this->_value;
}

void		Fixed::setRawBits( int const raw )
{

	this->_value = raw;

	return ;
}

			Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;

	return ;
}