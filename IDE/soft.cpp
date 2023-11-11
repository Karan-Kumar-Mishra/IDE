#include "karan.h"
using namespace std;
class soft
{
public:
    ifstream in;
    ofstream out;
    void change_background_color()
    {
        string code;
        system("cls");
        cout << "\t0 = Black       8 = Gray" << endl;
        cout << "\t1 = Blue        9 = Light Blue" << endl;
        cout << "\t2 = Green       A = Light Green" << endl;
        cout << "\t3 = Aqua        B = Light Aqua" << endl;
        cout << "\t4 = Red         C = Light Red  " << endl;
        cout << "\t5 = Purple      D = Light Purple" << endl;
        cout << "\t6 = Yellow      E = Light Yellow" << endl;
        cout << "\t7 = White                       " << endl;
        cout << "\t10 for exit..                   " << endl;
        cout << "\t Enter the color code =>>";
        cin >> code;
        if (code == "10")
        {
            return;
        }
        else
        {
            string cmd4 = "color " + code + "F";
            system(cmd4.c_str());
        }
    }
    void change_color()
    {
        string code;
        system("cls");
        cout << "\t0 = Black       8 = Gray" << endl;
        cout << "\t1 = Blue        9 = Light Blue" << endl;
        cout << "\t2 = Green       A = Light Green" << endl;
        cout << "\t3 = Aqua        B = Light Aqua" << endl;
        cout << "\t4 = Red         C = Light Red  " << endl;
        cout << "\t5 = Purple      D = Light Purple" << endl;
        cout << "\t6 = Yellow      E = Light Yellow" << endl;
        cout << "\t7 = White       F = Bright White" << endl;
        cout << "\t10 for exit..                   " << endl;
        cout << "\t Enter the color code =>>   ";
        cin >> code;
        if (code == "10")
        {
            return;
        }
        else
        {
            string cmd4 = "color " + code;
            system(cmd4.c_str());
        }
    }
    void More_option()
    {
        string code2;
        string cmd4 = "notepad ";
        string temp;
        int cmd2;
        while (1)
        {
            system("cls");
            cout << "\t 1.Change the text color " << endl;
            cout << "\t 2.Change the backgound color " << endl;
            cout << "\t 3.Open the file in notepad" << endl;
            cout << "\t 4.Open the file in VScode" << endl;
            cout << "\t 5.display all file" << endl;
            cout << "\t 6.Exit" << endl;
            cout << "\t 7.About "<< endl;
            cout << "\t Enter your option =>> ";
            cin >> cmd2;
            switch (cmd2)
            {
            case 1:
                change_color();
                break;
            case 2:
                change_background_color();
                break;
            case 3:
                cout << "\t Enter the file name =>> ";
                cin >> code2;
                cmd4 + code2;
                temp = cmd4 + code2;
                system(temp.c_str());
                break;
            case 4:
                cout << "\t Enter the file name =>> ";
                cin >> code2;
                cmd4 = "code . ";
                cmd4 + code2;
                temp = cmd4 + code2;
                system(temp.c_str());
                break;
            case 5:
                system("dir");
                getch();
                break;
            case 6:
                return;
                break;
            case 7:
                cout<<"Hello Karan Kumar Mishra! It's great to hear that I have created an IDE for code run and compile with lots of features in C++. An IDE (Integrated Development Environment) is a software application that provides comprehensive facilities to computer programmers for software development."<<endl;
                getch();
                break;
            default:
                cout << "\t command is not found please try again  !" << endl;
                getch();
                break;
            }
        }
    }
    void new_file()
    {
        system("c++ new_file.cpp -o output && start cmd.exe /c output.exe ^&^& pause");
    }
    void open_file()
    {
        system("c++ open_file.cpp -o output && start cmd.exe /c output.exe ^&^& pause");
    }
    void update_file()
    {
        system("c++ update_file.cpp -o output && start cmd.exe /c output.exe ^&^& pause");
    }
    void compile_code()
    {
        string filename, extension, compile;
        cout << "Enter the file name => ";
        cin >> filename;
        for (int i = 0; i <= filename.size(); i++)
        {
            if (filename[i] == '.')
            {
                for (int j = i; j < filename.size(); j++)
                {
                    extension = extension + filename[j];
                }
            }
        }
        if (extension == ".c")
        {
            compile = "gcc " + filename + " -o output && start cmd.exe /c output.exe ^&^& pause";
            system(compile.c_str());
        }
        else if (extension == ".cpp")
        {
            compile = "c++ " + filename + " -o output && start cmd.exe /c output.exe ^&^& pause";
            system(compile.c_str());
        }
        else if (extension == ".java")
        {
            compile = "javac " + filename + " && start cmd.exe /c java " + filename + " ^&^& pause";
            system(compile.c_str());
        }
        else if (extension == ".py")
        {
            compile = " start cmd.exe /c python " + filename + " ^&^& pause";
            system(compile.c_str());
        }
        else if (extension == ".js")
        {
            compile = " start cmd.exe /c node " + filename + " ^&^& pause ";
            system(compile.c_str());
        }
    }
    void save()
    {
        in.close();
        out.close();
    }
    void remove_file()
    {
        string filename;
        cout << "Enter the file name => " << endl;
        cin >> filename;
        if (remove(filename.c_str()))
        {
            cout << "file is successful deleted !" << endl;
            getch();
        }
    }
};
int main()
{

    soft s1;
    string cmd;
    while (1)
    {
        system("cls");
        string str;
        cout << "\t\t\t\t\t\t\t\t\t IDE \t\t\t" << endl;
        cout << "\t----------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t 1.New File " << endl;
        cout << "\t 2.Open File " << endl;
        cout << "\t 3.Save File " << endl;
        cout << "\t 4.Delete File " << endl;
        cout << "\t 5.Update File " << endl;
        cout << "\t 6.More option " << endl;
        cout << "\t 7.Complie and run the code  " << endl;
        cout << "\t 8.Exit " << endl;
        cout << "\t Enter your option =>>>  ";
        cin >> cmd;
        if (cmd == "1")
        {
            s1.new_file();
        }
        else if (cmd == "2")
        {
            s1.open_file();
        }
        else if (cmd == "3")
        {
            s1.save();
        }
        else if (cmd == "4")
        {
            s1.remove_file();
        }
        else if (cmd == "5")
        {
            s1.update_file();
        }
        else if (cmd == "6")
        {
            s1.More_option();
        }
        else if (cmd == "7")
        {
            s1.compile_code();
        }
        else if (cmd == "8")
        {
            cout << endl
                 << endl;
            system("pause");
            exit(0);
        }
        else
        {
            cout << "\t command is not found please try again  !" << endl;
            getch();
        }
    }
    return 0;
}