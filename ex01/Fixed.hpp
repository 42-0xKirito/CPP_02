#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{

private:

	int					_value;
	static const int	_frac;

public:

	Fixed		();
	Fixed		( const int n );
	Fixed		( const float n );
	Fixed		( Fixed const & other );
	
	Fixed &		operator=( Fixed const & other );

	int			getRawBits( void ) const;
	void		setRawBits( int const raw );

	float		toFloat( void ) const;
	int			toInt( void ) const;

	~Fixed		();

};

std::ostream &	operator<<( std::ostream & o, Fixed const & i );

#endif // FIXED_HPP