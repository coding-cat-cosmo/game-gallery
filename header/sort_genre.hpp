#ifndef _SORT_GENRE_
#define _SORT_GENRE_
#include "sorter.hpp"
#include "collection.hpp"

class Sort_Genre: public Sorter {
   public:
        Sort_Genre() {}
	~Sort_Genre() {}
        virtual void sort(Collection* gallery);
};

#endif
