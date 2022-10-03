file="mine.txt"

if [ -f "$file" ] ; then
    rm "$file"
fi

file="real.txt"

if [ -f "$file" ] ; then
    rm "$file"
fi

c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mymap/my_begin_end.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mymap/my_clear.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mymap/my_count.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mymap/my_empty.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mymap/my_equal_range.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mymap/my_erase.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mymap/my_find.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mymap/my_get_allocator.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mymap/my_insert.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mymap/my_key_comp.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mymap/my_lower_bound.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mymap/my_max_size.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mymap/my_operator\!\=.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mymap/my_operator\[\].cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mymap/my_operator\<.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mymap/my_operator\<\=.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mymap/my_operator\=.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mymap/my_operator\=\=.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mymap/my_operator\>.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mymap/my_operator\>\=.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mymap/my_rbegin_rend.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mymap/my_size.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mymap/my_swap_non_member.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mymap/my_swap.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mymap/my_upper_bound.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mymap/my_value_comp.cpp && ./a.out >> mine.txt


c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realmap/real_begin_end.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realmap/real_clear.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realmap/real_count.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realmap/real_empty.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realmap/real_equal_range.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realmap/real_erase.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realmap/real_find.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realmap/real_get_allocator.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realmap/real_insert.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realmap/real_key_comp.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realmap/real_lower_bound.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realmap/real_max_size.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realmap/real_operator\!\=.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realmap/real_operator\[\].cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realmap/real_operator\<.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realmap/real_operator\<\=.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realmap/real_operator\=.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realmap/real_operator\=\=.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realmap/real_operator\>.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realmap/real_operator\>\=.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realmap/real_rbegin_rend.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realmap/real_size.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realmap/real_swap_non_member.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realmap/real_swap.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realmap/real_upper_bound.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realmap/real_value_comp.cpp && ./a.out >> real.txt

diff mine.txt real.txt