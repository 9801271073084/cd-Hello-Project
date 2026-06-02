#include <iostream>
#include <string>
using namespace std; // PA0402: Use directive

// PA0401: Declare a namespace and namespace members
namespace LearningPlatform {
    string instruction = "Namespace Declaration";

    void showInstruction() {
        cout << "Topic: " << instruction << endl;
    }

    void showOutcome(string code, string description) {
        cout << code << ": " << description << endl;
    }
}

// PA0401: Another namespace with its own members
namespace Assessment {
    int totalOutcomes = 2;

    void showTotal() {
        cout << "Total learning outcomes: " << totalOutcomes << endl;
    }
}

int main() {
    cout << "C++ Namespace Declaration Program" << endl;
    cout << "---------------------------------" << endl;

    // Accessing namespace members using the scope resolution operator ::
    LearningPlatform::showInstruction();

    cout << endl << "Learner must be able to:" << endl;
    LearningPlatform::showOutcome("PA0401", "Declare namespaces and namespace members");
    LearningPlatform::showOutcome("PA0402", "Use directives");

    cout << endl;
    Assessment::showTotal();

    cout << endl << "Using directive example:" << endl;

    // PA0402: Use directive for a custom namespace
    using namespace LearningPlatform;

    // Now we can call members without writing LearningPlatform::
    showOutcome("Example", "The using directive allows direct access to namespace members");

    return 0;
}