#ifndef AUTOMATON_H
#define AUTOMATON_H
#include <regex>
#include <iostream>
#include <unordered_map>
#include <set>
#include "automaton.h"

// Expresión regular → AFND
Automaton regexToAFND(const string& regex){

} 

//AFND → AFD 
Automaton afndToAFD(const Automaton& nfa){
    

    
}  

//Minimización del AFD
Automaton minimizeDFA(const Automaton& dfa); 


// Función para visualización
void printAutomaton(const Automaton& automaton); 

void comprobar(regex pattern){
    string input = "aababb";
    if (regex_match(input, pattern)){
        cout << "La cadena coincide con el patrón." << endl;
    } else {
        cout << "La cadena no coincide con el patrón." << endl;
    }
}
//muestra  enlases
void mostrarAutomConsol(struct Automaton* automaton){
    cout<<"Estado incial : "<< automaton->start<<endl;
    cout<<"Estados de acepyacion : ";
    for(int state: automaton->acceptStates)
        cout << state << " ";
    cout << endl;

    cout << "Transiciones:" << endl;
    for (auto& [state, symbolMap] : automaton->transitions) {
        for (auto& [symbol, destStates] : symbolMap) {
            for (int dest : destStates) {
                cout << "  " << state << " --" << symbol << "--> " << dest << endl;
            }
        }
    }
    cout<<endl;
}

#endif // !AUTOMATON_H