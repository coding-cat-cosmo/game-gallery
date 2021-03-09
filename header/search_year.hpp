#ifndef __SEARCH_YEAR_HPP__
#define __SEARCH_YEAR_HPP__

#include "collection.hpp"
#include "search.hpp"
#include <iostream>

class SearchYear: public Searcher{
        public:
	SearchYear(){}
	~SearchYear(){}
        VideoGame* search(Collection* gal, std::string searchTerm){
                for(int i=0;i<gal->getCollection().size();++i){
                        if(to_string(gal->getCollection()[i]->getYear())==searchTerm){
                        return gal->getCollection()[i];
                        }
                }
                return nullptr;
        }

};

#endif // __SEARCH_YEAR_HPP__


