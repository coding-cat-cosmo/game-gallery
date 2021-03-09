#ifndef __SEARCH_NAME_HPP__
#define __SEARCH_NAME_HPP__

#include "collection.hpp"
#include "search.hpp"
#include <iostream>

class SearchName: public Searcher{
        public:
	~SearchName(){}
        VideoGame* search(Collection* gal, std::string searchTerm){
		
		for(int i=0;i<gal->getCollection().size();++i){
			if(gal->getCollection()[i]->getName()==searchTerm){
			return gal->getCollection()[i];
			}
		}
		return nullptr;
	}

};

#endif // __SEARCH_NAME_HPP__

