#include "Utilities.h"

constexpr int SCREEN_WIDTH = 1920;
constexpr int SCREEN_HEIGHT = 1080;

void render() {

}

void handleKeysUp(unsigned char _key, int _x, int _y) {

}

void handleKeysDown(unsigned char _key, int _x, int _y) {

}

void handleSpecialUp(int _key, int _x, int _y) {

}

void handleSpecialDown(int _key, int _x, int _y) {

}

void handleClicks(int _button, int _state, int _x, int _y) {
	
}

void mouseMoveActive(int _x, int _y) {

}

void mouseMove(int _x, int _y) {

}

void update() {

};

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA | GLUT_MULTISAMPLE);

	glutInitWindowSize(static_cast<int>(SCREEN_WIDTH), static_cast<int>(SCREEN_HEIGHT));


	//TODO: Cool Name
	glutCreateWindow("Heightmap Project");
	glutFullScreen();


	if (glewInit() != GLEW_OK) {
		//If glew init failed abort
		std::cout << "Glew Initialisation failed. Aborting Application." << std::endl;
	}

	glutSetOption(GLUT_MULTISAMPLE, 8);
	glEnable(GL_MULTISAMPLE);

	glEnable(GL_CULL_FACE);

	glutKeyboardFunc(handleKeysDown);
	glutKeyboardUpFunc(handleKeysUp);
	glutSpecialFunc(handleSpecialDown);
	glutSpecialUpFunc(handleSpecialUp);
	glutMouseFunc(handleClicks);
	glutMotionFunc(mouseMoveActive);
	glutPassiveMotionFunc(mouseMove);
	glutDisplayFunc(render);
	glutIdleFunc(update);
	glutMainLoop();
	return 0;
}