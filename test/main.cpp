#include <iostream>
#include <string>

using namespace std;

class Entity {
protected:
	string c_out = "This is an entity\n";
public:
	Entity();
	virtual void output() {
		cout << c_out;
	}
};
Entity::Entity() {}


class Player: public Entity {
private:

public:
	Player();
	void output() {
		cout << "This is a player\n";
	}
};
Player::Player() {}

void PrintName(Entity* entity) {
	entity->output();
}

int main() {
	Entity* entity = new Entity();
	PrintName(entity);

	Player* player = new Player();
	PrintName(player);

	//entity = player;
	//entity.output();

	return 0;
}


