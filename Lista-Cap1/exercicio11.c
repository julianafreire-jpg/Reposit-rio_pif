#include <stdio.h>

int main() {

    printf("%-15s %-40s %-20s\n",
           "Constante",
           "Classificação (Tipo de Constante)",
           "Tipo Base em C");

    printf("%-15s %-40s %-20s\n",
           "\\r",
           "constante de caractere / escape",
           "int");

    printf("%-15s %-40s %-20s\n",
           "2130",
           "constante inteira decimal",
           "int");

    printf("%-15s %-40s %-20s\n",
           "-123",
           "constante inteira decimal negativa",
           "int");

    printf("%-15s %-40s %-20s\n",
           "33.28",
           "constante de ponto flutuante",
           "double");

    printf("%-15s %-40s %-20s\n",
           "0XFA",
           "constante inteira hexadecimal",
           "int");

    printf("%-15s %-40s %-20s\n",
           "0101",
           "constante inteira octal",
           "int");

    printf("%-15s %-40s %-20s\n",
           "2.0e30",
           "constante de ponto flutuante",
           "double");

    printf("%-15s %-40s %-20s\n",
           "\\xDC",
           "constante de caractere / escape hexadecimal",
           "int");

    printf("%-15s %-40s %-20s\n",
           "'\\\"'",
           "constante de caractere",
           "int");

    printf("%-15s %-40s %-20s\n",
           "'\\\\'",
           "constante de caractere",
           "int");

    printf("%-15s %-40s %-20s\n",
           "'F'",
           "constante de caractere",
           "int");

    printf("%-15s %-40s %-20s\n",
           "0",
           "constante inteira decimal",
           "int");

    printf("%-15s %-40s %-20s\n",
           "'\\0'",
           "constante de caractere / escape",
           "int");

    printf("%-15s %-40s %-20s\n",
           "\"F\"",
           "constante string",
           "char[]");

    printf("%-15s %-40s %-20s\n",
           "-4567.89",
           "constante de ponto flutuante",
           "double");

    return 0;
}