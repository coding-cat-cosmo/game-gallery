# Video Game Gallery
 
 > Authors: 
 [Matthew Hunt](https://github.com/coding-cat-cosmo),
 [Cody Phu](https://github.com/codyphu),
 [Rohit Chandran](https://github.com/rchandran7)

## Project Description
Video Games have a large presence in todays’ society so having a database for them with all the information at a user’s fingertips could save a lot of searching and backlogging to get specific data about each game.

The language we will be implementing this database with is C++.
* Tools/Technology:
  * [Doxygen](https://www.doxygen.nl/index.html) for standardized documentation across different classes
  * [JSON](https://github.com/nlohmann/json) for storage of data for video games within the database
  * [GitHub](https://github.com/) for code repository and to share code with each person
  * [Google Tests](https://github.com/google/googletest) for testing classes/units/funtions/etc.
  * [Valgrind](https://valgrind.org/) for testing classes/units/functions for memory leaks.

The input should be data about the video game such as title, genre, system, etc.
The output should be data about the game selected by the user.


Composite and Strategy are the design patterns we will be using.

Composite- We picked composite in order to create a tree for our database as it is the most applicable design pattern for this idea. There will be issues with structure and organization of where video games will be placed. Using composite will organize and simplify how the data is arranged and managed. This is a good solution because it will treat the video games as collections of leaf nodes rather than individual data.

Strategy- We chose strategy in order to extend the allow the client to choose the appropriate	function for what they need. There will be different sets of data within the database and there will be a need for differentiation for unique features for specific data of video games. Strategy will allow us to create more features with less code redundancy. This is a good solution because strategy will reduce the amount of code required for necessary functions and overcome limitations from just inheritance.

Using these two design patterns together makes it a lot easier to create our database. By using the Composite pattern we make sure that each video game is much more easy to manage then if we tried one by one. Additionally, adding the Strategy pattern allows us to switch between different ways to search or sort the database so that the user can use different keywords or algorithms to easily find or organize their collection. Putting it all together will help make the database as responsive as possible for the user.


## Class Diagram

The Client will interact with the program by selecting which sorting or selecting method they want. The Client will also be able to add and delete video games from the collection. They will also be able to print the entire database or data about a videogame they searched for.
The base class, GameGallery, has multiple aggregations with objects for file manipulation, strategies for sorting and finding different video games, and a composite for individually managing all of the video games in the library.

There are multiple strategies used to create different types of algorithms with inheritance for searching and sorting the collection of video games. In the GameGallery class there is a pointer to the abstract base class that then uses polymorphism to select the right algorithm. The search can be done by name, publisher, genre, or year it came out. The same goes for the sorting of the collection. The classes implement an abstract base class which means they all have either the same sort function, or the same search function.

The actual manipulation (like adding and deleting video games) of the data from the video games is done by the composite Collection and VideoGame. Collection is managing VideoGame in order to create the composite. The composite is taking on the role of encapsulating all of the Video Game information within its functionality.

 File manipulation is done in its own class to avoid having too heavy of a load on the base class. The class itself will work directly with a JSON file. 
 
 ![Class Diagram](https://github.com/cs100/final-project-mhunt023-cphu003-rchan121/blob/master/Class%20Diagram%20(4).png)

 
 > ## Phase III
 > You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
 > * Before the meeting you should perform a sprint plan like you did in Phase II
 > * In the meeting with your TA you will discuss: 
 >   - How effective your last sprint was (each member should talk about what they did)
 >   - Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 >   - Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 >   - What tasks you are planning for this next sprint.

 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Kanban board. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
