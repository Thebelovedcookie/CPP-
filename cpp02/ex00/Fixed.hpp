#pragma once

# include <iostream>
# include <string>

class Fixed
{
	public:
		Fixed();
		Fixed(Fixed const &original);
		~Fixed();
		Fixed	&operator=(Fixed const &original);
		int		getRawBits(void) const;
        void	setRawBits(int const raw);

	private:
		int					virgule_fixe;
        static const int	nb_bits_fract = 8;

};
