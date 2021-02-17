#include "../header/videogame.hpp"

	void VideoGame::print() {
        cout << "ID: " << getId() << " Name: " << getName() << " Year: " << getYear() 
        << " Publisher: " << getPub() << " System: " << getSystem() 
        << " Genre: " << getGenre() << " Rating: " << getRating() << " Size: " << getSize()
        << " Cost: " << getCost() << " Player: " << getPlayer() << endl << endl;
    }

	int VideoGame::getId() {
        return id;
    }

	string VideoGame::getName() {
        return name;
    }

	int VideoGame::getYear() {
        return year;
    }

	string VideoGame::getPub() {
        return publisher;
    }

	string VideoGame::getSystem() {
        return system;
    }

	string VideoGame::getGenre() {
        return genre;
    }

	char VideoGame::getRating() {
        return rating;
    }

	string VideoGame::getSize() {
        return size;
    }

	int VideoGame::getCost() {
        return cost;
    }

	int VideoGame::getPlayer() {
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

