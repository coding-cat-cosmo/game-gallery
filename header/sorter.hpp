#ifndef SORTER_HPP
#define SORTER_HPP
#include "collection.hpp"
#include "videogame.hpp"

class Sorter {
   public:
	/*
	 * @brief: basic constructor that initializes a Sorter
	 *
	 * @param: None
	 * @return: Sorter Object
	 */
	Sorter() {}
	/*
	 * @brief: virtual sort function that sorts the gallery
	 *
	 * @param: pointer to collection to be sorted
	 * @return: none
	 */
	virtual void sort(Collection* gallery) = 0;
};

#endif
