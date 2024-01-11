import random
l = [[" "," "," "], [" "," "," "] , [" "," "," "]]

def update_board(l):
    print(f"  {l[0][0]}  |  {l[0][1]}  |  {l[0][2]}\n_______________\n  {l[1][0]}  |  {l[1][1]}  |  {l[1][2]}\n_______________\n  {l[2][0]}  |  {l[2][1]}  |  {l[2][2]}\n")    

def check(l):
    
    if((l[0][0] == l[0][1] == l[0][2] or l[1][0] == l[2][0] == l[0][0] )and (l[0][0] != " ")):
        return " Player " + l[0][0] + " Wins "
    elif((l[1][0] == l[1][1] == l[1][2] or l[0][2] == l[1][1] == l[2][0] or l[1][1] == l[2][2] == l[0][0] or l[1][0] == l[2][0] == l[0][0]) and l[1][1] != " " ):
        return " Player " + l[1][1] + " Wins "
    elif((l[2][0] == l[2][1] == l[2][2] or l[2][0] == l[2][1] == l[2][2])and (l[2][0] != " ")):
        return " Player " + l[2][0] + " Wins "
    elif(l[0][0] != " " and l [0][1] != " " and l[0][2] != " " and l[1][0] != " " and l [1][1] != " " and l[1][2] != " " and l[2][0] != " " and l [2][1] != " " and l[2][2] != " "):
        return " Draw "
    else:
        return None        
def playervplayer(l):
    a = 0
    update_board(l)
    while (check(l) == None):
        player = "x" if a%2 == 0 else "o"
        a += 1
        
        indices = [int(i) for i in input(f"For player {player} Enter the Co-od [(0,0)format]: ").split(",")]
        while(l[indices[0]][indices[1]] != " "):
            print("That place is already filled")
            update_board(l)
            indices = [int(i) for i in input(f"For player {player} Enter the Co-od [(0,0)format]: ").split(",")]
        
             
        l[indices[0]][indices[1]] = player
        update_board(l)

def playervcomp(l):
    comp = random.choice(["x" , "o"])
    player = "x" if(comp == "o") else "o"
    a = 2
    start = a
    print(f"Computer : ",comp , "         Player : ",player)
    while True:
        if(a % 2 == 0):
            turn = comp
            a+=1
        else:
            turn = player
            a+=1
        if(turn == player):
            update_board(l)
            ask = [int(i) for i in input(f"For player {player} Enter the Co-od [(0,0)format]: ").split(",")]
            while(l[ask[0]][ask[1]] != " "):
                print("That place is already filled")
                update_board(l)
                ask = [int(i) for i in input(f"For player {player} Enter the Co-od [(0,0)format]: ").split(",")]
        
             
            l[ask[0]][ask[1]] = turn
            update_board(l)
        elif(turn == comp):
            if(a == start+1):
                moves = [[1,1] , [0,0] , [2,2] , [0,2] , [2,0]]
                toplay = random.choice(moves)
                l[toplay[0]][toplay[1]] = turn
                update_board(l)
                print("Computer Played")
            else:
                temp = l

                for one in range(0,len(temp)):
                    for ten in (0,len(temp[one])):
                        another_temp = temp[one][ten] 
                        temp[one][ten] = "x"
                        if(check(temp)):
                            print([one],[ten])
                            break
                        temp[one][ten] = another_temp
                            
                        
            
                
            

        
        

        
        

playervcomp(l)


