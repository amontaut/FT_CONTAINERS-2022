file="mine.txt"

if [ -f "$file" ] ; then
    rm "$file"
fi

file="real.txt"

if [ -f "$file" ] ; then
    rm "$file"
fi

c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mystack/my_empty.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mystack/my_operator\!\=.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mystack/my_operator\<.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mystack/my_operator\<\=.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mystack/my_operator\=.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mystack/my_operator\=\=.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mystack/my_operator\>.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mystack/my_operator\>\=.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mystack/my_pop.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mystack/my_push.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mystack/my_size.cpp && ./a.out >> mine.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 mystack/my_top.cpp && ./a.out >> mine.txt


c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realstack/real_empty.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realstack/real_operator\!\=.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realstack/real_operator\<.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realstack/real_operator\<\=.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realstack/real_operator\=.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realstack/real_operator\=\=.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realstack/real_operator\>.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realstack/real_operator\>\=.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realstack/real_pop.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realstack/real_push.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realstack/real_size.cpp && ./a.out >> real.txt
c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 realstack/real_top.cpp && ./a.out >> real.txt

diff mine.txt real.txt