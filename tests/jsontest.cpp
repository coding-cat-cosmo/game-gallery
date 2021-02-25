#include "../header/fileManip.hpp"
#include "nlohmann/json.hpp"
#include <string>
#include <iostream>

using namespace std;

int main(){

  fileManip* file=new fileManip("n1");
        json j=file->newJSON();
        j["test"]= "hello world";
        file->save(j);
	cout<< j.dump()<<endl;
	cout<<file->load().dump()<<endl;
	
return 0;
}
