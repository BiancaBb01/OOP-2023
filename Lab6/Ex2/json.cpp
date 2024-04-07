#include "json.h"

void NullValue::print(std::ostream& out, int indentation) const {
    out << "null";
}

void NumberValue::print(std::ostream& out, int indentation) const {
    out << value;
}

void BoolValue::print(std::ostream& out, int indentation) const {
    out << (value ? "true" : "false");
}

void StringValue::print(std::ostream& out, int indentation) const {
    out << '"' << value << '"';
}

ArrayValue::~ArrayValue() {
    
}

void ArrayValue::add(JsonValue* value) {
    values.emplace_back(value);
}

void ArrayValue::print(std::ostream& out, int indentation) const {
    out << '[';
    if (!values.empty()) {
        out << '\n';
        for (const auto& val : values) {
            out << std::string(indentation + 4, ' '); 
            val->print(out, indentation + 4);
            out << ",\n";
        }
        out << std::string(indentation, ' ');
    }
    out << ']';
}

ObjectValue::~ObjectValue() {
    
}

void ObjectValue::add(const std::string& name, JsonValue* value) {
    members.emplace_back(name, value);
}

unsigned int ObjectValue::operator*() const {
    return members.size();
}

void ObjectValue::print(std::ostream& out, int indentation) const {
    out << '{';
    if (!members.empty()) {
        out << '\n';
        for (const auto& member : members) {
            out << std::string(indentation + 4, ' '); 
            out << '"' << member.first << "\": ";
            member.second->print(out, indentation + 4);
            out << ",\n";
        }
        out << std::string(indentation, ' '); 
    }
    out << '}';
}
