#!/bin/bash

unit_test () {
    echo Performing unit testing
    ./tester
    echo Test program returned $?
}

black_box_test () {
    echo Performing black box testing
    arg="5"
    if (( $# > 0 ))
    then
        arg=$1
    fi

    ../bin/main "$arg"
    if (( $arg == $? ))
    then 
        echo SUCCESS
    else
        echo FAILURE
    fi
}

if (( $# > 0 && "$1" == "unit" ))
then
    unit_test
else
    black_box_test    
fi