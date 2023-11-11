#include "karan.h"
int main()
{
    string filename;
    cout << "Enter the file name=>" << endl;
    cin >> filename;
    ifstream in;
    in.open(filename);
    if (!in.good())
    {
        cout << "File is not found try again " << endl;
        getch();
        return 0;
    }
    char ch;
    in >> ch;
    while (!in.eof())
    {
        cout << ch;
        ch = in.get();
    }
    in.close();
    ofstream myfile(filename.c_str(), ios::app);
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