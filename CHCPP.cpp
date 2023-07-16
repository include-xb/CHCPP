#include <iostream>
#include <fstream>
#include <string>
#include <regex>

using namespace std;

const int length = 50;
string chKey[length] =
    {
        "����",
        "ʹ��",
        "�����ռ�",
        "��׼��",
        "����",
        "������",
        "������",
        "˫������",
        "����ֵ",
        "�ַ���",
        "������",
        "���",
        "����",
        "����",
        "����",
        "������",
        "����",
        "�ܱ���",
        "˽��",
        "��̬",
        "���",
        "����",
        "ѭ��",
        "����",
        "���ڵ���",
        "С�ڵ���",
        "����",
        "С��",
        "����",
        "������",
        "����",
        "�Լ�",
        "����",
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