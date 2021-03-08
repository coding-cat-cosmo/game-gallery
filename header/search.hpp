#ifndef __SEARCH_HPP__
#define __SEARCH_HPP__

#include "collection.hpp"
#include <iostream>
#include <sstream>


class Searcher{
        public:
        ~Searcher(){}
        virtual VideoGame* search(Collection* gal,string s)=0;
};

#endif // __SEARCH_HPP__

