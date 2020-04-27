#pragma once
#include "Core.h"

namespace Chaotic {
	class CHAOTIC_API Application {
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in the CLIENT.
	Application* CreateApplication();
}
