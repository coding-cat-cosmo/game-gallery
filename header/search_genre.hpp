#ifndef __SEARCH_GENRE_HPP__
#define __SEARCH_GENRE_HPP__

#include "collection.hpp"
#include "search.hpp"
#include <iostream>

class searchGenre: public searcher{
        public:
        void search(vector <VideoGame*> games, std::string searchTerm){
                int tracker=0;
                for(int i=0;i<games.size();++i){
                        if(games[i]->getGenre()==searchTerm){
                        games[i]->print();
                        tracker++;
                        }
                }
                if(tracker==0){
                std::cout<<"No games with genre: "<<searchTerm<<std::endl;
                }
        }

}

#endif // __SEARCH_GENRE_HPP__


