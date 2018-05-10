#include <iostream>
#include <string>
#include <regex>

using namespace std;

//void AspToTorrent(string& s)
//{
//    string pattern{"(.*)\\.(asp)$"};
//    regex r{pattern};
//    string fmt{"$1.torrent"};
//    s=regex_replace(s,r,fmt);
//    return;
//}
extern void AspToTorrent(string s);

int main()
{
    string mname{"123.asp"};
    AspToTorrent(mname);
    cout <<mname<<endl<< "Hello World!" << endl;
    return 0;
}

void AspToTorrent(const string& s)
{
    string pattern{"(.*)\\.(asp)$"};
    regex r{pattern};
    string fmt{"$1.torrent"};
    regex_replace(s,r,fmt);
    return;
}