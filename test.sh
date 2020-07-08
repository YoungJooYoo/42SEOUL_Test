#!/bin/bash
echo "C Piscine Project Test Script"
echo "    smun  ver.1"
echo

# ** History **
#   ver 1.  first                                    2020-07-08 12:59

export PROJECT=$1
export PRINT_RESULT=$2

find . -print | sed -e 's;[^/]*/;|____;g;s;____|; |;g'

compile() {
    gcc -Wall -Wextra -Werror -o test_ex$1 ex$1/*.c $DIR/$PROJECT/ex$1.c
}

test_c_exercise() {
    echo " === Test Exercise $1 === "
    DIR=$(dirname "$BASH_SOURCE")
    compile $1
    ./test_ex$1 >> utest
    if [[ $PRINT_RESULT == "p" ]]
    then
        echo " >> Your result <<"
        ./test_ex$1
        echo
        echo " >> Expected result <<"
        cat $DIR/$PROJECT/ex$1.result
        echo
    fi

    echo " >> diff result <<"
    diff -U 3 $DIR/$PROJECT/ex$1.result utest | cat -e
    echo
    DIFF_RESULT=$(diff -U 3 $DIR/$PROJECT/ex$1.result utest | cat -e)
    if [[ $DIFF_RESULT == "" ]]
    then
        echo " Diff OK :D"
    else
        echo " Diff KO :("
    fi

    echo
    rm -rf test_ex$1 utest
}

if [[ $PROJECT == "C00" ]]
then
    norminette -R CheckForbiddenSourceHeader
    for I in {0..8}
    do
        test_c_exercise $(printf "%02d" "$I")
    done
elif [[ $PROJECT == "C01" ]]
then
    norminette -R CheckForbiddenSourceHeader
    for I in {0..8}
    do
        test_c_exercise $(printf "%02d" "$I")
    done
elif [[ $PROJECT == "C02" ]]
then
    norminette -R CheckForbiddenSourceHeader
    for I in {0..11}
    do
        test_c_exercise $(printf "%02d" "$I")
    done
    echo " >> Your result <<"
    compile 12
    ./test_ex12 | cat -te
    rm -rf test_ex12
elif [[ $PROJECT == "C03" ]]
then
    norminette -R CheckForbiddenSourceHeader
    for I in {0..5}
    do
        test_c_exercise $(printf "%02d" "$I")
    done
elif [[ $PROJECT == "C04" ]]
then
    norminette -R CheckForbiddenSourceHeader
    for I in {0..2}
    do
        test_c_exercise $(printf "%02d" "$I")
    done
fi
