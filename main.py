for y in range(-12, 12):
    line = ''
    for x in range(-40, 40):
        c = complex(x/20.0, y/12.0)
        z = 0
        n = 0
        while abs(z) <= 2 and n < 40:
            z = z*z + c
            n += 1
        line += ' .:-=+*#%@'[n//4]
    print(line)
print("\n¡Fractal de Mandelbrot en Python!")
