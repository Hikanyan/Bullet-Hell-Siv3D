#include "../../../stdafx.h"
#include "EntityBase.h"

EntityBase::EntityBase()
	: position(0.0f, 0.0f), rotation(0.0f, 0.0f), scale(1.0f, 1.0f), hp(0)
{
}

EntityBase::~EntityBase()
{
}

