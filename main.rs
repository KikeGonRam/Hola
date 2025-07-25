fn is_prime(n: u32) -> bool {
    if n < 2 { return false; }
    for i in 2..=((n as f64).sqrt() as u32) {
        if n % i == 0 { return false; }
    }
    true
}

fn main() {
    println!("Números primos en Rust:");
    for i in 2..30 {
        if is_prime(i) {
            print!("{} ", i);
        }
    }
    println!("\n¡Impresionante!");
}
