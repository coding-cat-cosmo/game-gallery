#include "../header/fileManip.hpp"
#include <nlohmann/json.hpp>
#include <iostream>
#include <fstream>
#include <iterator>

using namespace std;
using json = nlohmann::json;

int main(){

        vector<VideoGame*> vidGames;
        Collection* gal = new Collection(vidGames);
	VideoGame* vid = new VideoGame("Pac-Man", 2000, "NAMACO", "Genesis", "puzzle", 'T', "2 GB", 40, 2);
	gal->add(vid);
        fileManip* file=new fileManip("n2",gal);
        json j=file->newJSON();
        file->save(j);
	//cout <<: j;
	delete []vid;
	delete gal;
	delete file;
	remove("n2");

return 0;
}
