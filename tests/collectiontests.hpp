#define private public //to access private member variables for testing
#ifndef COLLECTIONTESTS_HPP
#define COLLECTIONTESTS_HPP
#include "../header/collection.hpp"
#include "../header/videogame.hpp"

TEST(CollectionTest, AddConstructorTest) {
   vector<VideoGame*> vidGames;
   VideoGame* vid = new VideoGame("Pac-Man", 2000, "NAMACO", "Genesis", "puzzle", 'T', "2 GB", 40, 2);
   Collection* gallery = new Collection(vidGames);
   gallery->add(vid);
   EXPECT_EQ(gallery->games[0]->getName(), "Pac-Man");
   delete gallery;
}

TEST(CollectionTest, RemoveTest) {
   vector<VideoGame*> vidGames;
   VideoGame* vid = new VideoGame("Pac-Man", 2000, "NAMACO", "Genesis", "puzzle", 'T', "2 GB", 40, 2);
   VideoGame* vidTwo = new VideoGame("Minecraft", 2011, "Mojang", "PC, PS, Xbox", "adventure", 'E', "1 GB", 27, 1);
   Collection* gallery = new Collection(vidGames);
   gallery->add(vid);
   gallery->add(vidTwo);
   gallery->eliminate(vid);
   EXPECT_EQ(gallery->games[0]->getName(), "Minecraft");
   delete gallery;
}

TEST(CollectionTest, EmptyConstructorTest) {
   Collection gallery;
   EXPECT_EQ(gallery.games.empty(), true);
}
#endif  
