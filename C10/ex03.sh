#!/bin/sh
./ft_hexdump -C myspeech | cat -e
./ft_hexdump -C myspeech myspeech myspeech | cat -e
./ft_hexdump -C gogogo myfile dir dirtest | cat -e
./ft_hexdump -C no_way | cat -e
./ft_hexdump -C /exam | cat -e
./ft_hexdump myspeech | cat -e
./ft_hexdump myspeech myspeech myspeech | cat -e
./ft_hexdump gogogo myfile dir dirtest | cat -e
./ft_hexdump no_way | cat -e
./ft_hexdump /exam | cat -e
echo "Hello Hello Hello Hello Go Go Go Go What is your name? 42 SEOUL!! Good? Nice! Hihihihi" | ./ft_hexdump | cat -e
echo "Hello Hello Hello Hello Go Go Go Go What is your name? 42 SEOUL!! Good? Nice! Hihihihi" | ./ft_hexdump -C | cat -e
