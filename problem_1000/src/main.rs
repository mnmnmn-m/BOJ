fn main() {
    let mut input: String = String::new();
    std::io::stdin().read_line(&mut input).unwrap();
    let numbers: Vec<i32> = input
        .split_whitespace()
        .map(|x: &str| x.parse().unwrap())
        .collect();
    
    println!("{}", numbers[0] + numbers[1]);
}