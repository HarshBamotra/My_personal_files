reverse([], []).
reverse([H|T], R) :- reverse(T, RevT), append(RevT, [H], R).