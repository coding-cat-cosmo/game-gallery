#include "../header/videogame.hpp"

	void VideoGame::print() const {
        cout << "ID: " << getId() << " Name: " << getName() << " Year: " << getYear() 
        << " Publisher: " << getPub() << " System: " << getSystem() 
        << " Genre: " << getGenre() << " Rating: " << getRating() << " Size: " << getSize()
        << " Cost: " << getCost() << " Player: " << getPlayer() << endl << endl;
    }

	int VideoGame::getId() const {
        return id;
    }

	string VideoGame::getName() const {
        return name;
    }

	int VideoGame::getYear() const {
        return year;
    }

	string VideoGame::getPub() const {
        return publisher;
    }

	string VideoGame::getSystem() const {
        return system;
    }

	string VideoGame::getGenre() const {
        return genre;
    }

	char VideoGame::getRating() const {
        return rating;
    }

	string VideoGame::getSize() const {
        return size;
    }

	int VideoGame::getCost() const {
        return cost;
    }

	int VideoGame::getPlayer() const {
        return players;
    }

	void VideoGame::setName(string nam) {
        name = nam;
    }

	void VideoGame::setYear(int yr) {
        year = yr;
    }

	void VideoGame::setPub(string pub) {
        publisher = pub;
    }

	void VideoGame::setSystem(string sys) {
        system = sys;
    }

	void VideoGame::setGenre(string gen) {
        genre = gen;
    }

	void VideoGame::setRating(char rat) {
        rating = rat;
    }

	void VideoGame::setSize(string mem) {
        size = mem;
    }

	void VideoGame::setCost(int money) {
        cost = money;
    }

	void VideoGame::setPlayer(int play) {
        players = play;
    }

