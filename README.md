# TP-Eartsup-Gcc2
---
## Plus Petit Ecart
### Pour un tableau trié
```
Name: SmallestGapSorted
input t: tableau trié
Result int: Retourne la valeur la plus petite entre deux nombre du tableau
BEGIN
    let = t[1] - t[0]
    Pour i=1, à i<taille de t, ++i
        Si i+1 - i < g alors
            g = i+1 - i
        Fin Si
    Fin Pour
    Retourne let
END
```
