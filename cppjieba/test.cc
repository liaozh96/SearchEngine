#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::vector;
using std::cout;
using std::endl;

#include "Jieba.hpp"

const char *const DICT_PATH = "./dict/jieba.dict.utf8";
const char *const HMM_PATH  = "./dict/hmm_model.utf8";
const char *const USER_DITC_PATH = "./dict/user.dict.utf8";
const char *const IDF_PATH = "./dict/idf.utf8";
const char *const STOP_WORD_PATH = "./dict/stop_words.utf8";






int main()
{
    cppjieba::Jieba jieba(DICT_PATH,
                          HMM_PATH,
                          USER_DITC_PATH,
                          IDF_PATH,
                          STOP_WORD_PATH);
    vector<string> words;

    string s;
    string result;

    s = "我今天玩的很开心！";
    cout << s << endl;
    jieba.Cut(s, words, true);
    cout << limonp::Join(words.begin(), words.end(), "/") << endl;

    return 0;
}
