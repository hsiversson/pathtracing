#pragma once

#include <vulkan/vulkan.hpp>

namespace kt
{
	class Device
	{
	public:
		Device();
		~Device();

		bool Init();

	private:
		VkInstance m_VkInstance;
	};
}

