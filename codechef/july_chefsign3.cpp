#include <iostream>
#include <string>
using namespace std;
int main()
{
    int T;
    string str;
    cin >> T;
    cin.ignore();
    for (int i = 0; i < T; ++i) {
        getline(cin, str);
        int num = 1, max = 0, min = 0;
        cout << num;
        for (int j = 0; j < str.length(); j++) {
            if (str[j] == '<') {
                num++;
                cout << "<" << num;
                if (num > max)
                    max = num;
            }
            else if (str[j] == '>') {
                num--;
                cout << ">" << num;
                if (num < min)
                    min = num;
            }
            else {
                cout << "=" << num;
            }
        }
        cout << "|" << max - min + 1 << '\n';
    }
    return 0;
}
