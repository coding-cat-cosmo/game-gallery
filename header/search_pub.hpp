#ifndef __SEARCH_PUB_HPP__
#define __SEARCH_PUB_HPP__

#include "collection.hpp"
#include "search.hpp"
#include <iostream>

class searchPub: public searcher{
        public:
        void search(vector <VideoGame*> games, std::string searchTerm){
                int tracker=0;
                for(int i=0;i<games.size();++i){
                        if(games[i]->getPub()==searchTerm){
                        games[i]->print();
                        tracker++;
                        }
                }
                if(tracker==0){
                std::cout<<"No games with publisher: "<<searchTerm<<std::endl;
                }
        }

}

#endif // __SEARCH_PUB_HPP__


