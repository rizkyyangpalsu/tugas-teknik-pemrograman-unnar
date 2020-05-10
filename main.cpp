//
//  main.cpp
//  Luas Keliling Persegi
//
//  Created by Proxima Centauri on 04/05/20.
//  Copyright © 2020 Infinite Devsign. All rights reserved.
//

#include <iostream>

int main() {
    
    int length, width;
    
    std::cout << "Masukkan panjang persegi panjang(CM): ";
    std::cin >> length;
    
    std::cout << "Masukkan lebar persegi panjang(CM): ";
    std::cin >> width;
    
    std::cout << std::endl << "Luas dari persegi panjang adalah " << length * width << " cm" << std::endl;
    std::cout << "Keliling dari persegi panjang adalah " << 2*(length + width) << " cm" << std::endl;
    
    return 0;
}
