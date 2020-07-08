#!/bin/bash
echo "C Piscine Project Test Script"
echo "    smun  ver.1"
echo

# ** History **
#   ver 1.  first                                    2020-07-08 12:59

export PROJECT=$1

find . -print | sed -e 's;[^/]*/;|____;g;s;____|; |;g'

prepare_c_exercise() {
    echo
    echo " === Test Exercise $1 === "
    cd ex$1
    echo " >> Norminette Result <<"
    norminette -R CheckForbiddenSourceHeader
}
test_c_exercise() {
    gcc -Wall -Wextra -Werror -o test_ex$1 *.c ../$PROJECT/ex$1.c
    ./test_ex$1 >> utest

    if [[ "$2" != "NotPrint" ]]
    then
        echo " >> Your result <<"
        ./test_ex$1
        echo
        echo " >> Expected result <<"
        cat ../$PROJECT/ex$1.result
        echo
    else
        echo " >>!! Hidden result print !!<<"
    fi

    echo " >> diff result <<"
    diff -U 3 ../$PROJECT/ex$1.result utest | cat -e
    echo
    echo "  *** Your Exercise $1 result is... :/ ***"
    DIFF_RESULT=$(diff -U 3 ../$PROJECT/ex$1.result utest | cat -e)
    if [[ $DIFF_RESULT == "" ]]
    then
        echo "       Diff OK :D"
    else
        echo "       Diff KO :("
    fi

    echo
    rm -rf test_ex$1 utest
    cd ..
}

if [[ $PROJECT == "C00" ]]
then
    for I in {0..8}
    do
        prepare_c_exercise $(printf "%02d" "$I")
        test_c_exercise $(printf "%02d" "$I")
    done
elif [[ $PROJECT == "C01" ]]
then
    for I in {0..8}
    do
        prepare_c_exercise $(printf "%02d" "$I")
        test_c_exercise $(printf "%02d" "$I")
    done
elif [[ $PROJECT == "C02" ]]
then
    for I in {0..12}
    do
        prepare_c_exercise $(printf "%02d" "$I")
        test_c_exercise $(printf "%02d" "$I")
    done
elif [[ $PROJECT == "C03" ]]
then
    for I in {0..5}
    do
        prepare_c_exercise $(printf "%02d" "$I")
        test_c_exercise $(printf "%02d" "$I")
    done
elif [[ $PROJECT == "C04" ]]
then
    for I in {0..2}
    do
        prepare_c_exercise $(printf "%02d" "$I")
        test_c_exercise $(printf "%02d" "$I")
    done
fi
