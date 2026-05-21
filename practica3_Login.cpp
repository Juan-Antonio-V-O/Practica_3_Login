// Inicio de sesion
#include <iostream>
#include <cstdlib>
#include <string>
//#include <windows.h>

using namespace std;

int main()
{
    // Variables para el inicio de sesion
    string usuario = "", pasword = "";
    int intentos = 1;

    do
    {
        // Solicitar usuario y contraseña
        cout << "Usuario:" << endl;
        cin >> usuario;
        cout << "Contraseña:" << endl;
        cin >> pasword;

        // Verificar las credenciales
        if (usuario == "Javo" && pasword == "12qwerty34")
        {
            // Salto al menu principal
            system("clear");//Limpia la consola 
            system("cls");
            cout << "===================================" << endl;
            cout << "\tBIENVENDIO JAVO" << endl;
            cout << "===================================" << endl;
            cout << "Precine Enter para continuar..." << endl;
            cin.ignore(); // Limpiar el buffer de entrada
            cin.get();    // Esperar a que el usuario presione enter para continuar

            return 0; // Salir del programa
        }
        else
        {
            cout << "Usuario o contraseña incorrectos. Intento" << intentos << " de 3; Precione enter para regresar..." << endl; // Mensaje de error con el número de intento
            intentos++;                                                                                                          // Aumentar el contador de intentos
            cin.ignore();                                                                                                        // Limpiar el buffer de entrada
            cin.get();    
            system("clear");//Limpia la consola
            system("cls");                                                                                                                                   // Esperar a que el usuario presione enter para continuar
        }

    } while (intentos <= 3);

    if (intentos > 3) // Verificar si se han agotado los intentos
    {
        cout << "Has agotado tus intentos. Acceso denegado, precione Enter para salir." << endl;
    }
    cout << "¿Olvidaste tu usuario y contraseña?, " << endl;
    cin.get(); // Esperar a que el usuario presione enter para continuar

    return 0;
}