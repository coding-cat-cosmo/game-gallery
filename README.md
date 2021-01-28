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


Flyweight, Composite and Decorator are the design patterns we will be using.

Flyweight-We picked flyweight in order to reduce memory usage within the database. If we input too much data, there will be a heavy memory cost for implementing the database. Using flyweight will reduce the redundancy of many parts of the code and save memory. This is a good solution because there will be similar data for all video games and by using flyweight it will help manage high memory cost with the database.

Composite- We picked composite in order to create a tree for our database as it is the most applicable design pattern for this idea. There will be issues with structure and organization of where video games will be placed. Using composite will organize and simplify how the data is arranged and managed. This is a good solution because it will treat the video games as collections of leaf nodes rather than individual data.

Decorator- We picked decorator in order to extend the function of base components using wrappers. When we have to implement many of the classes, there will be a need for differentiation for unique features for specific data of video games. Decorator will allow us to create more features with less code redundancy. This is a good solution because decorator will reduce the amount of code required for necessary functions and overcome limitations from just inheritance.

Taking all three of these design patterns together makes it a lot easier to create our database. By using the Composite pattern we make sure that each video game is much more easy to manage then if we tried one by one. Additionally we use flyweight to take out some of the load on the video game classes and keep those as separate classes to save memory and work for each part. Finally, adding the Decorator pattern allows us to switch between different ways to search or sort the database so that the user can use different keywords or algorithms to easily find or organize their collection. Putting it all together will help make the database as responsive as possible for the user.


 > ## Phase II
 > In addition to completing the "Class Diagram" section below, you will need to 
 > * Set up your GitHub project board as a Kanban board for the project. It should have columns that map roughly to 
 >   * Backlog, TODO, In progress, In testing, Done
 >   * You can change these or add more if you'd like, but we should be able to identify at least these.
 > * There is no requirement for automation in the project board but feel free to explore those options.
 > * Create an "Epic" (note) for each feature and each design pattern and assign them to the appropriate team member. Place these in the `Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Create smaller development tasks as issues and assign them to team members. Place these in the `Backlog` column.
 >   * These cards should represent roughly 7 days worth of development time for your team, taking you until your first meeting with the TA
## Class Diagram
 > Include a class diagram(s) for each design pattern and a description of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper OMT notation (as discussed in the course slides). You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description). 
 
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
 
