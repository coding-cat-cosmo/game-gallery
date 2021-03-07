#include "../header/fileManip.hpp"
#include <nlohmann/json.hpp>
#include <iostream>
#include <fstream>
#include <iterator>
#include <sstream>
	
using namespace std;
using json = nlohmann::json;
	
	fileManip::fileManip(string name){
	filename=name;
	gallery=nullptr;
	}
	
	fileManip::fileManip(string name,Collection* gal){
	filename=name;
	gallery=gal;
	games=gal->getCollection();
	}

	void fileManip::save(json j){
		ofstream o;
		o.open(filename);
		string s;
		json sj;
		if(j.dump()!="null")
			s=j.dump();
		if(gallery!=nullptr&&games.size()!=0){
			for(int i=0;i<games.size();++i){
				sj[i]=games[i]->getjsonstring();
			}
		}
		else{
		sj=s;
		}
		o << sj;
		o.close();

	}

	json fileManip::load(){
		ifstream f(filename);
		json j;
		f >> j;
		return j;
	}
	json fileManip::newJSON(){
		ofstream nj(filename);
		json j;
		nj.close();
		return j;
	}
