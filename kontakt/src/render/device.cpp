#include "render/device.h"
#include <vector>

namespace kt
{

	Device::Device()
	{

	}

	Device::~Device()
	{

	}

	bool Device::Init()
	{
		VkApplicationInfo appInfo;
		memset(&appInfo, 0, sizeof(appInfo));

		appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
		appInfo.pApplicationName = "Kontakt Pathtracing";
		appInfo.applicationVersion = VK_MAKE_VERSION(1, 0, 0);
		appInfo.pEngineName = "Kontakt";
		appInfo.engineVersion = VK_MAKE_VERSION(1, 0, 0);
		appInfo.apiVersion = VK_API_VERSION_1_4;

		VkInstanceCreateInfo createInfo;
		memset(&createInfo, 0, sizeof(createInfo));

		std::vector<const char*> extensions;

		createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
		createInfo.pApplicationInfo = &appInfo;
		createInfo.enabledExtensionCount = extensions.size();
		createInfo.ppEnabledExtensionNames = extensions.data();

		createInfo.enabledLayerCount = 0;
		createInfo.pNext = nullptr;

		if (vkCreateInstance(&createInfo, nullptr, &m_VkInstance) != VK_SUCCESS)
		{
			//HELIOS_LOG_FATAL("(Vulkan) Failed to create Vulkan instance.");
			throw std::runtime_error("Failed to create Vulkan instance.");
		}

		return false;
	}

}