#pragma once
#include "Component.h"
#include <string>

class Leaf :
    public Component
{
public:
    std::string Operation() const override; // currently there to notify the user that it's a leaf
};

