#include <iostream>
using namespace std;

void printRLE(string str)
{
    int n = str.length();
    for (int i = 0; i < n; i++) {
        int count = 1;
        while (i < n - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }
        cout << str[i] << count;
    }
    cout << endl;
}

int main()
{
    char choice;
    do {
        string str;
        cout << "Input string: ";
        getline(cin, str);
        printRLE(str);
        cout << "Would you like to run the program again? (Y/N)? ";
        cin >> choice;
        cin.ignore(); 
    } while (choice == 'y' || choice == 'Y');
    
    return 0;
}
