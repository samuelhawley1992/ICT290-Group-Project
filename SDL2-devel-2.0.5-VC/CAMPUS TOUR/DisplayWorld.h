#ifndef DISPLAYWORLD_H
#define DISPLAYWORLD_H


#include<stdlib.h>
#include <math.h>
#include <freeglut.h>
#include <time.h>



//#include <windows.h> // only used if mouse is required (not portable)
#include "camera.h"
#include "texturedPolygons.h"
#include"DefineList.h"



class DisplayWorld {

public:
	// calls display functions below to draw the backdrops
	 bool RenderWorld(bool lightsOn);

	// calls functions to create display lists (below)
	bool DrawWorld();

	
	void deleteImageFromMemory();

	GLuint getWelcomeTex();

	GLuint getExitTex();

	GLuint getNoExitTex();

	GLuint getMapTex();

private:

	// deletes image and clears memory
	void deleteTempImageFromMemory(unsigned char* tempImage);
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

	void CreateTextures();

	TexturedPolygons tp;
	// varibles used for tarnslating graphics etc
	GLdouble step, step2, stepLength;
	// Glut Cylinder
	GLUquadricObj *glu_cylinder;
	// Stores raw image file
	unsigned char* image = NULL;


};

#endif 
