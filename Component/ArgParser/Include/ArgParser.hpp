/**
 * @file ArgHandler.hpp
 * 
 * @brief File holding the class description for the ArgHandler
 * 
 * @author Anders Bjørk
 * @date 2024-10-09 (yyyy-mm-dd)
 * 
 */
#pragma once

#include <map>
#include <memory>
#include <any>
#include <iostream>

class ArgParser
{
    private:

    std::map<std::string, std::any> ArgMap;


    public:

    ArgParser() = default;
    ~ArgParser() = default;

    template<typename T>
    void AddArgument(std::string Name, T r);
};