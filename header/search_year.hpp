#ifndef __SEARCH_YEAR_HPP__
#define __SEARCH_YEAR_HPP__

#include "collection.hpp"
#include "search.hpp"
#include <iostream>

class searchYear: public searcher{
        public:
        void search(vector <VideoGame*> games, std::string searchTerm){
                int tracker=0;
                for(int i=0;i<games.size();++i){
                        if(games[i]->getYear()==searchTerm){
                        games[i]->print();
                        tracker++;
                        }
                }
                if(tracker==0){
                std::cout<<"No games with year: "<<searchTerm<<std::endl;
                }
        }

}

#endif // __SEARCH_YEAR_HPP__


