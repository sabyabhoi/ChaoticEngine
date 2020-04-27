#include "Log.h"

namespace Chaotic {
	std::shared_ptr<spdlog::logger>& Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger>& Log::s_ClientLogger;

	void Log::Init() {
		spdlog::set_pattern();	
	}
}
