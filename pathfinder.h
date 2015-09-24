/*
 * Pathfinder.h
 *
 *  Created on: May 29, 2015
 *      Author: crocket6
 */

#ifndef PATHFINDER_H_
#define PATHFINDER_H_

#include "PathfinderInterface.h"
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <algorithm>

const int STARTX = 0;
const int STARTY = 0;
const int STARTZ = 0;
const int ENDX = 4;
const int ENDY = 4;
const int ENDZ = 4;


class Pathfinder: public PathfinderInterface {
public:
	Pathfinder();
	virtual ~Pathfinder();
	string getMaze();
	void createRandomMaze();
	bool importMaze(string file_name);
	vector<string> solveMaze();
	bool validMaze(string file_name);
	bool recMaze(int i, int j, int k);
	void replaceTwos();
private:
	int myMaze[5][5][5];
	bool mazeNotCreated;
	vector<string> solvedMaze;
};

#endif /* PATHFINDER_H_ */
