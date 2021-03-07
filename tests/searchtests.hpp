#ifndef SEARCH_TEST_HPP
#define SEARCH_TEST_HPP

#include "../header/search.hpp"
#include "../header/search_name.hpp"
#include "../header/search_pub.hpp"
#include "../header/search_year.hpp"
#include "../header/search_genre.hpp"
#include <sstream>


TEST(SearchTests, MissingSearch){

	 vector<VideoGame*> vidGames;
 	 VideoGame* vid = new VideoGame("Pac-Man", 2000, "NAMACO", "Genesis", "puzzle", 'T', "2 GB", 40, 2);
   	 Collection* gallery = new Collection(vidGames);
   	 gallery->add(vid);
	 stringstream ss;
	 
	 	

}


#endif
