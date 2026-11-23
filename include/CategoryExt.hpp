#pragma once

#include <Geode/loader/Event.hpp>
#include <Geode/loader/Dispatch.hpp>
#include <Geode/cocos/menu_nodes/CCMenu.h>
#include <ccTypes.h>

#define MY_MOD_ID "xonttfm.jpmodgeode"

using CategoryCreateFunc = std::function<void(cocos2d::CCMenu*)>;

namespace qolmod::ext
{
    struct CategoryData
    {
        unsigned int apiVersion = 1;
        std::string displayName = "";
        std::string iconSpr = "";
        std::string categoryID = "";
        CategoryCreateFunc customFunc = nullptr;
    };
};
