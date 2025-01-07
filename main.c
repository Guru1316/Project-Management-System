int main() {
    int ichoice; // Variable to store user's choice
    do {
        // Display menu options
        printf("\n");
        printf("Enter your choice:\n");
        printf("1. Create Team\n");
        printf("2. Hire Team Member\n");
        printf("3. Assign Project\n");
        printf("4. Fire Team Members\n");
        printf("5. Display Team\n");
        printf("6. Exit\n");
        printf("\n");
        scanf("%d", &ichoice); // Read user's choice
        getchar(); // Consume newline character

        // Switch case to call appropriate function based on user's choice
        switch (ichoice) {
            case 1:
                create(); // Call create function
                break;
            case 2:
                hire(); // Call hire function
                break;
            case 3:
                assign(); // Call assign function
                break;
            case 4:
                fire(); // Call fire function
                break;
            case 5:
                display(); // Call display function
                break;
            case 6:
                printf("Thanks for visiting\n");
                printf("\n");
                break;
        }
    } while (ichoice < 6); // Loop until user chooses to exit

    return 0;
}