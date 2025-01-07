// Function to fire a team member
int fire() {
    int id; // Variable to store team ID
    printf("Enter team id: ");
    scanf("%d", &id); // Read team ID
    getchar(); // Consume newline character

    // Find the team with the given ID
    for (int i = 0; i < iteam_no; i++) {
        if (teams[i].iteam_id == id) {
            printf("Enter team member id: ");
            scanf("%d", &id); // Read team member ID
            getchar(); // Consume newline character

            // Find and remove the team member with the given ID
            for (int j = 0; j < teams[i].ino_members; j++) {
                if (teams[i].team_members[j].iid == id) {
                    for (int k = j; k < teams[i].ino_members - 1; k++) {
                        teams[i].team_members[k] = teams[i].team_members[k + 1];
                    }
                    teams[i].ino_members--; // Decrement the number of members
                    printf("Team member fired.\n");
                    return 0;
                }
            }
            printf("Team member not found.\n");
        }
    }
    return 0;
}
