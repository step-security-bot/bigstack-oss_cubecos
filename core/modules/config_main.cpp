// HEX SDK

#include "config_main.hpp"

void init()
{
    InitMain();
    InitSys();
}

int main(int argc, char** argv)
{
    init();

    return Main(argc, argv);
}
