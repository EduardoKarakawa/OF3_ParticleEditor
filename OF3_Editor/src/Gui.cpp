#include "Gui.h"
#include "ofApp.h"
#include "ofXml.h"

void Gui::init() {
	gui.setup();
	gui.add(size.setup("Size: ", 10, 0, 100)); // Tamanho
	gui.add(lifeTime.setup("Life Time: ", 100, 10, 500)); //Tempo de vida
	gui.add(angle.setup("Angle: ", 30, 0, 360)); // Angulo
	gui.add(radius.setup("Raio: ", 140, 10, 300));
	gui.add(worldPos.setup("Position: ", ofVec2f(ofGetWidth()*.5, ofGetHeight()*.5), 
										 ofVec2f(0, 0), ofVec2f(ofGetWidth(), ofGetHeight()))); //Posição no mundo 
	gui.add(velocity.setup("Velocity: ", 5, 0, 100));
	gui.add(quantity.setup("Quantity: ", 1, 1, 200));
	gui.add(color.setup("Color: ", ofColor(100, 100, 140), ofColor(0, 0), ofColor(255, 255)));
	gui.add(fill.setup("Fill", true));
	gui.add(flash.setup("Flash", false));
	//parameters.add(imagePoint.set("Image Point: ", middle, 0, ofGetWidth())); //Futuro ponto de inicio na imagem

	buttonHide = false;
	
}

void Gui::update() {

}

void Gui::draw() {
	ofBackgroundGradient(ofColor::white, ofColor::gray);

	ofSetColor(color);
	ofDrawCircle((ofVec2f)worldPos, radius);

	if (fill) {
		ofFill();
	}
	else {
		ofNoFill();
	}

	if (!buttonHide) {
		gui.draw();
	}
}

void Gui::hide() {
	buttonHide = !buttonHide;
}

void Gui::resize(int w, int h) {
	screenSize = ofToString(w) + "x" + ofToString(h);
}
