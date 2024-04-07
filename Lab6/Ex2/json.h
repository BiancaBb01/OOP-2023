#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <memory>

class JsonValue {
public:
    virtual ~JsonValue() = default;
    virtual void print(std::ostream& out, int indentation = 0) const = 0;
};

class NullValue : public JsonValue {
public:
    void print(std::ostream& out, int indentation = 0) const override;
};

class NumberValue : public JsonValue {
public:
    NumberValue(int value) : value(value) {}
    void print(std::ostream& out, int indentation = 0) const override;

private:
    int value;
};

class BoolValue : public JsonValue {
public:
    BoolValue(bool value) : value(value) {}
    void print(std::ostream& out, int indentation = 0) const override;

private:
    bool value;
};

class StringValue : public JsonValue {
public:
    StringValue(const std::string& value) : value(value) {}
    void print(std::ostream& out, int indentation = 0) const override;

private:
    std::string value;
};

class ArrayValue : public JsonValue {
public:
    ~ArrayValue();
    void add(JsonValue* value);
    void print(std::ostream& out, int indentation = 0) const override;

private:
    std::vector<std::unique_ptr<JsonValue>> values;
};

class ObjectValue : public JsonValue {
public:
    ~ObjectValue();
    void add(const std::string& name, JsonValue* value);
    unsigned int operator*() const;
    void print(std::ostream& out, int indentation = 0) const override;

private:
    std::vector<std::pair<std::string, std::unique_ptr<JsonValue>>> members;
};
