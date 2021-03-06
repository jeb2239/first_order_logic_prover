#ifndef FIRST_ORDER_LOGIC_SENTENCE_VARIABLE_HPP
#define FIRST_ORDER_LOGIC_SENTENCE_VARIABLE_HPP
#include "term.hpp"
#include <string>
namespace first_order_logic
{
    struct variable
    {
        std::string name;
        variable( const std::string & str ) : name( str ) { }
        template< typename T >
        explicit variable( const T & t ) : name( t ) { }
        explicit variable( ) { }
        explicit operator std::string( ) const { return name; }
        bool operator < ( const variable & comp ) const { return name < comp.name; }
        bool operator != ( const variable & comp ) const { return name != comp.name; }
        bool operator == ( const variable & comp ) const { return name == comp.name; }
    };
}
#endif //FIRST_ORDER_LOGIC_SENTENCE_VARIABLE_HPP
