/********************************************************
 * Rust language code to compute birthday probabilities *
 * Book: The probability lifesaver by Steven J. Miller  *
 * Chapter 1, Figure 1-2                                *
 *                                                      *
 * now 365 - (n - 1) equals 366 - n                     *
 ********************************************************/

fn main() {
    // at start 100% chance don’t share a birthday
    let mut noshare:f32 = 1.0;

    let mut n:u8 = 2;              // how many people, from 2 to 50
    while n < 51 {
        let float_n = n as f32;    // equals to n's value in float type
        noshare *= (366.0 - float_n) / 365.0;
        println!("p({}) = {:.2}%", n, (1 - noshare) * 100.0);
        n += 1;
    }
}
