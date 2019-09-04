#ifndef ENTITIES_PROJECTILE_HPP
#define ENTITIES_PROJECTILE_HPP

#include "../core/Sprite.hpp"

class Projectile : public Sprite
{
public:
	Projectile(b2World *world);
	Projectile(b2World *world, glm::vec2 pos);
	virtual ~Projectile();

	virtual void update(float dt);
};

#endif // ENTITIES_PROJECTILE_HPP