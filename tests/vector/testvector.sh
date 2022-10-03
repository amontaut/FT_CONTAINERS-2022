file="mine.txt"

if [ -f "$file" ] ; then
    rm "$file"
fi

file="real.txt"

if [ -f "$file" ] ; then
    rm "$file"
fi

c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 myvector/my_at.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 myvector/my_assign.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 myvector/my_back.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 myvector/my_begin_end.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 myvector/my_capacity.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 myvector/my_clear.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 myvector/my_empty.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 myvector/my_erase.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 myvector/my_front.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 myvector/my_get_allocator.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 myvector/my_insert.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 myvector/my_max_size.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 myvector/my_operator\!\=.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 myvector/my_operator\[\].cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 myvector/my_operator\<.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 myvector/my_operator\<\=.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 myvector/my_operator\=.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 myvector/my_operator\=\=.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 myvector/my_operator\>.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 myvector/my_operator\>\=.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 myvector/my_pop_back.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 myvector/my_push_back.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 myvector/my_rbegin_rend.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 myvector/my_reserve.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 myvector/my_resize.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 myvector/my_swap_non_member.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 myvector/my_swap.cpp && ./a.out >> mine.txt

c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realvector/real_at.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realvector/real_assign.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realvector/real_back.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realvector/real_begin_end.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realvector/real_capacity.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realvector/real_clear.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realvector/real_empty.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realvector/real_erase.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realvector/real_front.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realvector/real_get_allocator.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realvector/real_insert.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realvector/real_max_size.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realvector/real_operator\!\=.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realvector/real_operator\[\].cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realvector/real_operator\<.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realvector/real_operator\<\=.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realvector/real_operator\=.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realvector/real_operator\=\=.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realvector/real_operator\>.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realvector/real_operator\>\=.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realvector/real_pop_back.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realvector/real_push_back.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realvector/real_rbegin_rend.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realvector/real_reserve.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realvector/real_resize.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realvector/real_swap_non_member.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realvector/real_swap.cpp && ./a.out >> real.txt
diff mine.txt real.txt