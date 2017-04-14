# OF3_ParticleEditor
Editor de particula para materia de Oficina de Desenvolvimento 3.

Esse editor sera usado para adicionar particulas em um jogo que ainda será programado.
É um editor de particula simples que terá um emissor de particula em formato de cone,
O funcionamento é simples, existem duas casses, uma chamada Paticle e outra ParticleEmissor.

Particle é reponslável por armazenar as informações de uma única particula como posição, direção, 
velocidade de deslocamento, tempo de vida e opcidade da particula.

ParticleEmissor é reponsavel por guardar várias particulas que são criadas e gerenciar elas, definindo qual será
atualizada, destruída e desenhada. Ela também é reponsavel por definir o ponto de origem das particulas e a direção para elas 
irão "espirrar", o angulo de abertura maxima do cone e o tempo para criar uma nova particula.
