#include <gtest/gtest.h>
#include <string>

#include "config.h"


TEST(VersionTest, Test1)
{
    std::cout << LINUX_KERNEL_MODULE_CONFIG_VERSION << std::endl;

    std::cout << LINUX_KERNEL_MODULE_CONFIG_VERSION_MAJOR << std::endl;

    std::cout << LINUX_KERNEL_MODULE_CONFIG_VERSION_MINOR << std::endl;

    std::cout << LINUX_KERNEL_MODULE_CONFIG_VERSION_ALTER << std::endl;
}

TEST(VersionTest, Test2)
{
    unsigned char major = '0' + LINUX_KERNEL_MODULE_CONFIG_VERSION_MAJOR;
    unsigned char minor = '0' + LINUX_KERNEL_MODULE_CONFIG_VERSION_MINOR;
    unsigned char alter = '0' + LINUX_KERNEL_MODULE_CONFIG_VERSION_ALTER;

    std::string version;

    version += major;
    version += '.';
    version += minor;
    version += '.';
    version += alter;


    EXPECT_EQ(LINUX_KERNEL_MODULE_CONFIG_VERSION, version);
}
