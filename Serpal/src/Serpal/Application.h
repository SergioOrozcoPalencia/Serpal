#pragma once

#include "Core.h"

namespace Serpal
{
	class SERPAL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}