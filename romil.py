import turtle

# Set up the screen
screen = turtle.Screen()
screen.title("Tic Tac Toe")
screen.bgcolor("white")
screen.setup(width=600, height=600)

# Create the game board

board = [['', '', ''], ['', '', ''], ['', '', '']]
player = 'X'
    

# Draw X or O
def draw_xo(row, col, player):
    x = -300 + col * 200
    y = 300 - row * 200
    turtle.penup()
    turtle.goto(x + 80, y - 80)
    turtle.pendown()
    turtle.hideturtle()
    if player == 'X':
        turtle.write('X', font=("Arial", 48, "normal"))
    else:
        turtle.write('O', font=("Arial", 48, "normal"))

# Check for a win
def check_win(player):
    for row in board:
        if all([cell == player for cell in row]):
            return True
    for col in range(3):
        if all([board[row][col] == player for row in range(3)]):
            return True
    if all([board[i][i] == player for i in range(3)]) or all([board[i][2 - i] == player for i in range(3)]):
        return True
    return False

# Check for a tie
def check_tie():
    return all(all(cell != '' for cell in row) for row in board)

# Reset the game
def replay():
    global board, player
    player = 'X'
    #grid drawing again
    
    turtle.clear()
    turtle.speed(0)
    turtle.penup()
    for y in range(-300, 301, 200):
        turtle.goto(-300, y)
        turtle.pendown()
        turtle.forward(600)
        turtle.penup()
    turtle.right(90)
    for x in range(-300, 301, 200):
        turtle.goto(x, 300)
        turtle.pendown()
        turtle.forward(600)
        turtle.penup()
    turtle.left(90)

    # Set up the screen
    screen = turtle.Screen()
    screen.title("Tic Tac Toe")
    screen.bgcolor("white")
    screen.setup(width=600, height=600)

    # Create the game board

    board = [['', '', ''], ['', '', ''], ['', '', '']]
    player = 'X'    

    draw_xo()
    screen.onclick(click)
    check_win()
    check_tie()
    
    turtle.done()


# Click
def click(x, y):
    global player

    col = int((x + 300) // 200)
    row = int((-y + 300) // 200)

    if row < 0 or row >= 3 or col < 0 or col >= 3 or board[row][col] != '':
        return

    draw_xo(row, col, player)
    board[row][col] = player

    if check_win(player):
        turtle.hideturtle()
        turtle.penup()
        turtle.goto(-50, 0)
        turtle.pendown()
        turtle.clear()
        turtle.write(f"Player {player} wins! Press space to play again" , align="center" , font=("Arial", 24, "normal") )
        return
    elif check_tie():
        turtle.hideturtle()
        turtle.penup()
        turtle.goto(-50, 0)
        turtle.pendown()
        turtle.clear()
        turtle.write("It's a tie!  Press space to play",  align="center" ,font=("Arial", 20, "normal") )
        return

    player = 'O' if player == 'X' else 'X'

# Screen 
screen.listen()
screen.onclick(click)
screen.onkeypress(replay,"space")

#Grid drawing
turtle.speed(0)
turtle.penup()
for y in range(-300, 301, 200):
    turtle.goto(-300, y)
    turtle.pendown()
    turtle.forward(600)
    turtle.penup()
turtle.right(90)
for x in range(-300, 301, 200):
    turtle.goto(x, 300)
    turtle.pendown()
    turtle.forward(600)
    turtle.penup()
turtle.left(90)



# Start the game
turtle.done()
