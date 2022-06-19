#include <iostream>
#include <string>

using namespace std;

class Entity {
protected:
	string c_out = "This is an entity\n";
public:
	Entity();
	void output() {
		cout << c_out;
	}
};

Entity::Entity() {}

class Player: public Entity {
private:

public:
	Player();
};

Player::Player() {}



int main() {
	Entity entity;
	entity.output();

	Player player;
	player.c_out = "lol";
	player.output();

	return 0;
}


