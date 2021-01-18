# Traveling-To-Baseball-Stadiums

Text based program that allow the user to travel from one baseball field to another to plan dream Vacation to watch major baseball team.
It allow the user to purchase (non-real) merchandise and other items when at specific baseball field.

The program is used in in this order for public user:
1) Automatically extracts data of existing baseball fields from input.txt
2) Allows the user to specify what team they want to watch play.
3) Find the fastest route from current location to the next baseball stadium where users team is playing.
4) Allows user to print the stadium name, teams playing and merchandice allowed to buy.

The Admin to this program can add addictional teams and baseball fields.
When a a new team and baseball field is added, Then the new duo is now added to the list of others and added to a graph to
be able to find the shortest distance from any other field to the currently added field.
