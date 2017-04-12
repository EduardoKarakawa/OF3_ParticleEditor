#include "Particle.h"

Particle::Particle()
{
	// TODO Construtor padrao da particula
}

void Particle::Setup(ofVec2f origin, ofVec2f direction, float angle, float speed, float lifeTime, float size)
{
	// TODO Inicia os parametros da particula, criar uma direcao aleatoria para a particula de acordo com a direcao e angulo de abertura passada.

}

void Particle::Update(ofVec2f origin, float deltaTime)
{
	// TODO Atualizar a posicao da particula
}

bool Particle::IsLife()
{
	// TODO Retorna um bool disendo se a particula atingiu o tempo maximo de vida, essa funccao sera usada para verificar se a particula pode ser destruida
	return false;
}

void Particle::Draw(ofImage sprite, ofVec2f origin)
{
	// TODO Desenha a particula apartir da posicao de origem, no caso onde a orgem da particula estiver + a posicao da particula atual
}

Particle::~Particle()
{
}
