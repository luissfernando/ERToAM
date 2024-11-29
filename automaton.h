
#include <regex>
#include <unordered_map>
#include <set>
using namespace std;
struct Automaton{
  int start; // estado inicial
  set<int> acceptStates;  // conjunto de estdos de aseptacion
  unordered_map<int, unordered_map<char, set<int>>> transitions;  // Transiciones [estado][símbolo] -> conjunto de estados destin
  unordered_map<int, set<int>> epsilonTransitions;  // Transiciones epsilon [estado] -> conjunto de estados destino (para AFND)
};

Automaton regexToAFND(const string& regex);  // Paso 1: Expresión regular → AFND
Automaton afndToAFD(const Automaton& nfa);  // Paso 2: AFND → AFD
Automaton minimizeDFA(const Automaton& dfa); // Paso 3: Minimización del AFD
void printAutomaton(const Automaton& automaton); // Función para visualización

void comprobar(regex pattern);
void mostrarAutomConsol(struct Automaton* automaton);


