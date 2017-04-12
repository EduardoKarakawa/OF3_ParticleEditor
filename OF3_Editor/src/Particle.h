#pragma once
#include "ofGraphics.h"
#include "ofVec2f.h"
#include "ofImage.h"

class Particle
{
	private:
		ofVec2f m_position;
		ofVec2f m_direction;
		float m_size;
		float m_lifeTime;
		float m_velocity;


	public:
		Particle();
		void Setup(ofVec2f origin, ofVec2f direction, float angle, float speed, float lifeTime, float size);
		void Update(ofVec2f origin, float deltaTime);
		bool IsLife();
		void Draw(ofImage sprite, ofVec2f origin);

		~Particle();
};

