#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

int main() {
    string myString;
    string encryptedString = "";
    ostringstream aux;

    string temp = "";
    string decryptedString = "";

    cout << "Digite uma frase!\n";
    getline(cin,myString);

    for (char letra : myString) {
        int codigoASCII = static_cast<int>(letra);
        aux << setw(3)  <<setfill('0') << to_string(codigoASCII);
        encryptedString +=aux.str();
        aux.str("");
    }
    cout << "String criptografada: " << encryptedString << "\n";

    for (int i = 0; i < encryptedString.length(); i += 3){
        temp = encryptedString.substr(i, 3);

        decryptedString += char(stoi(temp));
    }
    cout << "String descriptografada: " << decryptedString << "\n";

    system("pause");
    return 0;
}
