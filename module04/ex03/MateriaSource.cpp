//
// Created by Mauro Early on 12/1/21.
//

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	_cntAMateria = 0;
	_store = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		_store[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource &obj) {
	_cntAMateria = obj.getCntAMateria();
//	this->_store = new AMateria*[4];
	for (int i = 0; i < _cntAMateria; i++) {
//		delete _store[i];
		_store[i] = obj._store[i]->clone();
	}
}

MateriaSource &MateriaSource::operator=(MateriaSource &obj) {
	_cntAMateria = obj.getCntAMateria();
//	this->_store = new AMateria*[4];
	for (int i = 0; i < _cntAMateria; i++) {
//		delete _store[i];
		_store[i] = obj._store[i]->clone();
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		delete _store[i];
	}
	delete[] _store;
}

void MateriaSource::learnMateria(AMateria *materia) {

	if (_cntAMateria < 4) {
		delete _store[_cntAMateria];
		_store[_cntAMateria] = materia;
		_cntAMateria++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	int i = 0;
	while (_store[i] != 0)
	{
		if (!_store[i]->getType().compare(type)) {
			return (_store[i]->clone());
		}
		i++;
	}
	return (0);
}

int MateriaSource::getCntAMateria() {
	return _cntAMateria;
}
