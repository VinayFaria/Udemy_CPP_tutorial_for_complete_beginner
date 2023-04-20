#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace screen_processing {
// The only difference between a struct and class in C++ is the default accessibility of member variables and methods.
// i.e. struct have by default public and class have by default private.
class Particle {
public:
    double m_x;
    double m_y;

public:
    Particle();
    virtual ~Particle();
};
}

#endif // PARTICLE_H_
