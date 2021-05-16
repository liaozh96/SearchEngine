#ifndef __SE_SPLITTOOL_HPP__
#define __SE_SPLITTOOL_HPP__

#include <string>
#include <vector>

using std::string;
using std::vector;

namespace se
{

class Configuration;

class SplitTool
{
public:
    SplitTool();
    virtual ~SplitTool();
    virtual vector<string> cut(const string &sentence) = 0;
};


class SplitToolCppJieba
: public SplitTool
{
public:
    SplitToolCppJieba();
    virtual ~SplitToolCppJieba();
    virtual vector<string> cut(const string &sentence) = 0;

private:
    Configuration & _conf;
};






}//end of namespace se

#endif
