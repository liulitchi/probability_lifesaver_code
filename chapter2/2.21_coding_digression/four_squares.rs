/*****************************************************************************
 * Rust language code for Sum four squares, 2.2.1 Coding Digression          *
 * sum_4squares is the number we are investingating will count how often     *
 * sum_4squares = a^2 + b^2 + c^2 + d^2 with a <= b <= c <= d                * 
 *                                                                           *
 * If you find hard to solve, try to think an easy way,                      *
 * like in two squares's situation. After this, you can it do better         *
 *****************************************************************************/
use std::io;

fn main() {
    // the number as a sum of four squares
    let mut sum_4squares = String::new();

    println!("Please input an integer number:");
    io::stdin().read_line(&mut sum_4squares).expect("Failed to read line");
	let sum_4squares: u32 = sum_4squares.trim().parse().expect("Please type a number!");
	
    let mut a: u32 = 1;
	while a * a <= sum_4squares { 
	    let mut b: u32 = a;
		while b * b <= sum_4squares - a * a {
		    let mut c: u32 = b;
			while c * c <= sum_4squares - a * a - b * b {
			    let mut d: u32 = c;
				while d * d <= sum_4squares - a * a - b * b - c * c {
                    let diff: u32 = sum_4squares - a * a - b * b - c * c - d * d;
			        if diff == 0 {
			            println!("{} = {}^2 + {}^2 + {}^2 + {}^2", sum_4squares, a, b, c, d);
			        }
			        d += 1;
		       }   
		        c += 1;
	        }
			b += 1;
        }
	    a += 1;
	}
}
