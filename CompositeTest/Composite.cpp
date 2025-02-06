#include "Composite.h"

void Composite::Add(Component* component)
{
	this->children_.push_back(component);
}

void Composite::Remove(Component* component)
{
	children_.remove(component);
	component->setParent(nullptr);
}

bool Composite::IsComposite() const
{
	return true;
}

std::string Composite::Operation() const
{
	std::string result;
	for (const Component *c : children_)
	{
		if (c == children_.back())
			result += c->Operation();
		else
			result += c->Operation() + "+";
	}
	return "Branch(" + result + ")";
}

void Composite::ClientCode(Component* component)
{
	std::cout << "Result: " << component->Operation();
}

void Composite::ClientCode(Component* component1, Component* component2)
{
	if (component1->IsComposite())
	{
		component1->Add(component2);

	}
	std::cout << "Result: " << component1->Operation();
}

