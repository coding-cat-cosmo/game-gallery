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
	jsontrack=0;
	}
	
	fileManip::fileManip(string name,Collection* gal){
	filename=name;
	gallery=gal;
	games=gal->getCollection();
	jsontrack=0;
	}

	void fileManip::save(json j){
		ofstream o;
		o.open(filename);
		string s;
		json sj;
		if(j.dump()!="null"){
			s=j.dump();
		}
		
		if(gallery!=nullptr&&games.size()!=0){
			for(int i=0;i<games.size();++i){
		sj[i+jsontrack]={ {"Id",games[i]->getId()}, {"Name",games[i]->getName()}, {"Year",games[i]->getYear()}, {"Publisher",games[i]->getPub()},
		{"System",games[i]->getSystem()}, {"Genre",games[i]->getGenre()},  {"Rating",games[i]->getRating()}, {"Size",games[i]->getSize()},
		 {"Cost",games[i]->getCost()}, {"Player",games[i]->getPlayer()}};
			
			//made a json initializer instead of string to json initializer but format did not look goo but kept it incase client wants it in that format	
			//sj[i]=games[i]->getjsonstring();
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
		int i=0;
		if(gallery!=nullptr){
			while(j[i].dump()!="null"){
			++jsontrack;
			++i;
			}
		}
		return j;
	}
	json fileManip::newJSON(){
		ofstream nj(filename);
		json j;
		nj.close();
		return j;
	}
	
	Collection fileManip::fileRead(json j){
		string name;
		unsigned int year;
		string pub;
		string system;
		string genre;
		//string rating=j[0]["Rating"];
		string size;
		unsigned int cost;
		unsigned int player;
		char change='t';
		Collection gallery;
		for(int i=0;i<jsontrack;++i){
			if(j[i].dump()!="null"){
			name=j[i]["Name"];
			year=j[i]["Year"];
			pub=j[i]["Publisher"];
			system=j[i]["System"];
			genre=j[i]["Genre"];
		//rating
			size=j[i]["Size"];
			cost=j[i]["Cost"];
			player=j[i]["Player"];
			gallery.add(new VideoGame(name,year,pub,system,genre,change,size,cost,player));
		//VideoGame* vid = new VideoGame(j[0]["Name"],j[0]["Year"],j[0]["Publisher"],j[0]["System"],j[0]["Genre"],j[0]["Size"],j[0]["Cost"],j[0]["Player"]); 
			}
		}	
		return gallery;
	}
