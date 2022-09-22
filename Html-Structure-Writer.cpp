#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[])
{	
	fstream out("htt.html", ios::out);
string c= "<html>\n"
"<head>\n"
"<tag> " "Test site" "<\ tag\n"
"<body>\n"
"<\\\ body>\n"
"\\\<head>\n"
"<\\\<html>\n";
              
	out<< c;
	out.close();
	fstream on("htt.html");
	string g;
	while(getline(on,g)){
	cout<<g;
	}
	on.close();
}