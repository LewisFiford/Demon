#pragma once

#ifdef DM_PLATFORM_WINDOWS

extern Demon::Application* Demon::CreateApplication();

int main(int argc, char** argv)
{
	printf("Demon Engine");
	auto app = Demon::CreateApplication();
	app->Run();
	delete app;
}

#endif