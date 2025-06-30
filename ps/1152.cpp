# include <iostream>
# include <string>
using namespace std;

int main() {
    int res = 0;
    string word;
    getline(cin,word);

    for (int i=0; i<word.length(); i++){
        if (word[i] == ' '){
            res++;
        }
    }
    if (word[0] == ' ') {
        res--;
    } if (word[word.length() - 1] == ' '){
        res--;
    }
    cout << res;
    return 0;
}