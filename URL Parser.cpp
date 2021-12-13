// URL Parser.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <iostream>

using namespace std;

int main()
{
    string url, scheme, authority, path;

    int pos, p, pos2, m;

    cout << "Please enter a URL : ";
    cin >> url;
    pos2 = url.find(":");           
    for (int i = 0; i < url.size(); i++)
    {
        if (url[i] == '/' && url[i + 1] == '/')
        {
            pos = i;
            i++;
        }
        else if (url[i] == '/' && url[i + 1] != '/')
        {
            p = i;
            break;
        }
    }
    scheme = url.substr(0, pos2 + 1);      
    m = ((url.size() - pos2) - (url.size() - p)) - 1;
    authority = url.substr(pos, m);      
    path = url.substr(p);              
    cout << endl;
    cout << "Scheme : " << scheme << endl;
    cout << "Authority : " << authority << endl;
    cout << "Path : " << path << endl;
    return 0;
}