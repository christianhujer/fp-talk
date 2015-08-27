#!/usr/bin/prolog
:- set_prolog_flag(verbose, silent).
:- initialization main.

main(Argv) :- echo(Argv).

echo([]) :- nl.
echo([Last]) :- write(Last), echo([]).
echo([H|T]) :- write(H), write(' '), echo(T).
