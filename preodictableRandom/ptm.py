import random

while True:
    preodic_table = {
        1: ["H", "Hydrogen","1"],
        2:["He","Helium","4"],
        3:["Li","Lithium","7"],
        4:["Be","Beryllium","9"],
        5:["B","Boron"],
        6:["C","Carbon"],
        7:["N","Nitrogen"],
        8:["O","Oxygen"],   
        9:["F","Fluorine"],
        10:["Ne","Neon"],
        11:["Na","Sodium"],   
        12:["Mg","Magnesium"],
        13:["Al","Aluminium"],
        14: ["Si","Silicon"],
        15: ["P","Phosphorus"],
        16:["S","Sulfur"],
        17:["Cl","Chorine"],
        18:["Ar","Argon"],
        19:["K","Potassium"], 
        20:["Ca","Calcium"],
        21:["Sc","Scandium"],
        22:["Ti","Titanium"],
        23:["V","Vanadium"],
        24:["Cr","Chromium"],
        25:["Mn","Manganese"],
        26:["Fe","Iron(Ferum)"],
        27:["Co","Cobalt"],
        28:["Ni","Nickel"],
        29:["Cu","Copper"],
        30:["Zn","Zink"],
        31:["Ga","Gallium"],
        32:["Ge","Germanium"],
        33:["As","Arsenic"],
        34:["Se","Selenium"],
        35:["Br","Bromine"],
        36:["Kr","Krypton"],
        37:["Rb","Rubidium"],
        38:["Sr","Strontium"],
        39:["Y","Yattrium"],
        40:["Zr","Zirconium"],
        41:["Nb","Niobium"],
        42:["Mo","Molybdenum"]
    }

    keys = list(preodic_table)
    x = random.choice(keys)

    inp = input(f"Enter The Name Of {x} Number Mole: ")
    if preodic_table[x][0].lower() == inp.strip().lower():
        print(f"Correct: {preodic_table[x][1]}")
    else:
        print(f"Wrong Ans! ans is '{preodic_table[x][0]}' : '{preodic_table[x][1]}'")

