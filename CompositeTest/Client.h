#pragma once

#include <algorithm>
#include <iostream>
#include <string>

#include "Component.h"
#include "Leaf.h"
#include "Composite.h"
class Client
{
public:
	~Client();
	void runClient();
	void ClientCode(Component* component);
	void ClientCode(Component* component1, Component* component2);

private:
	//Composite* trunk = new Composite;
	Component* tree = new Composite; // EventManager?

	Component* branch1 = new Composite; // Events/bus?
	Component* branch2 = new Composite;
	Component* branch3 = new Composite;
	Component* branch4 = new Composite;

	Component* leaf1 = new Leaf; // Voices?
	Component* leaf2 = new Leaf;
	Component* leaf3 = new Leaf;
	Component* leaf4 = new Leaf;
	Component* leaf5 = new Leaf;
	Component* leaf6 = new Leaf;
	Component* leaf7 = new Leaf;
	Component* leaf8 = new Leaf;
};

