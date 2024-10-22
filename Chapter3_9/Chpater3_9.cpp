#include <iostream>
#include <bitset>

using namespace std;

int main()
{

    const unsigned char opt0 = 1 << 0;
    const unsigned char opt1 = 1 << 1;
    const unsigned char opt2 = 1 << 2;
    const unsigned char opt3 = 1 << 3;
    const unsigned char opt4 = 1 << 4;

    unsigned char item_flag = 0;

    cout << "No item " << bitset<8>(item_flag) << endl;

    //item0 on
    item_flag |= opt0;
    cout << "Item0 obtained " << bitset<8>(item_flag) << endl;
    item_flag |= opt1;
    cout << "Item1 obtained " << bitset<8>(item_flag) << endl;


    //item0 lost
    item_flag &= ~opt0;
    cout << "Item0 lost " << bitset<8>(item_flag) << endl;

    //has item1 ?
    if (item_flag & opt1)
        cout << "Has item1" << endl;
    else
        cout << "Not have itme1" << endl;

    //optain item 2, 3
    item_flag |= (opt2 | opt3);
    cout << "Item 2,3 obtained " << bitset<8>(item_flag) << endl;

    //자리 출력
    const unsigned int red_mask = 0xFF0000;
    const unsigned int green_mask = 0x00FF00;
    const unsigned int blue_mask = 0x0000FF;

    unsigned int pixel_color = 0xDAA520;

    unsigned char green = pixel_color & blue_mask >> 8;
    unsigned char blue = pixel_color & blue_mask;

    cout << "blue " << bitset<8>(green) << " " << int(green) << endl;
    cout << "blue " << bitset<8>(blue) << " " << int(blue) << endl;

    return 0;
}
