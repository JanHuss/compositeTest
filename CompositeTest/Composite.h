#pragma once
#include "Component.h"
#include <list>
#include <string>
#include <iostream>

class Composite :
    public Component
{
protected:
    std::list<Component*> children_;
     
public:
    void Add(Component* component) override;
    void Remove(Component* component) override;
    bool IsComposite() const override;
  
    std::string Operation() const override;

    void ClientCode(Component* component);
    void ClientCode(Component* component1, Component* component2);
};

