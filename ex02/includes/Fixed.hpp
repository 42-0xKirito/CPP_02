#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{

private:

	int						_value;
	static const int		_frac;

public:

	Fixed					();
	Fixed					( const int n );
	Fixed					( const float n );
	Fixed					( Fixed const & other );
	
	Fixed &					operator=( Fixed const & other );

	bool					operator<( Fixed const & other ) const;
	bool					operator>( Fixed const & other ) const;
	bool					operator<=( Fixed const & other ) const;
	bool					operator>=( Fixed const & other ) const;
	bool					operator==( Fixed const & other ) const;
	bool					operator!=( Fixed const & other ) const;

	Fixed					operator+( Fixed const & other ) const;
	Fixed					operator-( Fixed const & other ) const;
	Fixed					operator*( Fixed const & other ) const;
	Fixed					operator/( Fixed const & other ) const;

	Fixed&					operator++( void );
	Fixed					operator++( int );
	Fixed&					operator--( void );
	Fixed					operator--( int );

	static Fixed &			min( Fixed & a, Fixed & b );
	static Fixed const &	min( Fixed const & a, Fixed const & b );
	static Fixed &			max( Fixed & a, Fixed & b );
	static Fixed const &	max( Fixed const & a, Fixed const & b );

	int						getRawBits( void ) const;
	void					setRawBits( int const raw );

	float					toFloat( void ) const;
	int						toInt( void ) const;

	~Fixed					();

};

std::ostream &				operator<<( std::ostream & o, Fixed const & i );

#endif // FIXED_HPP