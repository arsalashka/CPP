//
// Created by Mauro Early on 12/1/21.
//

#ifndef CPP_MATERIASOURCE_HPP
#define CPP_MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {
private:
	AMateria **_store;
	int	_cntAMateria;
public:
	MateriaSource();
	MateriaSource(MateriaSource &obj);
	MateriaSource &operator=(MateriaSource &obj);
	~MateriaSource();

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
	int getCntAMateria();
};


#endif //CPP_MATERIASOURCE_HPP
