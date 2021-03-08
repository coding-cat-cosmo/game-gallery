#ifndef __SEARCH_GENRE_HPP__
#define __SEARCH_GENRE_HPP__

#include "collection.hpp"
#include "search.hpp"
#include <iostream>

class SearchGenre: public Searcher{
        public:
	SearchGenre(){}
	~SearchGenre(){}
        VideoGame* search(Collection* gal,std::string searchTerm){
                for(int i=0;i<gal->getCollection().size();++i){
                        if(gal->getCollection()[i]->getGenre()==searchTerm){
                        return  gal->getCollection()[i];
                        }
                }
        }

};

#endif // __SEARCH_GENRE_HPP__


