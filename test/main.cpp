#include <iostream>
#include <string>
#include <stdio.h>

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
	TEST:	
	cout << "Start all over\n";

	for (int i=0; i<10; i++) {
		if (i == 4) continue TEST;
		
		cout << i << "\n";
	}


	return 0;
}


