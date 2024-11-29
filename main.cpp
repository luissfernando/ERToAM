#include <iostream>
#include "automaton.h"
using namespace std;

int main() {
  //regex pattern("(a|b)*abb");
  //comprobar(pattern);

  Automaton nfa;

  // Estado inicial
  nfa.start = 0;

  // Estados de aceptación
  nfa.acceptStates = {5};

  // Transiciones:
  nfa.transitions[0]['a'] = {1};
  nfa.transitions[0]['b'] = {2};
  nfa.transitions[1]['a'] = {1};
  nfa.transitions[1]['b'] = {3};
  nfa.transitions[2]['a'] = {1};
  nfa.transitions[2]['b'] = {2};
  nfa.transitions[3]['a'] = {4};
  nfa.transitions[4]['b'] = {5};
  mostrarAutomConsol(&nfa);
}

