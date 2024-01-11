# TP-Eartsup-Gcc2
---
## Plus Petit Ecart
> Il est intéressant de prendre le tableau déjà trié pour gagner une boucle sur la complexité.
### Pour un tableau trié (O(n))
```
Name: SmallestGapSorted
input t: tableau trié
Result int: Retourne la valeur la plus petite entre deux nombres du tableau
BEGIN
    let aux = t[1] - t[0]
    Pour i=1, à i<taille de t-1, ++i
        Si i+1 - i < g alors
            g = i+1 - i
        Fin Si
    Fin Pour
    Retourne aux
END
```
### Pour un tableau non trié (O(n²))
```
Name: SmallestGapUnshorted
input t: tableau quelconque
Result int: Retourne la valeur la plus petite entre deux nombres du tableau
BEGIN
    let aux = t[1] - t[0]
    Si aux < 0 alors
        aux = -aux
    FinSi
    Pour i=1, à i<taille de t-1, ++i
        Pour j=i+1, à j<taille de t, ++j
            let result = t[i] - t[j]
            Si result < 0 alors
                result = -result
            FinSi
            Si result < aux alors
                aux = result
            FinSi
        FinPour
    FinPour
```
## Sous-ensemble avec somme donnée
```
Name: SubsetGivenSum
input num: nombre quelconque cible
input t: tableau quelconque
Result bool: Si le nombre cible correspond à une somme dans le tableau alors ça renvoi true sion false
BEGIN
    Pour i=0, à i<taille de t-1, ++1
        Pour j=i+1, à j<taille de t, ++j
            Si t[i] + t[j] = num alors
                Retourne Vrai
            FinSi
        FinPour
    FinPour
    Retourne Faux
```