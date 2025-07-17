
// Creating Arrey to store object 
var studentArr = [
  {
    Roll: 1,
    Name: "Aakriti Rimal",
    Faculty: "BSc.CSIT",
    Year: 2024,
    Gender: "Female",
    Phone: "9812848886",
  },

  {
    Roll: 2,
    Name: "Aeron Karki",
    Faculty: "BSc.CSIT",
    Year: 2024,
    Gender: "Male",
    Phone: "9745235964",
  },

  {
    Roll: 3,
    Name: "Anil Kumar Shah",
    Faculty: "BSc.CSIT",
    Year: 2024,
    Gender: "Male",
    Phone: "9804768274",
  },

  {
    Roll: 4,
    Name: "Anshu Neupane",
    Faculty: "BSc.CSIT",
    Year: 2024,
    Gender: "Female",
    Phone: "9827033031",
  },

  {
    Roll: 5,
    Name: "Bhuvan Ghimire",
    Faculty: "BSc.CSIT",
    Year: 2024,
    Gender: "Male",
    Phone: "9804328595",
  },

  {
    Roll: 6,
    Name: "Bivek Bishwakarma",
    Faculty: "BSc.CSIT",
    Year: 2024,
    Gender: "Male",
    Phone: "9824399589",
  },

  {
    Roll: 7,
    Name: "Bishwajyoti Rajbanshi",
    Faculty: "BSc.CSIT",
    Year: 2024,
    Gender: "Male",
    Phone: "9807327212",
  },

  {
    Roll: 8,
    Name: "Dharmendra Yadav",
    Faculty: "BSc.CSIT",
    Year: 2024,
    Gender: "Male",
    Phone: "9807029898",
  },

  {
    Roll: 9,
    Name: "Dikshant Parajuli",
    Faculty: "BSc.CSIT",
    Year: 2024,
    Gender: "Male",
    Phone: "9801472395",
  },

  {
    Roll: 10,
    Name: "Gyanendra Yadav",
    Faculty: "BSc.CSIT",
    Year: 2024,
    Gender: "Male",
    Phone: "9826756319",
  },

  {
    Roll: 11,
    Name: "Hira Prashad Niraula",
    Faculty: "BSc.CSIT",
    Year: 2024,
    Gender: "Male",
    Phone: "9804334084",
  },

  {
    Roll: 12,
    Name: "Karuna Pokharel",
    Faculty: "BSc.CSIT",
    Year: 2024,
    Gender: "Female",
    Phone: "9807734095",
  },

  {
    Roll: 13,
    Name: "Manish Shah",
    Faculty: "BSc.CSIT",
    Year: 2024,
    Gender: "Male",
    Phone: "9818822443",
  },

  {
    Roll: 14,
    Name: "Mausham Shah",
    Faculty: "BSc.CSIT",
    Year: 2024,
    Gender: "Male",
    Phone: "9708081582",
  },

  {
    Roll: 15,
    Name: "Nanu Thapa",
    Faculty: "BSc.CSIT",
    Year: 2024,
    Gender: "Female",
    Phone: "9825343337",
  },

  {
    Roll: 16,
    Name: "Prajita Bhattarai",
    Faculty: "BSc.CSIT",
    Year: 2024,
    Gender: "Female",
    Phone: "9811050084",
  },

  {
    Roll: 17,
    Name: "Prajwal Shrestha",
    Faculty: "BSc.CSIT",
    Year: 2024,
    Gender: "Male",
    Phone: "9844567846",
  },

  {
    Roll: 18,
    Name: "Prashant Shah",
    Faculty: "BSc.CSIT",
    Year: 2024,
    Gender: "Male",
    Phone: "9815327783",
  },

  {
    Roll: 19,
    Name: "Prashant Karki",
    Faculty: "BSc.CSIT",
    Year: 2024,
    Gender: "Male",
    Phone: "9763500116",
  },

  {
    Roll: 20,
    Name: "Pratikshya Koirala",
    Faculty: "BSc.CSIT",
    Year: 2024,
    Gender: "Female",
    Phone: "9862333575",
  },

  {
    Roll: 21,
    Name: "Rajan Pandit",
    Faculty: "BSc.CSIT",
    Year: 2024,
    Gender: "Male",
    Phone: "9819093875",
  },

  {
    Roll: 22,
    Name: "Ravi Kumar Shah",
    Faculty: "BSc.CSIT",
    Year: 2024,
    Gender: "Male",
    Phone: "9702938455",
  },

  {
    Roll: 23,
    Name: "Ribesh Pradhan",
    Faculty: "BSc.CSIT",
    Year: 2024,
    Gender: "Male",
    Phone: "9814971694",
  },

  {
    Roll: 24,
    Name: "Rishav Karki",
    Faculty: "BSc.CSIT",
    Year: 2024,
    Gender: "Male",
    Phone: "9861663608",
  },

  {
    Roll: 25,
    Name: "Roshan Dhakal",
    Faculty: "BSc.CSIT",
    Year: 2024,
    Gender: "Male",
    Phone: "9744329869",
  },

  {
    Roll: 26,
    Name: "Sanjog Dipali Rai",
    Faculty: "BSc.CSIT",
    Year: 2024,
    Gender: "Male",
    Phone: "9749204243",
  },

  {
    Roll: 27,
    Name: "Sumiran Niraula",
    Faculty: "BSc.CSIT",
    Year: 2024,
    Gender: "Male",
    Phone: "9824031554",
  },

  {
    Roll: 28,
    Name: "Uttam karki",
    Faculty: "BSc.CSIT",
    Year: 2024,
    Gender: "Male",
    Phone: "9849519985",
  },

  {
    Roll: 29,
    Name: "Yugal Ghimire",
    Faculty: "BSc.CSIT",
    Year: 2024,
    Gender: "Male",
    Phone: "9842964700",
  },

];

// Using for loop to print the objects inside the array
for (let student of studentArr) {
  document.writeln("<tr>");
  for (const objkey in student) {
    document.writeln("<td>" + student[objkey] + "</td>");
  }
  document.writeln("</tr>");
}