// Function to assign a project to a team
int assign() {
    int id; // Variable to store team ID
    printf("Enter team id: ");
    scanf("%d", &id); // Read team ID
    getchar(); // Consume newline character

    // Find the team with the given ID
    for (int i = 0; i < iteam_no; i++) {
        if (teams[i].iteam_id == id) {
            // Read project details from user
            printf("Enter project name: ");
            scanf("%[^\n]", teams[i].projects.cproject_name); // Read project name
            getchar(); // Consume newline character
            printf("Enter project id: ");
            scanf("%d", &teams[i].projects.iproject_id); // Read project ID
            getchar(); // Consume newline character
            printf("Enter project description: ");
            scanf("%[^\n]", teams[i].projects.cproject_description); // Read project description
            getchar(); // Consume newline character
            printf("Enter project deadline: ");
            scanf("%[^\n]", teams[i].projects.cproject_deadline); // Read project deadline
            getchar(); // Consume newline character
        }
    }
    return 0;
}