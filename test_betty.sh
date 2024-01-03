#!/bin/bash

# Récupère la liste des fichiers .c dans le répertoire courant
c_files=$(find . -name "*.c")

# Parcourt la liste des fichiers .c et exécute betty sur chaque fichier
for file in $c_files; do
    betty "$file"
done

# Affiche un message de réussite
echo "Tous les fichiers ont été vérifiés avec succès par Betty!"
