#include <Serpal.h>

class Sandbox : public Serpal::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Serpal::Application* Serpal::CreateApplication()
{
	return new Sandbox();
}