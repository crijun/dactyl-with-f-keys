rm xiix_xiix-left.hex
qmk clean

qmk compile -kb xiix -km xiix-left 
qmk compile -kb xiix -km xiix-right
