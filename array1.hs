import Data.Array

get_array=array((1,1),(3,3)) [((1,1),1),((1,2),2),((1,3),3),
                              ((2,1),4),((2,2),5),((2,3),6),
                              ((3,1),7),((3,2),8),((3,3),9)]

main = do
	let a=elems get_array --determinante
	let x=a!!0*a!!4*a!!8+a!!1*a!!5*a!!6+a!!2*a!!3*a!!7
	let y=a!!2*a!!4*a!!6+a!!1*a!!3*a!!8+a!!0*a!!5*a!!7
	print(x-y)
	putStrLn"wards"