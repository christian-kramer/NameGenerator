class NameGenerator {
    private:
        const char* nouns[50] = {
            "week",
            "hall",
            "tea",
            "wood",
            "king",
            "hat",
            "desk",
            "sir",
            "tale",
            "gate",
            "hair",
            "meat",
            "news",
            "girl",
            "pie",
            "dirt",
            "song",
            "oven",
            "love",
            "menu",
            "two",
            "idea",
            "food",
            "goal",
            "area",
            "ear",
            "beer",
            "user",
            "unit",
            "soup",
            "year",
            "math",
            "mall",
            "mode",
            "lady",
            "son",
            "town",
            "law",
            "fact",
            "data",
            "mom",
            "road",
            "ad",
            "dad",
            "meal",
            "poet",
            "mood",
            "lab",
            "gene",
            "cell"
        };

        const char* adjectives[84] = {
            "alluring",
            "secretive",
            "better",
            "abaft",
            "confused",
            "next",
            "strict",
            "quizzical",
            "regular",
            "sleepy",
            "unused",
            "excited",
            "insidious",
            "fantastic",
            "outrageous",
            "orange",
            "wiry",
            "fallacious",
            "disillusioned",
            "divergent",
            "misty",
            "satisfying",
            "outgoing",
            "nine",
            "electronic",
            "greasy",
            "wary",
            "scared",
            "righteous",
            "secret",
            "crazy",
            "truthful",
            "miniature",
            "chilly",
            "robust",
            "desperate",
            "late",
            "unaccountable",
            "jealous",
            "dependent",
            "enchanting",
            "popular",
            "young",
            "endurable",
            "woozy",
            "neighborly",
            "tested",
            "waggish",
            "unique",
            "super",
            "statuesque",
            "proud",
            "tan",
            "wry",
            "actual",
            "broad",
            "sedate",
            "concerned",
            "thoughtful",
            "guarded",
            "gleaming",
            "additional",
            "quick",
            "faithful",
            "incandescent",
            "helpful",
            "laughable",
            "scary",
            "clumsy",
            "pastoral",
            "gaudy",
            "guiltless",
            "gratis",
            "absent",
            "cute",
            "tiny",
            "hanging",
            "magenta",
            "observant",
            "happy",
            "defiant",
            "quaint",
            "magical",
            "sordid",
        };
    public:
        inline const char* pick(int seed) {
            byte nounsLength = ((sizeof(nouns)) / (sizeof(nouns[0])));
            byte adjsLength = ((sizeof(adjectives)) / (sizeof(adjectives[0])));

            seed = seed % (nounsLength * adjsLength);
            char buffer[20] = {'\0'};
            char* s_ptr = buffer;

            char adjective[15] = {};
            strcpy(adjective, (char*)adjectives[seed % 83]);
            adjective[0] = toupper(adjective[0]);

            char noun[15] = {};
            strcpy(noun, (char*)nouns[seed % 49]);
            noun[0] = toupper(noun[0]);

            strcpy(buffer, adjective);
            strcat(buffer, noun);
            return s_ptr;
        }
};

