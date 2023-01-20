#include <Demon.h>

class Sandbox : public Demon::Application 
{
public:
	Sandbox() 
	{

	}
	~Sandbox() 
	{

	}

};

Demon::Application* Demon::CreateApplication() 
{
	return new Sandbox();
}