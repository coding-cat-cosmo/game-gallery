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
	}

	void fileManip::save(json j){
		ofstream o;
		o.open(filename);
		if(gallery!=nullptr&&gallery->getCollection().size()!=0){
		gallery->print();
		//for(int i = 0; i <gallery->getCollection().size(); i++ ){
                //j[gallery->getCollection()[i]->getName()]={{"Year",gallery->getCollection()[i]->getYear()} , {"Publisher",gallery->getCollection()[i]->getPub()} , {"System",gallery->getCollection()[i]->getSystem()} , {"Genre",gallery->getCollection()[i]->getGenre()} , {"Rating",gallery->getCollection()[i]->getRating()} , {"Size",gallery->getCollection()[i]->getSize()} , {"Cost", gallery->getCollection()[i]->getCost()} , {"Player(s)",gallery->getCollection()[i]->getPlayer()} , {"ID",gallery->getCollection()[i]->getId()}};
                //}
		
		}
		o << j;
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
