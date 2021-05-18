#include "json.hpp"

#include <iostream>
#include <string>
#include <fstream>

using std::cout;
using std::endl;
using std::string;

using json = nlohmann::json;

int main()
{
    json j1;
    json j2 = json::object();
    json j3 = json::array();

    cout << j1.type_name() << endl;
    cout << j2.type_name() << endl;
    cout << j3.type_name() << endl;

    json j = R"(
    {
    "name" : "zhangsna",
    "id" : 123,
    "age" : 23
    }
    )"_json;

    //string s = j.dump();
    //cout << s << endl;

    std::ofstream("./output.json") << j;
    
}
