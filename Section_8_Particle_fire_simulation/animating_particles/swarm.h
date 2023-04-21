// manage collection of particles
#ifndef SWARM_H_
#define SWARM_H_

#include "particle.h"

namespace screen_processing {
class Swarm {
public:
    const static int NPARTICLES = 1000; // number of particles
private:
    Particle *m_pParticles;
public:
    Swarm();
    virtual ~Swarm();
    void update();

    const Particle * const getParticles() {return m_pParticles; };   // const because after initializing particles it should not change its position
};

}

#endif // SWARM_H_

