mkdir test01
mkdir test02
touch test03
touch test04~
touch test05#
touch "#test06"
touch "#test07#"
touch test01/testtest
touch test01/test~
touch test01/test#
touch test02/test!~
touch test02/test
mkdir "test02/testt"
mkdir "test02/#testt#"
mkdir "test02/otestt~"
touch "test02/testt/#test#"
find . \( -name "*~" -o -name "#*#" \) -print -delete
