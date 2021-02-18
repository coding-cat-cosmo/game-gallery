#ifndef VIDEOGAME_HPP
#define VIDEOGAME_HPP
#include <iostream>
using namespace std;

static unsigned int newID = 1;

class VideoGame {
	private:
		string name;
		unsigned int year;
		string publisher;
		string system;
		string genre;
		char rating;
		string size;
		unsigned int cost;
		unsigned int players;
		unsigned int id;
	public:
		VideoGame() : name("Galaga"), year(1999), publisher("ATARI"), system("Arcade Machine"), 
		genre("shooter"), rating('E'), size("2.5 GB"), cost(35), players(1) { id = newID++; }
		VideoGame(string nam, int yr, string pub, string sys, string gen, char rat, string mem,
		 int value, int play) : name(nam), year(yr), publisher(pub), system(sys), genre(gen), 
		 rating(rat), size(mem), cost(value), players(play) { id = newID++;}

		~VideoGame() {}
		void print() const;
		int getId() const;
		string getName() const;
		int getYear() const;
		string getPub() const;
		string getSystem() const;
		string getGenre() const;
		char getRating() const;
		string getSize() const;
		int getCost() const;
		int getPlayer() const;
		void setName(string);
		void setYear(int);
		void setPub(string);
		void setSystem(string);
		void setGenre(string);
		void setRating(char);
		void setSize(string);
		void setCost(int);
		void setPlayer(int);
};
		
#endif //VIDEOGAME_HPP
