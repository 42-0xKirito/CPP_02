# include "Fixed.hpp"

const int	Fixed::_frac = 8;

			Fixed::Fixed() : _value(0)
{
	std::cout << "Default Constructor called" << std::endl;

	return ;
}

			Fixed::Fixed( const int n ) : _value(n << _frac)
{
	std::cout << "Parametric ( int ) Constructor called" << std::endl;

	return ;
}

			Fixed::Fixed( const float n )
{
	std::cout << "Parametric ( float ) Constructor called" << std::endl;
	_value = static_cast<int>(roundf(n * (1 << _frac)));

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
	return this->_value;
}

void		Fixed::setRawBits( int const raw )
{
	this->_value = raw;

	return ;
}

float		Fixed::toFloat( void ) const
{
	return static_cast<float>(_value) / (1 << _frac);
}

int			Fixed::toInt( void ) const
{
	return _value >> _frac;
}

			Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;

	return ;
}

std::ostream &	operator<<( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();

	return o;
}