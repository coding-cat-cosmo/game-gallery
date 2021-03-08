#ifndef _SORT_NAME_
#define _SORT_NAME_
#include "sorter.hpp"
#include "collection.hpp"

class Sort_Name: public Sorter {
   public:
	Sort_Name() {}
	~Sort_Name() {}
	virtual void sort(Collection* gallery);
};

#endif
