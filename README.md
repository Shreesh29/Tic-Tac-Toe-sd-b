# Tic-Tac-Toe-sd-b
A TicTacToe game on Qt Creator

SEE THE GAME WORK ON YOUTUBE: https://www.youtube.com/watch?v=O7tuHf5Pprc

BEFORE THE JOURNEY:
Before beginning development of the game, I had a huge problem of Qt git giving errors on committing and pushing to my remote repository. I searched online, there were only a few videos detailing a solution but all of them were for very old version and didnt exactly match my problem. 
I spent three hours trying to solve it on my own. It finally got solved my when I created a repository through terminal on my desktop folder. Through terminal, I pulled and pushed the remote repository. After that I stored the Qt program in that folder. Now, when I committed and pushed through Qt, it worked!

THE JOURNEY:
I have enlisted my journey coding this final project in steps below:

1. Starting the project, I didn’t want to look at any tutorial videos. I want to find and learn my way through to code a TicTacToe Game. I had an initial idea in my mind on how I would implement a 3x3 tic-tac-toe board. But first, I wanted to learn how to add a picture of “X” & “O” to my GUI as I wanted the game to look good. I used this YouTube tutorial for it:
QT C++ GUI Tutorial 11- How to set image with QLabel in Q ( https://www.youtube.com/watch?v=pzzccU9mErg ) 

From this, I learnt how to use pixmap to add images to my GUI. 
The way the YouTube video told me was not working on my Mac (Qt Mac issues), so I googled and found the fix to the bug on: https://forum.qt.io/topic/58107/solved-png-pixmap-in-qlabel-won-t-show
It now works. 

2. My game plan is to have 9 buttons on the screen for each coordinate of the 3x3 board. So I decided to test if image would change to “X” if I click on a button. Then, I discovered another bug on Qt Mac - https://forum.qt.io/topic/98059/push-button-label-settext-not-refreshing-under-macos. The pushButton does not refresh the label automatically, but only after de-focusing the PyQt Window, e.g. by moving to another desktop or application. 
The Code works (the label changes to image X on button click) if I shift to another application/desktop screen and return to my QtWindow, but it is annoying to keep doing it to test the code or play the game. The same code works perfectly and updates the image real time on a Microsoft machine so I am good. 

3. I created a 3x3 grid/matrix for my X’s and O’s. Now I wanted to create a system where if I click on a11 spot in the matrix, "X" appears. However, I don’t know how to do this and I can’t find the proper code for this on the internet. So instead I will create 9 buttons which will act as interface for player to choose where he wants to place his Xs or Os. 

4. I was having problem to create of vector of vector of type bool and initialize it to a 3x3 size so I decided to go with an array of array of type char. When user selects a location, the array drops X or O on that location in 3x3 matrix. I will also be able to determine who wins this way by an algorithm that tracks the chars in the array matrix.

5. Disappearance problem:
I needed to figure out how to disappear buttons when they are clicked. I found this information on: https://stackoverflow.com/questions/10794532/how-to-make-a-qt-widget-invisible-without-changing-the-position-of-the-other-qt. Now when the player clicks on a location button, it disappears so that the button cannot be clicked again. It also makes it easier to see what locations are available to choose from in the game board.

6. String to Char problem
My game_board array which keeps track of the Xs and 0s and their positions in order to determine a winner uses chars to do so. I needed to figure out a way to display the current turn (which is in char) on a QLabel. I did this by converting the char into a string using QString.  https://stackoverflow.com/questions/14270760/char-to-qstring

7. Resource problem: The Images that I had added to my game as X’s and O’s were stored in my computer and hence wouldn’t load if someone else tried to run the game on their machine. So I made a resource file in my project and added those images there and connected that file pathway to my game. 

8. Formatting Text in Bold and Different Color:
I wanted to add some different fonts along with colors, and an entire background to my game. I found these videos useful in knowing how to do this:
C++ Qt 14 - QLabel and QT Designer - YouTubehttps://www.youtube.com › watch
https://www.youtube.com/watch?v=us2bq5vpQ9g&list=PLS1QulWo1RIZiBcTr5urECberTITj7gjA&index=16&t=0s
I added a background, a tic tac toe heading and changed fonts to white as my background is dark. Though I initially had problems selecting and inserting the background, everything works now. 

Key Course Concepts used:
1. Unordered set: I have used an unordered set in a helper function (areDistinct) to ascertain if the elements in array are distinct
2. Pointers
3. Iterators to traverse containers
4. Template function - I had used a template function for determining tie/no tie but later replaced it with areDistinct helper function
