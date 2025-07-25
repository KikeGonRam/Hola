package main

import "fmt"

func main() {
    fmt.Println("Secuencia de Fibonacci en Go:")
    a, b := 0, 1
    for i := 0; i < 10; i++ {
        fmt.Printf("%d ", a)
        a, b = b, a+b
    }
    fmt.Println("\n¡Impresionante!")
}