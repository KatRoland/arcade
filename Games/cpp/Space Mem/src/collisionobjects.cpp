#include "collisionobjects.h"

// Objectek "felkészítése"

class Bullet;
class Enemy;
class Wall;
std::list<Bullet *> bulletCollisionObjects;
std::list<Enemy *> enemyCollisionObjects;
std::list<Wall *> wallCollisionObjects;