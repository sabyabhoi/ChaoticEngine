#pragma once

#ifdef CT_PLATFORM_WINDOWS

extern Chaotic::Application* Chaotic::CreateApplication();

int main(int argc, char** argv) {
	auto app = Chaotic::CreateApplication();
	app->Run();
	delete app;
}

#endif
