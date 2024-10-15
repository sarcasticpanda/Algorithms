#include <iostream>
#include <vector>
#include <memory>
#include <string>
using namespace std;

// Singleton Pattern
class Singleton {
private:
    static Singleton* instance;
    Singleton() {}
public:
    static Singleton* getInstance() {
        if (instance == nullptr) {
            instance = new Singleton();
        }
        return instance;
    }

    void showMessage() {
        cout << "Singleton Instance" << endl;
    }
};
Singleton* Singleton::instance = nullptr;

// Factory Pattern
class Product {
public:
    virtual void createProduct() = 0;
    virtual ~Product() {}
};

class ProductA : public Product {
public:
    void createProduct() override {
        cout << "Product A Created" << endl;
    }
};

class ProductB : public Product {
public:
    void createProduct() override {
        cout << "Product B Created" << endl;
    }
};

class Factory {
public:
    static unique_ptr<Product> createProduct(const string& type) {
        if (type == "A") return make_unique<ProductA>();
        if (type == "B") return make_unique<ProductB>();
        return nullptr;
    }
};

// Adapter Pattern
class Target {
public:
    virtual void request() {
        cout << "Target: Default request" << endl;
    }
};

class Adaptee {
public:
    void specificRequest() {
        cout << "Adaptee: Specific request" << endl;
    }
};

class Adapter : public Target {
private:
    Adaptee* adaptee;
public:
    Adapter(Adaptee* a) : adaptee(a) {}

    void request() override {
        adaptee->specificRequest();
    }
};

// Observer Pattern
class Observer {
public:
    virtual void update(const string& message) = 0;
    virtual ~Observer() {}
};

class Subject {
private:
    vector<Observer*> observers;
public:
    void addObserver(Observer* observer) {
        observers.push_back(observer);
    }

    void notify(const string& message) {
        for (Observer* observer : observers) {
            observer->update(message);
        }
    }
};

class ConcreteObserver : public Observer {
private:
    string name;
public:
    ConcreteObserver(const string& n) : name(n) {}

    void update(const string& message) override {
        cout << "Observer " << name << ": " << message << endl;
    }
};

// Main code demonstrating all patterns
int main() {
    // Singleton pattern
    Singleton* singleton = Singleton::getInstance();
    singleton->showMessage();

    // Factory pattern
    unique_ptr<Product> productA = Factory::createProduct("A");
    unique_ptr<Product> productB = Factory::createProduct("B");
    productA->createProduct();
    productB->createProduct();

    // Adapter pattern
    Adaptee adaptee;
    Adapter adapter(&adaptee);
    adapter.request();

    // Observer pattern
    Subject subject;
    ConcreteObserver observer1("Observer 1");
    ConcreteObserver observer2("Observer 2");

    subject.addObserver(&observer1);
    subject.addObserver(&observer2);
    
    subject.notify("Event 1 Occurred");

    return 0;
}
