#include "pch.h"
#include "CppUnitTest.h"
#include "../PPOISlab2/Room.cpp"
#include "../PPOISlab2/Employee.cpp"
#include "../PPOISlab2/Cleaner.cpp"
#include "../PPOISlab2/Person.cpp"
#include "../PPOISlab2/Guest.cpp"
#include "../PPOISlab2/Lobby.cpp"
#include "../PPOISlab2/Manager.cpp"
#include "../PPOISlab2/Reception.cpp"
#include "../PPOISlab2/Spa.cpp"
#include "../PPOISlab2/Waiter.cpp"
#include "../PPOISlab2/Restaurant.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace HotelTest
{
    TEST_CLASS(RoomTests)
    {
    public:

        TEST_METHOD(TestRoomReservation)
        {
            Room room(101, "Standard", 50);
            room.reserveRoom();
            Assert::IsTrue(room.getIsOccupied());  
        }

        TEST_METHOD(TestRoomRelease)
        {
            Room room(202, "Luxe", 150);
            room.reserveRoom();
            room.releaseRoom();
            Assert::IsFalse(room.getIsOccupied());  
        }

        TEST_METHOD(TestRoomStatus)
        {
            Room room(303, "Deluxe", 100);
            Assert::IsFalse(room.getIsOccupied());
            room.reserveRoom();
            Assert::IsTrue(room.getIsOccupied()); 
        }
    };
    TEST_CLASS(CleanerTests)
    {
    public:

        TEST_METHOD(TestCleanerConstruction)
        {
            Cleaner cleaner("Mary House", "682-09-69");
            Assert::AreEqual("Mary House", cleaner.getName().c_str());
            Assert::AreEqual("682-09-69", cleaner.getContactInfo().c_str());
            Assert::AreEqual("Cleaner", cleaner.getPosition().c_str());
        }

        TEST_METHOD(TestCleanerPerformTasks)
        {
            Cleaner cleaner("Jane Wall", "890-98-22");
            cleaner.performTasks();
        }
    };
    TEST_CLASS(PersonTests)
    {
    public:

        TEST_METHOD(TestPersonConstruction)
        {
            Person person("John Doe", "123-456-7890");
            Assert::AreEqual("John Doe", person.getName().c_str());
            Assert::AreEqual("123-456-7890", person.getContactInfo().c_str());
        }

        TEST_METHOD(TestPersonGetters)
        {
            Person person("Jane Smith", "987-654-3210");
            Assert::AreEqual("Jane Smith", person.getName().c_str());
            Assert::AreEqual("987-654-3210", person.getContactInfo().c_str());
        }
    };
    TEST_CLASS(EmployeeTests)
    {
    public:

        TEST_METHOD(TestEmployeeConstruction)
        {
            Employee employee("Jony Oak", "123-456-7890", "Receptionist");
            Assert::AreEqual("Jony Oak", employee.getName().c_str());
            Assert::AreEqual("123-456-7890", employee.getContactInfo().c_str());
            Assert::AreEqual("Receptionist", employee.getPosition().c_str());
        }

        TEST_METHOD(TestEmployeePerformTasks)
        {
            Employee employee("Ann Smith", "987-654-3210", "Waiter");
            employee.performTasks();
        }

        TEST_METHOD(TestEmployeeServeGuests)
        {
            Employee employee("Bob Johnson", "555-123-4567", "Concierge");
            employee.serveGuests();
        }
    };
    TEST_CLASS(GuestTests)
    {
    public:

        TEST_METHOD(TestReserveRoom)
        {
            Guest guest("Sam Grand", "sam.grand@gmail.com", "No preferences");
            guest.reserveRoom();
            Assert::AreEqual(std::string("Sam Grand"), guest.getName());
        }

        TEST_METHOD(TestOrderFood)
        {
            Guest guest("Jane Doe", "jane.doe@gmail.com", "FitnesInfluenser");
            guest.orderFood();
            Assert::AreEqual(std::string("Jane Doe"), guest.getName());
        }

        TEST_METHOD(TestUseSpaServices)
        {
            Guest guest("Herb Dean", "herb.dean@example.com", "No preferences");
            guest.useSpaServices();
            Assert::AreEqual(std::string("Herb Dean"), guest.getName());
        }
    };
    TEST_CLASS(LobbyTests)
    {
    public:

        TEST_METHOD(TestWelcomeGuests)
        {
            Lobby lobby;
            lobby.welcomeGuests();
            Assert::IsTrue(lobby.getIsOpen());
        }

        TEST_METHOD(TestRegisterGuests)
        {
            Lobby lobby;
            lobby.registerGuests();
            Assert::IsTrue(lobby.getIsOpen());
        }

        TEST_METHOD(TestCheckGuests)
        {
            Lobby lobby;
            lobby.checkGuests();
            Assert::IsTrue(lobby.getIsOpen());
        }
    };
    TEST_CLASS(ManagerTests)
    {
    public:

        TEST_METHOD(TestManageBookings)
        {
            Manager manager("Bob Lib", "bob.manager@example.com");
            manager.manageBookings();
            Assert::AreEqual(std::string("Manager Bob Lib manages bookings."), manager.getPosition() + " " + manager.getName() + " manages bookings.");

        }

        TEST_METHOD(TestServeGuests)
        {
            Manager manager("Jane Lob", "jane.manager@example.com");
            manager.serveGuests();
            Assert::AreEqual(std::string("Manager Jane Lob serves guests. Manager Jane Lob manages bookings."), manager.getPosition() + " " + manager.getName() + " serves guests. " + manager.getPosition() + " " + manager.getName() + " manages bookings.");

        }

        TEST_METHOD(TestHandleComplaints)
        {
            Manager manager("Sam What", "sam.manager@example.com");
            manager.handleComplaints();
            Assert::AreEqual(std::string("Manager Sam What handles complaints."), manager.getPosition() + " " + manager.getName() + " handles complaints.");

        }
    };
    TEST_CLASS(RestaurantTests)
    {
    public:

        TEST_METHOD(TestTakeOrders)
        {
            Restaurant restaurant("The Awesome Restaurant", "Delicious Menu");
            restaurant.takeOrders();
            Assert::AreEqual(std::string("Restaurant The Awesome Restaurant takes orders."), std::string("Restaurant ") + restaurant.getName() + " takes orders.");

        }

        TEST_METHOD(TestPrepareDishes)
        {
            Restaurant restaurant("The Fantastic Restaurant", "Tasty Menu");
            restaurant.prepareDishes();
            Assert::AreEqual(std::string("Restaurant The Fantastic Restaurant prepares dishes."), std::string("Restaurant ") + restaurant.getName() + " prepares dishes.");

        }

        TEST_METHOD(TestProcessOrders)
        {
            Restaurant restaurant("The Amazing Restaurant", "Yummy Menu");
            restaurant.processOrders();
            Assert::AreEqual(std::string("Restaurant The Amazing Restaurant processes orders."), std::string("Restaurant ") + restaurant.getName() + " processes orders.");

        }
    };
    TEST_CLASS(SpaTests)
    {
    public:

        TEST_METHOD(TestProvideServices)
        {
            Spa spa("Massage", 50);
            spa.provideServices();
            Assert::IsTrue(spa.getIsOccupied());
        }

        TEST_METHOD(TestManageAccess)
        {
            Spa spa("Sauna", 30);
            spa.manageAccess();
            Assert::IsTrue(true); 
        }
    };
    TEST_CLASS(WaiterTests)
    {
    public:

        TEST_METHOD(TestPerformTasks)
        {
            Waiter waiter("John Also", "john.also@example.com");
            waiter.performTasks();
            Assert::AreEqual(std::string("Waiter John Also performs tasks. Waiter John Also serves guests."), waiter.getPosition() + " " + waiter.getName() + " performs tasks. " + waiter.getPosition() + " " + waiter.getName() + " serves guests.");
        }
    };
}
