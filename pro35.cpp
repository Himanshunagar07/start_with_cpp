#include <iostream>
using namespace std;

// Base class
class Base {
public:
    int publicVar;

protected:
    int protectedVar;

private:
    int privateVar;  // Not accessible in derived class

public:
    Base() {
        publicVar = 1;
        protectedVar = 2;
        privateVar = 3;
    }

    void showBase() {
        cout << "Base::publicVar = " << publicVar << endl;
        cout << "Base::protectedVar = " << protectedVar << endl;
        cout << "Base::privateVar = " << privateVar << endl;
    }
};

// Derived with public inheritance
class PublicDerived : public Base {
public:
    void showAccess() {
        cout << "PublicDerived::publicVar = " << publicVar << endl;
        cout << "PublicDerived::protectedVar = " << protectedVar << endl;
        // cout << privateVar; // ❌ Not accessible (private in Base)
    }
};

// Derived with protected inheritance
class ProtectedDerived : protected Base {
public:
    void showAccess() {
        cout << "ProtectedDerived::publicVar = " << publicVar << endl;
        cout << "ProtectedDerived::protectedVar = " << protectedVar << endl;
    }
};

// Derived with private inheritance
class PrivateDerived : private Base {
public:
    void showAccess() {
        cout << "PrivateDerived::publicVar = " << publicVar << endl;
        cout << "PrivateDerived::protectedVar = " << protectedVar << endl;
    }
};

int main() {
    PublicDerived pub;
    pub.showAccess();
    cout << "Accessing publicVar from main(): " << pub.publicVar << endl;  // ✅ Allowed

    ProtectedDerived prot;
    prot.showAccess();
    // cout << prot.publicVar; // ❌ Not allowed: becomes protected

    PrivateDerived priv;
    priv.showAccess();
    // cout << priv.publicVar; // ❌ Not allowed: becomes private

    return 0;
}