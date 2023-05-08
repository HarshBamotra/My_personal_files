start:-
    write("Enter the first number ::"),
    read(N1),nl,
    write("Enter the second number ::"),
    read(N2),nl,
    gcd(N1,N2,R),
    write("The GCD of the two numbers :: "),
    write(R).

gcd(N1,N2,R):-
    (N1 =:= N2 -> R is N1;
    N1 > N2 -> gcd(N1-N2, N2, R);
    gcd(N1,N2-N1,R)).
    