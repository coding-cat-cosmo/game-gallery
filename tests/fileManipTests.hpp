#include "../header/fileManip.hpp"

TEST(filemanipTest, newJSON){
	fileManip* file=new fileManip("n1");
	json j=file->newJSON();
	j["test"]= "hello world";
	file->save(j);
	EXPECT_EQ("{\"test\":\"hello world\"}",j.dump());

}
