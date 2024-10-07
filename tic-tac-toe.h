#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#define line 3
#define col 3

void afficheTab(char Tab[line][col]);
int voir_gagner(char Tab[line][col]);
int rempli(char Tab[line][col]);
void depl_joueur(char Tab[line][col]);
void depl_machine(char Tab[line][col]);
void clear_screen();

#endif 
