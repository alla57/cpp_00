#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>

class Brain
{
public :
	Brain();
	Brain(const Brain & src);
	~Brain();

	Brain const & operator=(Brain const &);

	const std::string	getIdea(int pos) const;
	void				setIdea(std::string idea, int pos);
	void				initIdeas();
private :
	std::string _ideas[100];
};

#endif