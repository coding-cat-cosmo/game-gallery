#ifndef FILEMANIP_HPP
#define FILEMANIP_HPP

#include <string>
#include "nlohmann/json.hpp"
#include <iostream>


// for convenience
using json = nlohmann::json;

class fileManip{
	protected:
		std::string filename;
	public:
		fileManip(std::string name);
		~fileManip();
		void save(json j);
		json load();
		json newJSON();
};


#endif
