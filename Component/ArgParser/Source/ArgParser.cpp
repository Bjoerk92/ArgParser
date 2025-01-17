/**
 * @file ArgParser.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-10-11
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include "ArgParser.hpp"

template<typename T>
void ArgParser::AddArgument(std::string Name, T r)
{
    this->ArgMap[Name].reset(new T r);
}