#include "../header/fileManip.hpp"

TEST(filemanipTest, newJSON){
	fileManip* file=new fileManip("n1");
	json j=file->newJSON();
	j["test"]= "hello world";
	file->save(j);
	EXPECT_EQ("{\"test\":\"hello world\"}",j.dump());
	delete file;
}

TEST(filemanipTest, loadtest){
	fileManip* file=new fileManip("n1");
	json j=file->load();
	EXPECT_EQ("{\"test\":\"hello world\"}",j.dump());
        delete file;
}

TEST(filemanipTest, savetest){
	fileManip* file=new fileManip("n1");
	json j=file->load();	
	j["test"]= "hello";
	file->save(j);
	EXPECT_EQ("{\"test\":\"hello\"}",j.dump());
        delete file;
	remove("n1");
}

TEST(filemanipTest, galleryTest){
	vector<VideoGame*> vidGames;
  	Collection* gal = new Collection(vidGames);
	fileManip* file=new fileManip("n2",gal);
        json j=file->newJSON();
        file->save(j);
        //EXPECT_EQ("{\"Pac-Man\":{{\"Year\":\"2000\"},\n{\"Publisher\":\"NAMACO\"},\n{\"System\":\"Genesis\"},\n{\"Genre\":\"puzzle\"},\n{\"Rating\":\"T\"},\n{\"Size\":\"2 GB\"},\n{\"Cost\":\"40\"},\n{\"ID\":\"2\"}}}",j.dump());
        
	EXPECT_EQ("null",j.dump());
	delete file;
	//delete vid;
	delete gal;
	remove("n2");
}
