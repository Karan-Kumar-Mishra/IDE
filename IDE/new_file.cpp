#include "karan.h"
int main()
{
   string filename;
   cout << "Enter filename=>> ";
   cin >> filename;
   ofstream myfile(filename.c_str());
   string line;
   cout << "Enter text (press Ctrl+Z to stop)=>>" << endl;
   while (getline(cin, line))
   {
      myfile << line << endl;
   }
   myfile.close();
   cout << "File saved." << endl;
   return 0;
}