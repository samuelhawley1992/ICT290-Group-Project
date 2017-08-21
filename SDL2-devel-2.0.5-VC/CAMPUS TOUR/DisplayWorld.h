#ifndef DISPLAY_H
#define DISPLAY_H


#include<stdlib.h>
#include <math.h>
#include <freeglut.h>
#include <time.h>



//#include <windows.h> // only used if mouse is required (not portable)
#include "camera.h"
#include "texturedPolygons.h"



class Display {

public:
	bool displayWorld();

	bool drawWorld();

private:

	// calls display functions below to draw the backdrops
	void DrawBackdrop();
	// functions to display display lists (images) and bind them to a texture
	void DisplayAboveWindowBlock();
	void DisplayBench();
	void DisplayBricks();
	void DisplayChancPosts();
	void DisplayCylinders();
	void DisplayDoorPaving();
	void DisplayDoorPosts();
	void DisplayEntranceSteps();
	void DisplayExtras();
	void DisplayGrass();
	void DisplayLargerTextures();
	void DisplayLibraryPosts();
	void DisplayMainPosts();
	void DisplayPavement();
	void DisplayPhysSciPosts();
	void DisplayPurplePosts();
	void DisplayRedPosts();
	void DisplayRoof();
	void DisplayStepBricks();
	void DisplayLights();
	void DisplayECL();

	// calls functions to create display lists (below)
	void CreateTextureList();
	// creates display lists
	void DrawGrass();
	void DrawChancPosts();
	void DrawDoorPosts();
	void DrawPurplePosts();
	void DrawRedPosts();
	void DrawMainPosts();
	void DrawAboveWindowBlock();
	void DrawDoorPaving();
	void DrawPhysSciPosts();
	void DrawLibraryPosts();
	void DrawBricks();
	void DrawPavement();
	void DrawExtras();
	void DrawRoof();
	void DrawEntranceSteps();
	void DrawLargerTextures();
	void DrawLights();
	void DrawBench();
	void DrawCylinders();
	void DrawAngledRoofBeam(int listNo, GLdouble x, GLdouble y, GLdouble z, GLdouble beamSize);
	void DrawAngledRoofBeam2(int listNo, GLdouble x, GLdouble y, GLdouble z, GLdouble beamSize);
	void DrawStepBricks();
	void DrawMapExit();
	void DrawECL();

};

#endif 
