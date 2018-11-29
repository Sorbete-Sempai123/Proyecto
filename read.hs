import Control.Monad
import Data.Char

getInt :: Char -> Int
getInt x = digitToInt x

getChar :: Int -> Char
getChar x = intToDigit x 

convertirnumero::String->Int
convertirnumero x = do
    let y=getInt (x!!0 :: Char)
    let z=getInt (x!!1 :: Char)
    (y*10+z)
main::IO()
main = do
    let file = "texto.txt"
    contents <- readFile file
    putStrLn contents
    let lineas = lines contents
    let palabra1 = words (head lineas)
    let palabra2 = words (head (drop 1 lineas))
    let palabra3 = words (head (drop 2 lineas))
    let palabra4 = words (head (drop 3 lineas))
    let palabra5 = words (head (drop 4 lineas))
    print (head (drop 1 palabra1) ++" "++ head (drop 1 palabra2)++" "++ head (drop 1 palabra3)++" "++ head (drop 1 palabra4)++" "++ head (drop 1 palabra5))
    print(palabra1)
    print(convertirnumero ( palabra1!!1))
    let numero1=convertirnumero(palabra1!!1)*2
    let numero2=convertirnumero(palabra2!!1)*2
    let numero3=convertirnumero(palabra3!!1)*2
    let numero4=convertirnumero(palabra4!!1)*2
    let numero5=convertirnumero(palabra5!!1)*2
    let archivo="ward.txt"
    var1<-getLine
    if var1=="1" then writeFile archivo (head palabra1++" "++(show numero1)
               ++"\n"++head palabra5++" "++(show numero5)
               ++"\n"++head palabra4++" "++(show numero4)
               ++"\n"++head palabra3++" "++(show numero3)
               ++"\n"++head palabra2++" "++(show numero2))
    else putStrLn "ward"

    if var1=="2" then writeFile archivo (head palabra2++" "++(show numero2)
               ++"\n"++head palabra1++" "++(show numero1)
               ++"\n"++head palabra5++" "++(show numero5)
               ++"\n"++head palabra4++" "++(show numero4)
               ++"\n"++head palabra3++" "++(show numero3))
    else putStrLn "ward"

    if var1=="3" then writeFile archivo (head palabra3++" "++(show numero3)
               ++"\n"++head palabra2++" "++(show numero2)
               ++"\n"++head palabra1++" "++(show numero1)
               ++"\n"++head palabra5++" "++(show numero5)
               ++"\n"++head palabra4++" "++(show numero4))
    else putStrLn "ward"

    if var1=="4" then writeFile archivo (head palabra4++" "++(show numero4)
               ++"\n"++head palabra3++" "++(show numero3)
               ++"\n"++head palabra2++" "++(show numero2)
               ++"\n"++head palabra1++" "++(show numero1)
               ++"\n"++head palabra5++" "++(show numero5))
    else putStrLn "ward"

    if var1=="5" then writeFile archivo (head palabra5++" "++(show numero5)
               ++"\n"++head palabra4++" "++(show numero4)
               ++"\n"++head palabra3++" "++(show numero3)
               ++"\n"++head palabra2++" "++(show numero2)
               ++"\n"++head palabra1++" "++(show numero1))
    else putStrLn "ward"

