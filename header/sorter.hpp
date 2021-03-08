#ifndef SORTER_HPP
#define SORTER_HPP
#include "collection.hpp"
#include "videogame.hpp"

class Sorter {
   public:
	Sorter() {}
	virtual void sort(Collection* gallery) = 0;
};

#endif
