#include "Client.h"

Client::~Client()
{
	delete tree;
	delete branch1;
	delete branch2;
	delete branch3;
	delete branch4;
	delete leaf1;
	delete leaf2;
	delete leaf3;
	delete leaf4;
	delete leaf5;
	delete leaf6;
	delete leaf7;
	delete leaf8;
}

void Client::runClient()
{
	//Component *simple = new Leaf;
	//Composite* trunk = new Composite;
	//trunk->ClientCode(simple);
	//
	//
	//delete simple;
	//delete trunk;

	tree->Add(branch1);
	tree->Add(branch2);
	tree->Add(branch3);
	ClientCode(tree);
	std::cout << "\n" << std::endl;
	branch1->Add(leaf1);
	branch2->Add(leaf2);
	branch2->Add(leaf3);
	branch3->Add(leaf4);
	branch3->Add(leaf5);
	ClientCode(tree);
	std::cout << "\n" << std::endl;
	Component* branch4 = new Composite;
	branch1->Add(branch4);
	ClientCode(tree);
	std::cout << "\n" << std::endl;
	branch4->Add(leaf6);
	branch4->Add(leaf7);
	branch4->Add(leaf8);
	ClientCode(tree);
	std::cout << "\n" << std::endl;
	branch4->Remove(leaf6);
	ClientCode(tree);
	std::cout << "\n" << std::endl;
	branch1->Add(leaf6);
	ClientCode(tree);
	std::cout << "\n" << std::endl;
}

void Client::ClientCode(Component* component)
{
	std::cout << "Result: " << component->Operation();
}

void Client::ClientCode(Component* component1, Component* component2)
{
	if (component1->IsComposite())
	{
		component1->Add(component2);

	}
	std::cout << "Result: " << component1->Operation();
}
