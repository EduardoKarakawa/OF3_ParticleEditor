#include "ParticleSystem.h"



ParticleSystem::ParticleSystem()
{
}


ParticleSystem::~ParticleSystem()
{
}

void ParticleSystem::Setup()
{
	// TODO Inicia os parametros da sistema de particula novo
}

void ParticleSystem::Update(ofVec2f position, float deltaTime)
{
	// TODO Atualiza a lista de particulas do sistema de particula, chama o DestroyParticle se a particula atingiu o tempo maximo de vida
	// cria uma nova particula caso o tempo ultrapasse o tempo de spawn
}

void ParticleSystem::Draw()
{
	// Percorre a lista de particular desenhando elas

}

void ParticleSystem::SpawnParticle(float deltaTime)
{
	// TODO Verifica se o tempo de spawn foi atingido e cria uma particula na lista de particulas

}

void ParticleSystem::DestroyParticle(Particle & particle)
{
	// TODO Verifica se uma particula atingiu o tempo maximo de vida e destroy ela caso for verdadeiro
}
