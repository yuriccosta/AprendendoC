#!/bin/bash

echo Criando arquivos

for (( c = 1; c <= 10; c++ ))
    do
    if [ $c -lt 10 ]; then
	    echo Ex0$c.c
	    touch Ex0$c.c
    else
        echo Ex$c.c
	    touch Ex$c.c
    fi
done

echo Finalizado!

