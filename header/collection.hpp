#ifndef COLLECTION_HPP
#define COLLECTION_HPP
#include "videogame.hpp"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
	* @brief: This class has all the data related to Collection in the database.
	*
	* 
	*/
class Collection {
    private:
	vector<VideoGame*> games;
    public:
	/**
	 * @brief: basic constructor that initializes an empty collection
	 *
	 * @param: None
	 * @return: Collection Object
	 */
	Collection() {}
	/**
	 * @brief: constructor that initializes a collection with passed in arguments
	 *
	 * @param: game: vector<VideoGame*>
	 * @return: Collection Object
	 */
	Collection(vector<VideoGame*> game);
	/**
	 * @brief: Collection destructor
	 *
	 * @param: None
	 * @return: None
	 */
	~Collection();
	/**
	 * @brief: adds passed in VideoGame object to the collection
	 *
	 * @param: VideoGame object pointer to  be added
	 * @return: None
	 */
	void add(VideoGame*);
	/**
	 * @brief: removes passed in VideoGame object from the collection
	 *
	 * @param: VideoGame object pointer to be removed
	 * @return: None
	 */
	void eliminate(VideoGame*);
	/**
	 * @brief: print function that prints out the entire collection and each video game's data
	 *
	 * @param: None
	 * @return: None
	 */
	void print() const;
	VideoGame* getVideoGame(int index);
	int getCollectionSize();
};

#endif
