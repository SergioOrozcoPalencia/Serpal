#pragma once

#ifdef SP_PLATFORM_WINDOWS

extern Serpal::Application* Serpal::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Serpal::CreateApplication();
	app->Run();
	delete app;
}

#endif