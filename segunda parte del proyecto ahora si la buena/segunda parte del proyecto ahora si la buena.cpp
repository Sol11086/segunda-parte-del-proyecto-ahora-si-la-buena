/************************************

            Sol este es el codigo definitivo no te confundas
            aqui modifica y si no jala ya lo pasas a otro archivo pero este es el ultimo que modificaste

*************************************/


#include <iostream>
#include <string.h>
using namespace std;

//se declara la estructura antes del in main
//espacio para declarar las estructuras
struct citas
{
    string tratamiento;
    string nombre;
    string pago;
    string hora;
    float precio;
};
//listo es todo gracias por su atencion

int main()
{
    int opcion = 1; //while de todo el codigo
    int op; //el swich e modificar cita
    int j;
    int i;
    int opcion2;
    int opcion3;
    int op1;
    citas agendar[3];
    string tratamiento, nombre, pago;
    float precio;


    while (opcion == 1)
    {
        //system("cls");

        cout << "Bienvenido a Menu de citas." << endl;
        cout << "Presione 1 para continuar 2 para salir" << endl;
        cin >> op1;

        if (op1 == 1)
        {
            system("cls");

            cout << "¿Que desea hacer?" << endl;
            cout << endl;
            cout << endl;

            cout << "1-.Agendar cita" << endl;
            cout << endl;
            cout << "2-.Modificar cita" << endl;
            cout << endl;
            cout << "3-.Eliminar cita" << endl;
            cout << endl;
            cout << "4-.Mostrar lista de citas vigentes" << endl;
            cout << endl;
            cout << "5-.Salir" << endl;
            cout << endl;
            cout << endl;
            cin >> opcion2;

            switch (opcion2)
            {
            case 1: //para agendar cita
                system("cls");
                for (i = 0; i < 3; i++)
                {
                    cout << "Ingrese los siguientes datos:" << endl;
                    cout << endl;
                    cout << "Nombre completo:" << endl;
                    cin >> agendar[i].nombre;

                    cout << "Tipo de tratamiento:" << endl;
                    cin >> agendar[i].tratamiento;

                    cout << "Hora de la cita:" << endl;
                    cin >> agendar[i].hora;

                    cout << "Tipo de pago:" << endl;
                    cin >> agendar[i].pago;

                    cout << "Precio" << endl;
                    cin >> agendar[i].precio;

                    cout << endl;
                }
                break;

            case 2: //modificar cita


                cout << "ingrese el numero registro que desea modificar";
                cout << endl;
                cin >> j;

                j = j - 1; //operacion para que el usario ingrese numero de registro 

                cout << "ingrese que desea modificar" << endl;
                cout << "1.-Nombre" << endl;
                cout << "2.-Tratamiento" << endl;
                cout << "3.-Hora" << endl;
                cout << "4.-Tipo de pago" << endl;
                cout << "5.-Precio" << endl;
                cout << "6.-Todo" << endl;
                cin >> op;

                switch (op)
                {
                case 1: // cambiar nombre
                    for (i = j; i <= j; i++)
                    {
                        cout << "Ingrese el nuemvo nombre del registro " << i + 1 << endl;
                        cin >> agendar[i].nombre;
                    }
                    break;
                case 2: // cambiar tratamiento
                    for (i = j; i <= j; i++)
                    {
                        cout << "Ingrese el nuevo tratamiento del registro " << i + 1 << endl;
                        cin >> agendar[i].tratamiento;
                    }
                    break;
                case 3: // cambiar hora
                    for (i = j; i <= j; i++)
                    {
                        cout << "Ingrese la nueva hora del registro " << i + 1 << endl;
                        cin >> agendar[i].hora;
                    }
                    break;
                case 4: // cambiar forma de pago
                    for (i = j; i <= j; i++)
                    {
                        cout << "Ingrese el nuevo metodo de pago del registro " << i + 1 << endl;
                        cin >> agendar[i].pago;
                    }
                    break;
                case 5: //cambiar precio
                    for (i = j; i <= j; i++)
                    {
                        cout << "Ingrese el nuevo precio del registro " << i + 1 << endl;
                        cin >> agendar[i].precio;
                    }
                    break;

                case 6: //cambiar todo
                    for (i = j; i <= j; i++)
                    {
                        cout << "Numero de registro" << i + 1 << endl;

                        cout << "ingrese el nombre" << endl;
                        cin >> agendar[i].nombre;

                        cout << "ingrese el tratamiento" << endl;
                        cin >> agendar[i].tratamiento;

                        cout << "ingrese hora de la cita" << endl;
                        cin >> agendar[i].hora;

                        cout << "ingrese el tipo de pago" << endl;
                        cin >> agendar[i].pago;

                        cout << "ingrese el tratamiento" << endl;
                        cin >> agendar[i].precio;

                    }break;

                default:
                    cout << "Ingrese una opcion correcta";

                }
                break;

            case 3: //eliminar cita
               /* system("cls");
                do
                {
                    cout << "Para eliminar su cita ingrese su numero de cita:";
                    // ira un cin;
                    cout << endl;
                    cout << "Presione 1 para eliminar otra cita presione 2 para volver al menu" << endl;
                    cin >> opcion3;
                } while (opcion3 == 1);*/

                break;

            case 4: //mostrar lista de citas
                system("cls");

                for (i = 0; i < 3; i++)
                {
                    cout << "Numero de registro:" << i + 1 << endl;
                    cout << agendar[i].nombre;
                    cout << endl;
                    cout << agendar[i].tratamiento;
                    cout << endl;
                    cout << agendar[i].pago;
                    cout << endl;
                    cout << "$" << agendar[i].precio;
                    cout << endl;
                    cout << endl;

                }
                break;

            case 5: //salir
                exit(1);
                break;

            default:
                cout << "no ingreso una opcion correcta";

            }
        }
        else
        {
        exit(1);
        }

        
  

    }

    return 0;



}
