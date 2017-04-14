#include "ParticleEmission.h"

ParticleEmission::ParticleEmission(){}
ParticleEmission::~ParticleEmission(){}


void ParticleEmission::Setup(ofVec2f origin, ofVec2f direction, float openAngle, float speed, float lifeTime, float timeSpawn, string sprite, float size)
{
	// Inicia os parametros da sistema de particula novo
	m_sprite.loadImage(sprite);
	m_sprite.resize(size, size);
	m_sprite.setAnchorPoint(m_sprite.getWidth() / 2.0f, m_sprite.getHeight() / 2.0f);
	m_positionOrigin = origin;
	SetDirection(direction);
	m_openAngle = openAngle;
	m_maxLifeTime = lifeTime;
	m_velocity = speed;
	m_timeSpawnParticle = timeSpawn;
	m_spawnTimeCont = 0;
}

void ParticleEmission::Update(ofVec2f position, float deltaTime)
{
	// Atualiza a lista de particulas do sistema de particula, chama o DestroyParticle se a particula atingiu o tempo maximo de vida
	// cria uma nova particula caso o tempo ultrapasse o tempo de spawn
	m_positionOrigin = position;
	m_spawnTimeCont += ofGetElapsedTimeMicros();

	// Cria uma particula
	CreateParticle();

	// Verifica as particulas que ultrapassaram o tempo maximo de vida e exclui eles do vetor
	std::vector<Particle>::iterator aux;	// Iterator para percorrer a lista de particles

	for (aux = m_particles.begin(); aux != m_particles.end(); aux++) {	
		// Atualiza a particula
		aux->Update(m_positionOrigin, deltaTime);

		// Verifica se a particle ultrapassou o tempo de vida, se sim ela eh destruida
		if (!aux->IsLife()) {
			aux = m_particles.erase(aux);
		}
	}

}

void ParticleEmission::SetDirection(ofVec2f newDirection)
{
	// Define uma nova direcao para o emissor de particulas, pode ser usado para mudar a direcao das particulas quando
	// o player virar para outro lado, ou usar o mouse para apontar uma direcao
	m_direction = newDirection;
}

void ParticleEmission::Draw()
{
	// Percorre a lista de particular desenhando elas
	std::vector<Particle>::iterator aux;	// Iterator para percorrer a lista de particles
	for (aux = m_particles.begin(); aux != m_particles.end(); aux++) {
		aux->Draw(m_sprite, m_positionOrigin);
	}
}

void ParticleEmission::CreateParticle()
{
	// Cria uma particula se ja tiver passado o tempo necessario para criar uma
	if (m_spawnTimeCont > m_timeSpawnParticle) {
		m_particles.push_back(Particle());
		float tmpOP = 90.f + rand() % 165;

		// Inicializa a nova particula criada
		(m_particles.end()-1)->Setup(m_positionOrigin, m_direction, m_openAngle, m_velocity, m_maxLifeTime, tmpOP);
	}
}
