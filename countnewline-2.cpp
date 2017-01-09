#include <iostream>
#include <cctype>

int main()
{
    std::cout << "Type in letters, once finished press CTRL+D/Z (UNIX/WINDOWS)\n" ;

    constexpr char TAB = '\t' ;
    constexpr char NEWLINE = '\n' ;

    std::size_t num_tabs = 0 ;
    std::size_t num_newlines = 0 ;
    std::size_t num_spaces = 0 ;

    char c ;
    // http://en.cppreference.com/w/cpp/io/basic_istream/get
    while( std::cin.get(c) )
    {
        if( std::isspace(c) )
        {
            switch(c)
            {
                case TAB: ++num_tabs ; break ;
                case NEWLINE: ++num_newlines ; break ;
                default: ++num_spaces ;
            }
        }
    }

    std::cout << "#tabs: " << num_tabs << '\n'
               << "#newlines: " << num_newlines << '\n'
               << "#other space characters: " << num_spaces << '\n' ;
}
