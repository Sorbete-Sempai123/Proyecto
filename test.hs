compara :: Float -> Float -> Bool
compara  a b   | a == 1 && b == 285 = True
               | a == 2 && b == 200 = True
               | a == 3 && b == 90 = True
               | otherwise = False

acumulador :: Float -> Bool -> Float
acumulador x  z | x > 1 && z ==True = 1 + ( acumulador (x-1) z) 
                 | x == 1 && z == True = 1
                 | otherwise = 0

main = do
     putStrLn "¿Cual es su Colegio?"
     sx <- getLine
     putStrLn "Particular(1) Parroquial(2) Nacional(3)"
     ax <- getLine
     putStrLn "Escriba su DNI"
     tx <- getLine
     putStrLn "Monto de la 'Donacion'"
     bx <- getLine
     putStrLn "Numero de alummnos"
     x <- readLn
    -- let s = ( read sx :: String)
     let a = ( read ax :: Float )
     --let t = ( read tx :: String)
     let b = ( read bx :: Float )
     print(acumulador x (compara a b))
     print("Fueron los que aprobaron")
