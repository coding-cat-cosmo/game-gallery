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
}
