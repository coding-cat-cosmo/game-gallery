#ifndef _SORT_PUB_
#define _SORT_PUB_
#include "sorter.hpp"
#include "collection.hpp"

class Sort_Pub: public Sorter {
   public:
        Sort_Pub() {}
	~Sort_Pub() {}
        virtual void sort(Collection* gallery);
};

#endif
