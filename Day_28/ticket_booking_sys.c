#include <stdio.h>

struct Ticket
{
    int ticketID;
    char passengerName[50];
    int numberOfTickets;
    float ticketPrice;
    float totalFare;
};

int main()
{
    struct Ticket t;

    printf("Enter Ticket ID: ");
    scanf("%d", &t.ticketID);

    getchar();   // Consume newline

    printf("Enter Passenger Name: ");
    fgets(t.passengerName, sizeof(t.passengerName), stdin);

    printf("Enter Number of Tickets: ");
    scanf("%d", &t.numberOfTickets);

    printf("Enter Ticket Price: ");
    scanf("%f", &t.ticketPrice);

    // Calculate total fare
    t.totalFare = t.numberOfTickets * t.ticketPrice;

    // Display ticket details
    printf("\n========== TICKET DETAILS ==========\n");
    printf("Ticket ID          : %d\n", t.ticketID);
    printf("Passenger Name     : %s", t.passengerName);
    printf("Number of Tickets  : %d\n", t.numberOfTickets);
    printf("Ticket Price       : %.2f\n", t.ticketPrice);
    printf("Total Fare         : %.2f\n", t.totalFare);

    return 0;
}