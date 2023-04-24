start:-
    write("Enter the first number ::"),
    read(X),nl,
    write("Enter the second number ::"),
    read(Y),nl,
    (X > Y -> M is X;
    X < Y -> M is Y),
    write("Maximum of the two numbers :: "),
    write(M).