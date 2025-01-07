

int iteam_no = 0; // Global variable to keep track of the number of teams

// Structure to hold team member information
struct team_member {
    char cname[20]; // Name of the team member
    int iid; // ID of the team member
    char cemail[30]; // Email of the team member
};

// Structure to hold project information
struct project {
    char cproject_name[20]; // Name of the project
    int iproject_id; // ID of the project
    char cproject_description[100]; // Description of the project
    char cproject_deadline[20]; // Deadline of the project
};

// Structure to hold team information
struct team {
    char cteam_name[30]; // Name of the team
    int iteam_id; // ID of the team
    int ino_members; // Number of members in the team
    struct team_member team_members[MAX_TEAM_MEMBERS]; // Array of team members
    struct project projects; // Project assigned to the team
} teams[MAX_TEAMS]; // Array of teams