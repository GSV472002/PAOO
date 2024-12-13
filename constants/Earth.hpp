#ifndef EARTH_HPP
#define EARTH_HPP

#include <string>
#include <unordered_map>
using namespace std;

enum class ContinentsLists {
    Europa,
};

// Asta face un fel pattern-matching din C# aici in C++
inline string ContinentToString(ContinentsLists continent) {
    static const unordered_map<ContinentsLists, string> continentsNames = {
        {ContinentsLists::Europa, "Europa"}
    };

    return continentsNames.at(continent);
}

#endif