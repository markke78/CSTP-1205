#include "Employee.h"

#include "Entity.h"



Entity::Entity(int id) :m_id{id} {

}

Entity::~Entity() {

}
void Entity::Update()
{
}

int Entity::GetId()
{
	return m_id;
}

void Entity::SetId(int id)
{
	m_id = id;
}