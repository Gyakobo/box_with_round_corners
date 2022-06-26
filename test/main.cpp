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
	srand(time(NULL));

	int num_array[10];
	int visited[10];
	int count = 0;

	while (count < 10) {
		int num = rand() % 10;

		if (visited[num] == 0) {
			visited[num] = 1;
			num_array[count++] = num; 
		}
	}
	
	for (int i=0; i<10; i++)
		cout << num_array[i] << '\n';

	return 0;
}


