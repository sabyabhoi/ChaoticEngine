#include <Chaotic.h>

class Sandbox : public Chaotic::Application {
public:
	Sandbox() {}
	~Sandbox() {}
};

Chaotic::Application* Chaotic::CreateApplication() {
	return new Sandbox();
}
