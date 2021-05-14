#ifndef __SE_SPLITTOOL_HPP__
#define __SE_SPLITTOOL_HPP__

#include <string>
#include <vector>

using std::string;
using std::vector;

namespace se
{

class SplitTool
{
public:
    virtual vector<string> cut() = 0;
};

}//end of namespace se

#endif
