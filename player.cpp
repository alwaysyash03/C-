void ChessBoard::playGame() {
    bool gameOver = false;
    while (!gameOver) {
        displayBoard();
        if (currentPlayer == PLAYER1) {
            std::pair<int, int> move = getPlayerMove();
            if (isValidMove(move.first, move.second)) {
                makeMove(move.first, move.second);
                if (isCheckmate()) {
                    std::cout << "Player 1 wins!" << std::endl;
                    gameOver = true;
                } else {
                    currentPlayer = PLAYER2;
                }
            }
        } else {
            std::pair<int, int> move = generateAIMove();
            makeMove(move.first, move.second);
            if (isCheckmate()) {
                std::cout << "Player 2 wins!" << std::endl;
                gameOver = true;
            } else {
                currentPlayer = PLAYER1;
            }
        }
    }
}
