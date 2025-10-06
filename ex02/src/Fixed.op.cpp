# include "../includes/Fixed.hpp"

bool		Fixed::operator<( Fixed const & other ) const // <
{
	return this->_value < other._value;
}

bool		Fixed::operator>( Fixed const & other ) const // >
{
	return this->_value > other._value;
}

bool		Fixed::operator<=( Fixed const & other ) const // <=
{
	return this->_value <= other._value;
}

bool		Fixed::operator>=( Fixed const & other ) const // >=
{
	return this->_value >= other._value;
}

bool		Fixed::operator==( Fixed const & other ) const // ==
{
	return this->_value == other._value;
}

bool		Fixed::operator!=( Fixed const & other ) const // !=
{
	return this->_value != other._value;
}

Fixed		Fixed::operator+( Fixed const & other ) const // +
{
	return Fixed( this->toFloat() + other.toFloat() );
}

Fixed		Fixed::operator-( Fixed const & other ) const // -
{
	return Fixed( this->toFloat() - other.toFloat() );
}

Fixed		Fixed::operator*( Fixed const & other ) const // *
{
	return Fixed( this->toFloat() * other.toFloat() );
}

Fixed		Fixed::operator/( Fixed const & other ) const // /
{
	if (other.getRawBits() == 0)
		return Fixed( 0 );
	return Fixed( this->toFloat() / other.toFloat() );
}

Fixed&		Fixed::operator++( void ) // ++a
{
	++_value;

	return *this;
}

Fixed		Fixed::operator++( int ) // a++
{
	Fixed	tmp( *this );

	_value++;

	return tmp;
}

Fixed&		Fixed::operator--( void ) // --a
{
	--_value;

	return *this;
}

Fixed		Fixed::operator--( int ) // a--
{
	Fixed	tmp( *this );

	_value--;

	return tmp;
}
