#ifndef __SEARCH_HPP__
#define __SEARCH_HPP__

#include "collection.hpp"

class Searcher{
        public:
        virtual ~search()=0;
        virtual void search(vector <VideoGame*> games,string s)=0;
}

#endif // __SEARCH_HPP__

