#include <iostream>
#include <cstring>
#include <string>
#define LINE_SIZE 32

using namespace std;

int main() {
    char line[LINE_SIZE];
    int commands = 1;
    char com[6];
    int where, where1;
    cin >> commands;
    while(commands!=0){
        
        for(int i = 0; i < LINE_SIZE; i++){
            line[i] = '?';
        }
        for(int i = 0; i < commands; i++){
            cin >> com;
            cin >> where;
            if(strncmp(com,"SET", 2)==0){
                line[where] = '1';
            }
            else if(strncmp(com ,"CLEAR", 2)==0){
                line[where] = '0';
            }
            else if(strncmp(com , "OR" ,2)==0) {
                cin>>where1;
                if(line[where] == '1' || line[where1]=='1'){
                    line[where] = '1';
                }
                else if(line[where] == '0' && line[where1]=='0'){
                    line[where] = '0';
                }
                else {
                    line[where] = '?';
                }
            }
            else if(strncmp(com , "AND", 2)==0){
                cin >> where1;
                if(line[where] == '1' && line[where1]=='1'){
                    line[where] = '1';
                }
                else if (line[where] == '0' || line[where1]=='0'){
                    line[where] = '0';
                }
                else{
                    line[where] = '?';
                }
            }
        }
        for(int i = LINE_SIZE -1; i > -1; i--){
            cout<<line[i];
        }
        cout << endl;

        cin >> commands;
    }


    return 0;
}