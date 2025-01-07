// Function to create a new team
int create() {
    printf("Enter team name: ");
    scanf("%[^\n]", teams[iteam_no].cteam_name); // Read team name
    getchar(); // Consume newline character
    printf("Enter team id: ");
    scanf("%d", &teams[iteam_no].iteam_id); // Read team ID
    getchar(); // Consume newline character
    iteam_no++; // Increment the number of teams
    return 0;
}
