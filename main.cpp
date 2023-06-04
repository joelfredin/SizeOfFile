// This code includes Boost library example code
// Original example: https://www.boost.org/doc/libs/1_54_0/libs/filesystem/doc/tutorial.html
// Copyright (c) 2023 Boost Authors

#include<iostream>
#include"boost/filesystem.hpp"

using namespace boost::filesystem;

int main(int argc, char* argv[])
{
    if(argc < 2)
    {
        std::cout << "Usage: tut1 path\n";
        return 1;
    }
    std::cout << argv[1] << " " << file_size(argv[1]) << '\n';

    return 0;
}
