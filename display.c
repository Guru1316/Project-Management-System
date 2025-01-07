// Function to display team details
int display() {
    int id; // Variable to store team ID
    printf("Enter team id: ");
    scanf("%d", &id); // Read team ID
    getchar(); // Consume newline character

    // Find the team with the given ID
    for (int i = 0; i < iteam_no; i++) {
        if (teams[i].iteam_id == id) {
            printf("\nTeam name: %s\n", teams[i].cteam_name); // Display team name
            printf("Team id: %d\n", teams[i].iteam_id); // Display team ID
            for (int j = 0; j < teams[i].ino_members; j++) {
                printf("\nTeam member %d name: %s\n", j + 1, teams[i].team_members[j].cname); // Display team member name
                printf("Team member %d id: %d\n", j + 1, teams[i].team_members[j].iid); // Display team member ID
                printf("Team member %d email: %s\n", j + 1, teams[i].team_members[j].cemail); // Display team member email
            }
            printf("\nProject name: %s\n", teams[i].projects.cproject_name); // Display project name
            printf("Project id: %d\n", teams[i].projects.iproject_id); // Display project ID
            printf("Project description: %s\n", teams[i].projects.cproject_description); // Display project description
            printf("Project deadline: %s\n", teams[i].projects.cproject_deadline); // Display project deadline
        }
    }
    return 0;
}