verinver = input()
amia = input()
cohhhho = input()

def adivinhar(verinver, amia, cohhhho):
    if cohhhho == "carnivoro":
         return "aguia"
    elif cohhhho == "herbivoro":
        if amia == "mamifero":
             return "vaca"
        elif amia == "inseto":
             return "lagarta"
    elif cohhhho == "onivoro":
        if amia == "ave":
             return "pomba"
        elif amia == "mamifero":
             return "homem"
        elif amia == "anelideo":
             return "minhoca"
    elif cohhhho == "hematofago":
        if amia == "inseto":
             return "pulga"
        if amia == "anelideo":
             return "sanguessuga"

print(adivinhar(verinver, amia, cohhhho))