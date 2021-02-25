#include "../header/fileManip.hpp"
#include <nlohmann/json.hpp>
#include <iostream>
#include <fstream>

using namespace std;
using json = nlohmann::json;

	fileManip::fileManip(string name){
	filename=name;
	}
	

	void fileManip::save(json j){
		ofstream o;
		o.open(filename);
		o << j;
		//not sure weather to save the data then delete or to just add data not in file already	
		o.close();
	}

	json fileManip::load(){
		ifstream i(filename);
		json j;
		i >> j;
		return j;
	}
	json fileManip::newJSON(){
		ofstream nj(filename);
		json j;
		nj.close();
		return j;
	}
