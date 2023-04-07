set(HEADER_FILES
"../include/Program/ProgramOptions.h"
"Racers/Team.h"
"Racers/Racer.h"
)

# Ajoutez une source à l'exécutable de ce projet.
add_library(LancerRaceMasSimulator ${HEADER_FILES} "main.cpp" "Program/ProgramOptions.cpp" "Racers/Team.cpp" "Racers/Racer.cpp")
add_subdirectory("Cards")
# TODO: Ajoutez des tests et installez des cibles si nécessaire.
