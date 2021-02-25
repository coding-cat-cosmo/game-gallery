#ifndef COLLECTION_HPP
#define COLLECTION_HPP
#include "videogame.hpp"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Collection {
    private:
	vector<VideoGame*> games;
    public:
	Collection() {}
	Collection(vector<VideoGame*> game);
	~Collection();
	void add(VideoGame*);
	void eliminate(VideoGame*);
	void print() const;
};

#endif
