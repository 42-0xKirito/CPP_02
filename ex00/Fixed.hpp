#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{

private:

	int					_value;
	static const int	_frac;

public:

	Fixed		();
	Fixed		( int n );
	Fixed		( Fixed const & other );
	
	Fixed &		operator=( Fixed const & other );

	int			getRawBits( void ) const;
	void		setRawBits( int const raw );

	~Fixed		();

};

#endif // FIXED_HPP