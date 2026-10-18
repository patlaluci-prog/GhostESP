# Česká verze CrowPanel Advance 4.3

Pracovní základ: `patlaluci-prog/GhostESP`, větev `crowpanel43-cz`, commit
`18a634866491b8df471a0707decf5822609ffd88`. Původní větev zůstává zálohou.
Pracovní větev: `codex/complete-czech-crowpanel43`; cíl PR: `crowpanel43-cz`.

## Změny

Český slovník je sdílený v `main/gui/ghost_cz_ui.c`; jeho čitelný zdroj je
`docs/czech_ui_catalog.json`. Překlady jsou napojené na zobrazování nabídek,
nastavení, dialogů, stavů, průvodce, klávesnice, souborového správce a aplikací.
Interní anglické klíče a tabulky pro výběr akcí zůstávají původní. Formátované
texty se překládají před dosazením hodnot; obsah SSID, zpráv a souborů se nemění.
Datum hodin používá české názvy dnů a měsíců. Tlačítko dokončení průvodce
má samostatný interní klíč `Finish`; rozhodovací porovnání zůstává původní.
Upozornění mají větší vyrovnávací paměť a při kopírování se neřeže znak UTF-8.

Montserrat má pro tento konkrétní CrowPanel doplňkové české glyfy ve velikostech
8, 10, 12, 14, 16, 18, 24, 28 a 40 px. Původní ikony zůstávají ve výchozím
fontu. Výška řádku zohledňuje diakritiku. Největší písmo terminálu je 28 px;
zalamování a dělený terminál nadále měří skutečný font v dostupné šířce.

## Zachované hranice a nepřeložené texty

Názvy technologií a produktů, příkazy CLI, názvy protokolů, souborové formáty,
uživatelská data, názvy externích aplikací, jejich obsah a syrové diagnostické
výpisy zůstávají původní. Diagnostické výstupy CLI/ESP-IDF a texty dodávané
externími aplikacemi tedy mohou být v terminálu anglické. Nejde o přepis všech
řetězců v repozitáři nebo o překlad webového rozhraní.

Kontrolní otisky 102 souborů v `docs/czech_protected_sources.json` hlídají beze změny jádro,
rádiové funkce, skenování, správu nastavení a celý display_manager včetně funkční
opravy V1.1 (I2C 0x30, příkaz 0x10 pro podsvícení). Samostatný manifest
`czech_ui_comparisons.json` ověřuje původní argumenty porovnávání v UI.
Interní názvy grafických balíčků včetně klíče `None` zůstávají původní. Při budoucích věcných
změnách těchto souborů je nutné tento účelový kontrolní manifest vědomě obnovit.

## Ověření

`python scripts/test_czech_ui.py -v` kontroluje shodu formátovacích parametrů,
slovník, původ chráněných zdrojů, české glyfy, ikony, bezpečné kopírování UTF-8
a měření textu v terminálu 800×480 při 28 px včetně šířky děleného terminálu.
Nativní část vyžaduje C kompilátor `cc` a běží v Linux CI. Sestavení firmwaru
používá ESP-IDF 6.1 a `configs/sdkconfig.crowpanel_advance43`.

Autoritativní výsledky sestavení, testů a firmware ZIP jsou v kontrolách
[Pull Requestu #1](https://github.com/patlaluci-prog/GhostESP/pull/1/checks).
Popis PR uvádí přesný ověřený commit a odkaz na jeho úspěšný běh.
Na fyzickém zařízení v této relaci neproběhlo ověření dotyku ani podsvícení.
