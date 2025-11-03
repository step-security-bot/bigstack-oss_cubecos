// HEX SDK

#include "config_main.hpp"

void init()
{
    // top level commands
    InitCommit();
    InitLicense();

    // modules
    InitSys();
}

int main(int argc, char** argv)
{
    init();

    return Main(argc, argv);
}
