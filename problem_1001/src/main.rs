fn main() {
    let mut input = String::new();
    std::io::stdin().read_line(&mut input).unwrap();
    let numbers: Vec<i32> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();
    
    println!("{}", numbers[0] - numbers[1]);
}