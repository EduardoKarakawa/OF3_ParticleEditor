#pragma once
#include "ofGraphics.h"
#include "ofImage.h"
#include "ofVec2f.h"
#include "ofAppRunner.h"
#include "Particle.h"

class ParticleSystem
{
	private:
		
		ofVec2f m_sprite;
		float m_size;
		ofVec2f m_positionOrigin;
		ofVec2f m_direction;
		float m_openAngle;
		float m_maxLifeTime;
		float m_velocity;
		float m_timeSpawnParticle;


	public:
		ParticleSystem();
		~ParticleSystem();

		void Setup();
		void Update(ofVec2f position, float deltaTime);
		void Draw();
		void SpawnParticle(float deltaTime);
		void DestroyParticle(Particle& particle);

};

