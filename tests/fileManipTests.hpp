#include "../header/fileManip.hpp"

TEST(filemanipTest, newJSON){
	fileManip* file=new fileManip("n1");
	json j=file->newJSON();
	j["test"]= "hello world";
	file->save(j);
	EXPECT_EQ("{\"test\":\"hello world\"}",j.dump());
	delete file;
	remove("n1");
}

TEST(filemanipTest, loadtest){
	fileManip* file=new fileManip("n1");
	json j=file->newJSON();
	j["test"]= "hello world";
        file->save(j);
	json y=file->load();
	EXPECT_EQ("\"{\\\"test\\\":\\\"hello world\\\"}\"",y.dump());
        delete file;
	remove("n1");
}

TEST(filemanipTest, savetest){
	fileManip* file=new fileManip("n1");
	json j=file->newJSON();	
	j["test"]= "hello";
	file->save(j);
	EXPECT_EQ("{\"test\":\"hello\"}",j.dump());
        delete file;
	remove("n1");
}

TEST(filemanipTest, emptyGalleryTest){
	Collection* gal=new Collection();
	fileManip* file=new fileManip("n2",gal);
        json j=file->newJSON();
        file->save(j);
	EXPECT_EQ("null",j.dump());
	delete file;
	delete gal;
	remove("n2");
}

TEST(filemanipTest, GalleryTest){
        vector<VideoGame*> vidGames;
	VideoGame* vid = new VideoGame("Pac-Man", 2000, "NAMACO", "Genesis", "puzzle", 'T', "2 GB", 40, 2);
	Collection* gallery = new Collection(vidGames);
	gallery->add(vid);
        fileManip* file=new fileManip("n2",gallery);
        json j=file->newJSON();
        file->save(j);
	json t=file->load();
        
	EXPECT_EQ("[\"ID: 3, Name: Pac-Man, Year: 2000, Publisher: NAMACO, System: Genesis, Genre: puzzle, Rating: T, Size: 2 GB, Cost: 40, Player: 2 }\"]",t.dump());
        delete file;
        delete gallery;
        remove("n2");
           }
  
