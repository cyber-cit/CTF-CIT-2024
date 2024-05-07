use std::io;
use std::io::Write;

fn main() {
    println!("Welcome to the Maze!");
    println!("You are trapped in a maze. Find your way out to uncover the flag.");

    let flag = [ 0x30, 0x27, 0x23, 0x15, 0x3, 0xd, 0x56, 0x0, 0x2c, 0x56, 0x16,
                    0x2c, 0x7, 0x1b, 0x5d, 0x2c, 0x0, 0x47, 0x17, 0xe ]; // Plaintext: CIT{th!s_!s_th3_w4y} 
    let escape = [115, 110, 119, 110, 119, 101, 119, 115, 115, 119, 101, 115, 115, 115, 110, 115, 119, 115, 110, 115]; // correct escape path in ascii decimal ('n', 's', 'e', 'w')

    let mut path: Vec<u8> = Vec::new();
    loop {
        println!("Enter your move (n/s/e/w):");
        io::stdout().flush().unwrap();
        
        let mut input = String::new();
        io::stdin().read_line(&mut input).expect("Failed to read input");

        let direction = input.trim().to_lowercase();
        
        match direction.as_str() {
            "n" | "s" | "e" | "w" => {
                println!("You moved {}.", direction);
                path.push(direction.chars().nth(0).unwrap() as u8);

                if path.len() == escape.len() {
                    break;
                }
            }
            _ => {
                println!("Invalid move. Please enter n/s/e/w.");
            }
        }
    }

    let xor_result = xor(&path, &flag);
    let s = String::from_utf8_lossy(&xor_result);

    if path == escape {
        println!("Congradulations! You found the exit door labeled: {}", s);
    } else {
        println!("Dead end! The wall reads: {}", s);
    }
}

fn xor(a: &[u8], b: &[u8]) -> Vec<u8> {
    let c = a.iter()
        .zip(b.iter())
        .map(|(&x1, &x2)| x1 ^ x2)
        .collect();

    c
}

