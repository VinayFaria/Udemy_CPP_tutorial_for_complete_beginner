#include "Swarm.h"

namespace screen_processing {
    Swarm::Swarm() {
        m_pParticles = new Particle[NPARTICLES];    // allocating array of particles space in memory
    }

    Swarm::~Swarm() {
        delete [] m_pParticles; // after using clearing up the memory of particles
    }
}
