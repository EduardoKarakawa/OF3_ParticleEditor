#pragma once

#include "ofxGui.h"
#include "ofxLabel.h"


class Gui {
	private:
		ofxFloatSlider size, lifeTime, angle, radius; //slider float
		ofxVec2Slider worldPos, imagePoint; //slider vector
		ofxIntSlider velocity, quantity; //slider int
		ofxColorSlider color; //slider color
		ofxButton flash; //check button 
		ofxToggle fill; //
		ofxPanel gui;
		ofxLabel screenSize;
		float buttonHide;
	public:
		void init();
		void update();
		void draw();
		void hide();
		void resize(int w, int h);
};