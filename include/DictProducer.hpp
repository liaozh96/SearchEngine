#ifndef __SE_DICTPRODUCER_HPP__
#define __SE_DICTPRODUCER_HPP__

#include "SplitTool.hpp"

#include <vector>
#include <string>
#include <map>
#include <set>


using std::string;
using std::vector;
using std::map;
using std::pair;
using std::set;

namespace se
{

class SplitTool;

class DictProducer
{
public:
    DictProducer(const string &dir, SplitTool);
    DictProducer(const string &dir);
    
    void buildEnDict();
    void buildCnDict();

    void storeDict();

    void showFiles() const;
    void showDict() const;

    void getFiles();
    void pushDict(const string &word);

private:
    vector<string>           _files;
    vector<pair<string,int>> _dict;
    map<string,set<int>>     _index;
    SplitTool               *_splitTool;
};

}//end of namespace se

#endif
