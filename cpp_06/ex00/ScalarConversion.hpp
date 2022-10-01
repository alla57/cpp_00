#ifndef SCALARCONVERSION_HPP
# define SCALARCONVERSION_HPP

# include <string>

int	detectType(std::string const srcString);
char	convertStringToChar(const char* srcString);
int	convertStringToInt(const char* srcString);
float	convertStringToFloat(const char* srcString);
double	convertStringToDouble(const char* srcString);
void	PrintCharResult(const double srcType);
void	PrintIntResult(const char* srcString, const double srcType);
void	PrintFloatResult(const double srcType, int precision);
void	PrintDoubleResult(const double srcType, int precision);
int		getPrecision(const char *srcString, int type);
size_t	ft_strlen(const char *str);
bool	ft_isdigit(char c);
bool	isFormatNumberValid(const char* str);
bool	isSpecialValue(const char *srcString);
bool	argumentIsValid(int argc, const char **argv);

#endif