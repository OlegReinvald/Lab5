#include "iostream"
#include "fstream"
#include "string"
#include "algorithm"
#include "vector"
using namespace std;
int main(){
    cout << "Enter file path: ";
    string path;
    cin >> path;
    ifstream fin(path);
    if (fin.is_open()){
        string line;
        vector<string> new_file;
        while (getline(fin, line) ) {
            if(new_file.empty() or new_file[new_file.size() - 1] != line){
                new_file.push_back(line);
            }
        }
        cout << "Exit file: ";
        cin >> path;
        ofstream fout(path);
        for (int i = 0; i < size(new_file); i++){
            fout << new_file[i] << "\n";
        }
    }
    return 0;
}