#ifndef SCALARCONVETSION_HPP
# define SCALARCONVERSION_HPP

# include <string>

class ScalarConversion{
public :
	ScalarConversion();
	ScalarConversion(ScalarConversion const & src);
	~ScalarConversion();

	// ScalarConversion const & operator=(ScalarConversion const & rhs);

	char	convertStringToChar(std::string const & srcString);
	int		convertStringToInt(std::string const & srcString);
	float	convertStringToFloat(std::string const & srcString);
	double	convertStringToDouble(std::string const & srcString);	
private :
	char	_charValue;
	int		_intValue;
	float	_floatValue;
	double	_doubleValue;
};

#endif