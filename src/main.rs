fn main(){
    let mut n = String::new();
    std::io::stdin().read_line(&mut n).unwrap();
    let n: i32 = n.trim().parse().unwrap();
    let mut a = String::new();
    std::io::stdin().read_line(&mut a).unwrap();
    let a: Vec<i32> = a.split_whitespace().map(|x| x.parse().unwrap()).collect();
    let mut b = String::new();
    std::io::stdin().read_line(&mut b).unwrap();
    let b: Vec<i32> = b.split_whitespace().map(|x| x.parse().unwrap()).collect();
    let mut sum = 0;
    for i in 0..n {
        sum += a[i as usize] * b[i as usize];
    }
    if sum == 0 {
        println!("Yes");
    } else {
        println!("No");
    }
}