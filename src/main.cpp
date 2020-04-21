#include <iostream>
#include <Rocket/src/include/lexer/lexer_classes.h>
#include <Rocket/src/include/lexer/lexer.h>
#include <Rocket/src/include/parser/ast.h>


int main(){

    Tokenizer tokenizer;
    String_Buffer sbuffer;
    
    std::cout << "Check out the official Boost-Lang Github Site \n" << "https://github.com/fuchslenny/boost";
    
    lexing(tokenizer, sbuffer);

    make_ast();
}