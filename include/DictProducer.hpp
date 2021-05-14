#ifndef __SE_DICTPRODUCER_HPP__
#define __SE_DICTPRODUCER_HPP__

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
    DictProducer(string, tool);
    
    void buildEnDict();
    void buildCnDict();
    void createIndex();
    void store();

private:
    vector<string> _files;
    vector<pair<string,int>> _dict;
    map<string,set<int>> _index;
    SplitTool *_cuttor;
};

}//end of namespace se

#endif
