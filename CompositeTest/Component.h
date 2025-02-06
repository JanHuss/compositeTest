#pragma once
#include <string>

class Component
{
protected:
	Component * parent_;

public:
	virtual ~Component(){};
	void setParent(Component* parent){this->parent_ = parent;}
	Component* getParent() const{return this->parent_;}

	// child management functions in base class. leaves the function empty using space
	// when using a leaf, however, is imediately initialised for all composites.
	virtual void Add(Component* component){}
	virtual void Remove(Component* component){}
	virtual bool IsComposite() const{return false;} // if true the class is allowed to have child classes

	virtual std::string Operation() const = 0;
};

