set(CARDS_HEADER_FILES
    "../../include/Cards/ICard.h"
    "../../include/Cards/ICardPlayer.h"
    "../../include/Cards/IDeck.h"
    "StandardDeck.h"
    "DistanceCard.h"
    "HazardCard.h"
    "RemedyCard.h"
    "SafetyCard.h"
)

set(CARDS_SOURCE_FILES
    "StandardDeck.cpp"
    "DistanceCard.cpp"
    "HazardCard.cpp"
    "RemedyCard.cpp"
    "SafetyCard.cpp"
)

target_sources(LancerRaceMasSimulator
    PRIVATE
        ${CARDS_SOURCE_FILES}
    PUBLIC
         ${CARDS_HEADER_FILES}
)