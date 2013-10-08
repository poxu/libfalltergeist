#ifndef LIBFALLTERGEIST_MAPFILETYPE_H
#define LIBFALLTERGEIST_MAPFILETYPE_H

#include <string>
#include <vector>

namespace libfalltergeist
{

class DatFileItem;

class MapFileType
{
protected:
    DatFileItem * _datFileItem;
    unsigned int _version;
    std::string _name;
    unsigned int _defaultPosition;
    unsigned int _defaultElevation;
    unsigned int _defaultOrientaion;
    unsigned int _localVarsNumber;
    unsigned int _globalVarsNumber;
    unsigned int _elevationsFlag;
    unsigned int _mapId;
    unsigned int _timeTicks;

    int _scriptId;

public:
    MapFileType(DatFileItem * datFileItem);
    ~MapFileType();

    void open();

    DatFileItem * datFileItem();
};


}

#endif // LIBFALLTERGEIST_MAPFILETYPE_H
