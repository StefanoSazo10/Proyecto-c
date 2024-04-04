#include <stdio.h>

#define TC_DOLAR_GTQ 7.75 // Tipo de cambio: 1 USD = 7.75 GTQ 
#define TC_EURO_GTQ 8 // Tipo de cambio: 1 EURO = 8 GTQ 
#define TC_GTQ_EURO 0.12 // Tipo de cambio: 1 GTQ = 0.12 € 
#define TC_EURO_DOLAR 1.20 // Tipo de cambio: 1 € = 1.20 USD 
#define TC_DOLAR_EURO 0.85 // Tipo de cambio: 1 USD = 0.85 €

int main() 
    int opcion; 
    float cantidad; 

    print("Bienvenido al conversor de moneda/n");
    print("1. Convertir de Dolares a Quetzales/n"); 
    print("2. Convertir de Quetzales a Dolares/n"); 
    print("3. Convertir de Euros a Quetzales/n");
    print("4. Convertir de Quetzales a Euros/n"); 
    print("5. Convertir de Euros a Dolares/n"); 
    print("6. Convertir de Dolares a Euros/n");
    print("Ingrese su opción: "); 
    scanf("%d", &opcion); 

    switch(opcion) { 
        case 1:
            print("ingrese la cantidad en Dolares: ");
            scanf("%f", &cantidad); 
            print("%.2f USD equivale a %.2f GTQ/n", cantidad, cantidad * TC_DOLAR_GTQ);
            break; 
        case 2: 
            print("Ingrese la cantidad en Quetzales: ");
            scanf("%f" , &cantidad); 
            print("%.2f GTQ equivale a %.2f USD/n", cantidad, cantidad / TC_DOLAR_GTQ); 
            break; 
        case 3: 
            print("Ingrese la cantidad en Euros: "); 
            scanf("%f", &cantidad); 
            print("%.2f EUROS equivale a %.2f GTQ/n", cantidad, cantidad * TC_EURO_GTQ);
            break;
        case 4: 
            print("Ingrese la cantidad en Quetzales: "); 
            scanf("%f", &cantidad); 
            print("%.2f GTQ equivale a %.2f EUROS/n", cantidad, cantidad /  TC_GTQ_EURO); 
            break;
        case 5: 
            print("Ingrese la cantidad en EUROS: "); 
            scanf("%f", &cantidad); 
            print("%.2f EUROS equivale a %.2f DOLARES/n", cantidad, cantidad * TC_EURO_DOLAR); 
            break; 
        case 6: 
            print("Ingrese la cantidad en DOLARES: "); 
            scanf("%f", &cantidad); 
            print("%.2f DoLARES equivale a %.2f EUROS/n", cantidad, cantidad / TC_EURO_DOLAR);
            break;
        default:
            print("Opción no valida/n");
    }
    return 0;
}
