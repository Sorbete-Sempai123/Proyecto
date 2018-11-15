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
