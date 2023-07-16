#include <iostream>
#include <fstream>
#include <string>
#include <regex>

using namespace std;

const int length = 50;
string chKey[length] =
    {
        "包含",
        "使用",
        "命名空间",
        "标准库",
        "整型",
        "无类型",
        "浮点型",
        "双精度型",
        "布尔值",
        "字符串",
        "主函数",
        "输出",
        "输入",
        "换行",
        "返回",
        "定义类",
        "公共",
        "受保护",
        "私有",
        "静态",
        "如果",
        "否则",
        "循环",
        "迭代",
        "大于等于",
        "小于等于",
        "大于",
        "小于",
        "等于",
        "不等于",
        "自增",
        "自减",
        "赋以",
};
string codeKey[length] =
    {
        "#include",
        "using",
        "namespace",
        "std",
        "int",
        "void",
        "float",
        "double",
        "bool",
        "string",
        "main",
        "cout",
        "cin",
        "endl",
        "return",
        "class",
        "public",
        "protected",
        "private",
        "static",
        "if",
        "else",
        "while",
        "for",
        ">=",
        "<=",
        ">",
        "<",
        "==",
        "!=",
        "++",
        "--",
        "=",
};

int main()
{
    string data;
    fstream file;
    fstream fileCpp;
    file.open("1.z");
    fileCpp.open("1.cpp");
    while (file.good())
    {
        getline(file, data);
        for (int i = 0; i < length; i++)
        {
            data = regex_replace(data, regex(chKey[i]), codeKey[i]);
        }
        // cout << data << endl;
        fileCpp << data << endl;
    }

    file.close();
    fileCpp.close();

    system("g++ 1.cpp -o 1.exe");
    system("1.exe");

    return 0;
}