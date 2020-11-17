#ifndef AFFICHAGE_H
#define AFFICHAGE_H

#include "../lib/libgraphique.h"

int charger_sprites();
SDL_Surface *sprite_at(Point pos);
SDL_Surface *sprite_index(int index);

void afficher_bouton_selectionner();
void afficher_bouton_retour();

#endif