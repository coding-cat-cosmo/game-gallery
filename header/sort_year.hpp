#ifndef _SORT_YEAR_
#define _SORT_YEAR_
#include "sorter.hpp"
#include "collection.hpp"

class Sort_Year: public Sorter {
   public:
        Sort_Year() {}
	~Sort_Year() {}
        virtual void sort(Collection* gallery);
};

#endif
