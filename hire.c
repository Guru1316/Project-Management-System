// Function to hire team members
int hire() {
    int id, team_index = -1; // Variables to store team ID and index
    printf("Enter team id: ");
    scanf("%d", &id); // Read team ID
    getchar(); // Consume newline character

    // Find the team with the given ID
    for (int i = 0; i < iteam_no; i++) {
        if (teams[i].iteam_id == id) {
            team_index = i; // Store the index of the team
            break;
        }
    }

    if (team_index == -1) {
        printf("Team not found\n");
        return 0;
    }

    int members_to_add;
    printf("Enter number of team members to add: ");
    scanf("%d", &members_to_add); // Read number of team members to add
    getchar(); // Consume newline character

    if (teams[team_index].ino_members + members_to_add > MAX_TEAM_MEMBERS) {
        printf("Adding %d members exceeds the maximum team size\n", members_to_add);
        return 0;
    }

    // Read and store team member details
    for (int j = 0; j < members_to_add; j++) {
        int member_index = teams[team_index].ino_members + j;
        printf("\nEnter team member %d name: ", member_index + 1);
        scanf("%[^\n]", teams[team_index].team_members[member_index].cname); // Read team member name
        getchar(); // Consume newline character
        printf("Enter team member %d id: ", member_index + 1);
        scanf("%d", &teams[team_index].team_members[member_index].iid); // Read team member ID
        getchar(); // Consume newline character
        printf("Enter team member %d email: ", member_index + 1);
        scanf("%[^\n]", teams[team_index].team_members[member_index].cemail); // Read team member email
        getchar(); // Consume newline character
    }

    teams[team_index].ino_members += members_to_add; // Update number of members in the team
    return 0;
}