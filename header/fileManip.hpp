#ifndef FILEMANIP_HPP
#define FILEMANIP_HPP

#include <string>
#include "nlohmann/json.hpp"
#include <iostream>

// for convenience
using json = nlohmann::json;

/**
 		* @brief: This class has all the main functionality for any desirable action to be ran on the videoGame database
 		* 
		*/

class fileManip{
	private:
	std::string filename;

	public:
	/**
		* @brief: constructor of the fileManip class that initializes with passed in objects
		* 
		* @param: None
		* @return: fileManip Object
		*/
	fileManip(std::string name);
	/**
  		* @brief: destructor of the fileManip class
  	 	* 
  	 	* @param: None
  	 	* @return: fileManip Object
  	 	*/
	~fileManip(){}
	/**
 	 	 * @brief: saves the file to the database
  	 	 * 
  	 	 * @param: json j for json object to save to file
  	 	 * @return: None
  	 	 */
	void save(json j);
        /**
         	* @brief: load the file from the database
         	*            
                * @param: None
                * @return: retunrs a JSON object
                */

	json load();
        /**           
  		 * @brief: creates a new JSON file into the database
  		 *
  		 * @param: None
  		 * @return: returns a JSON object
                 */

	json newJSON();
};


#endif
