#ifndef __SEARCH_PUB_HPP__
#define __SEARCH_PUB_HPP__

#include "collection.hpp"
#include "search.hpp"
#include <iostream>

class SearchPub: public Searcher{
        public:
	SearchPub(){}
	~SearchPub(){}
        VideoGame* search(Collection* gal, std::string searchTerm){

                for(int i=0;i<gal->getCollection().size();++i){
                        if(gal->getCollection()[i]->getPub()==searchTerm){
                        return gal->getCollection()[i];
                        }
                }
                return nullptr;
        }

};

#endif // __SEARCH_PUB_HPP__


