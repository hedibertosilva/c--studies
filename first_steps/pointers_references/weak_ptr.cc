#include <iostream>
#include <memory>


class MyClass {
public:
    void DoSomething() {
        std::cout << "Doing something..." << std::endl;
    }
};

int main() {
    std::weak_ptr<MyClass> weak;

    {
        std::shared_ptr<MyClass> shared = std::make_shared<MyClass>();
        weak = shared;

        if (auto sharedFromWeak = weak.lock()) {
            sharedFromWeak->DoSomething();
            std::cout << "Shared uses count: " << sharedFromWeak.use_count() << '\n';
        }
    }

    if (auto sharedFromWeak = weak.lock()) {
        // This block will not be executed because the object was destroyed.
    } else {
        std::cout << "Object has been destroyed." << std::endl;
    }

    return 0;
}
