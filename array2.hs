import Data.Array



get_array=array((1,1),(3,3)) [((1,1),1),((1,2),2),((1,3),3),
                              ((2,1),4),((2,2),5),((2,3),6),
                              ((3,1),7),((3,2),8),((3,3),9)]

main = do
    let a=elems get_array --Transpuesta
    let x=a!!0*a!!4*a!!8+a!!1*a!!5*a!!6+a!!2*a!!3*a!!7
    let y=a!!2*a!!4*a!!6+a!!1*a!!3*a!!8+a!!0*a!!5*a!!7
    let aux=array((1,1),(3,3)) [((1,1),a!!0),((1,2),a!!3),((1,3),a!!6),
                                ((2,1),a!!1),((2,2),a!!4),((2,3),a!!7),
                                ((3,1),a!!2),((3,2),a!!5),((3,3),a!!8)]
    let aux2=elems aux
    print(take 3 a)
    print(take 3(drop 3 a))
    print(take 3(drop 6 a))
    print(take 3 aux2)
    print(take 3(drop 3 aux2))
    print(take 3(drop 6 aux2))