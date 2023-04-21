#include <stdlib.h>
#include "particle.h"

namespace screen_processing {
Particle ::Particle() {  // constructor
    m_x = ((double)(2*rand())/RAND_MAX) - 1;
    m_y = ((double)(2*rand())/RAND_MAX) - 1;

    m_xspeed = 0.001 * (((double)(2*rand())/RAND_MAX) - 1); // speed along x direction
    m_yspeed = 0.001 * (((double)(2*rand())/RAND_MAX) - 1); // speed along y direction
}

Particle ::~Particle() {  // destructor
}

void Particle::update() {
    m_x += m_xspeed;
    if (m_x <= -1.0 || m_x >= 1.0) {    // If its touching boundary of window, reverse the moving direction
        m_xspeed = -m_xspeed;
    }

    m_y += m_yspeed;
    if (m_y <= -1.0 || m_y >= 1.0) {    // If its touching boundary of window, reverse the moving direction
        m_yspeed = -m_yspeed;
    }
}

}

