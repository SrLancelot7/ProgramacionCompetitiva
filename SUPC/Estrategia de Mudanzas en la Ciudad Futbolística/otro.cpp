n = int(input())
equipo = []
numvecin = []
vecinos= []
for _ in range(n):
    aux = input().split()
    equipo.append(aux[0])
    numvecin.append(int(aux[1]))
    vecinos.append([int(v) for v in aux[2:]])
    #print(input().split())
#print(equipo)
#print(numvecin)
#print(vecinos)
#print()
for v in range(n):
    suma = 0
    for u in vecinos[v]:
        if equipo[u-1]!=equipo[v]:
            suma = suma+1
    if suma>numvecin[v]/2:
        print(v+1, end = ' ')