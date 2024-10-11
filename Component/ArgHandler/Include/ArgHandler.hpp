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

class ArgHandler
{
    private:

    std::map<std::string, std::any> ArgMap;

    public:

    ArgHandler() = default;
    ~ArgHandler() = default;
};